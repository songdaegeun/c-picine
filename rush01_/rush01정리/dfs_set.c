/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 07:17:12 by dasong            #+#    #+#             */
/*   Updated: 2023/02/19 08:10:06 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_satisfied_vp(int n, int *map, int *v_p, int i);

int	is_satisfied_r_c(int n, int *map, int *ij, int height)//현재 칸의 행과 열의 모든 높이를 탐색하여 중복체크 하는 함수
{
	int	i;

	i = 0;
	while (i < n)//n*n행렬이기에 n번씩 반복
	{
		if ((map[ij[0] * n + i] == height) || (map[i * n + ij[1]] == height))//i번째 칸에 중복이 발생하면 0을 반환, 열과 행의 길이가 같기에 동시에 진행
			return (0);
		i++;
	}
	return (1);
}

int	**making_zero_location_arr(int *map, int n, int *ijk, int len_of_zero_arr)//빈공간의 정보를 담을 배열을 생성후 반환
{
	int	**zero_location_arr;//빈공간의 정보를 행과 열로 담을 것이기에 2차원 배열
	//빈공간의 개수를 센다
	while (ijk[0] < n * n)//map의 전체 칸을 훑는다
	{
		if (map[ijk[0]] == 0)//map의 i번쨰 칸이 0이라면
			len_of_zero_arr++;//개수를 1더해준다
		ijk[0]++;
	}
	zero_location_arr = (int **) malloc(sizeof(int *) * (len_of_zero_arr + 1));//빈공간의 개수만큼 2차원 배열을 만든다 -> 포인터배열을 만드는 것과 동일 1차원 배열의 시작주소를 저장해야 하기 때문 ,*길이 + 1 의 이유는 빈공간의 길이를 담아야하기 떄문
	while (ijk[2] < len_of_zero_arr + 1)//모든 인덱스에 1차원 배열 생성후 주소 연결
		zero_location_arr[ijk[2]++] = (int *) malloc(sizeof(int) * 2);
	zero_location_arr[0][0] = len_of_zero_arr;//0번 인덱스의 0번째 칸에 길이 저장
	ijk[0] = 1;
	ijk[1] = 0;
	while (ijk[1] < n * n)//map의 전체 칸을 훑는다
	{
		if (map[ijk[1]] == 0)//빈칸 발견시
		{
			zero_location_arr[ijk[0]][0] = ijk[1] / n;//빈칸 정보의 행의 정보 저장
			zero_location_arr[ijk[0]][1] = ijk[1] % n;//빈칸 정보의 열의 정보 저장
			ijk[0]++;
		}
		ijk[1]++;
	}
	return (zero_location_arr);//빈칸정보 배열 반환
}

void	print_solution(int *d_n_s, int *map)//답을 출력하는 함수
{
	int		i;
	char	ch;
	int		n;

	n = d_n_s[1];
	i = 0;
	while (i < n * n)
	{
		ch = map[i] + '0';
		write(1, &ch, 1);
		if ((i % n == n - 1))
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
	d_n_s[2]++;//출력후 답안개수에 +1
}

void	dfs(int *d_n_s, int *v_p, int *map, int *z_l_arr[])//dfs 시작
{
	int		i;

	if (d_n_s[0] == z_l_arr[0][0] + 1)//깊이가 빈칸의 길이 + 이라는 것은 모든 빈칸을 다 채웠다는 것과 같은말
	{
		if (is_satisfied_vp(d_n_s[1], map, v_p, 0))//뷰포인트를 만족하는지 검사 실행후 만족한다면 답을 출력
			print_solution(d_n_s, map);
	}
	else//채울 칸이 남았다면
	{
		i = 1;
		while (i <= d_n_s[1])//현재 칸에 1~n까지 대입 해본다.
		{
			if (is_satisfied_r_c(d_n_s[1], map, z_l_arr[d_n_s[0]], i))//현재 칸에 i를 넣고 중복이 없다면
			{
				map[z_l_arr[d_n_s[0]][0] * d_n_s[1] + z_l_arr[d_n_s[0]][1]] = i;//map에 일단 넣어 본다
				d_n_s[0]++;//다음 빈칸으로 넘어가기 위해 깉이를 1추가 하고
				dfs(d_n_s, v_p, map, z_l_arr);//현재 깊이의 + 1 깊이로 넘어간다.
				d_n_s[0]--;//일단 다음 깊이에서 다시 돌아왔다면 깊이를 1 감소시키고
				if (d_n_s[2] == 1)//다음 깊이로 넘어간것에서 답을 찾았는지 확인 -> 1이라면 찾은 것이므로 dfs종료
					return ;
				map[z_l_arr[d_n_s[0]][0] * d_n_s[1] + z_l_arr[d_n_s[0]][1]] = 0;// 다음 탐색을위해 빈카으로 다시 초기화
			}
			i++;
		}
	}
}

void	dfs_set(int *v_p, int *map, int n)//dfs 실행전 준비작업 및 실행후 답이 없을 경우 에러출력 함수
{
	int	ijk[3];
	int	len;
	int	depth_n_nubsol[3];//dfs실행시 필요한 깊이 정보, 판의 크기, 정답의 개수
	int	**zero_location_arr;//빈공간의 위치정보를 만들 배열

	ijk[0] = 0;
	ijk[2] = 0;
	zero_location_arr = making_zero_location_arr(map, n, ijk, 0);//빈공간의 위치정보를 만듬
	depth_n_nubsol[0] = 1;//깊이는 1부터 시작 빈공간 정보의 배열의 0번에는 빈공간의 개수가 저장되어 있기 때문
	depth_n_nubsol[1] = n;
	depth_n_nubsol[2] = 0;
	dfs(depth_n_nubsol, v_p, map, zero_location_arr);//답을 찾기 위한 dfs 실행 -> 빈공간에 1~4를 넣어보며 열과 행을 기준으로 중복이 없는 모든 경우를 탐색후 뷰포인트 조건이 맞으면 종료
	len = zero_location_arr[0][0];
	while (ijk[2] < len)
	{
		free(zero_location_arr[ijk[2]]);
		ijk[2]++;
	}
	free(zero_location_arr);
	if (depth_n_nubsol[2] == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
}
