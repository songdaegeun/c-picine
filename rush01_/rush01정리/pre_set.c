/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfsTest4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsjung <junsjung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:18:04 by junsjung          #+#    #+#             */
/*   Updated: 2023/02/19 00:27:30 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int res)//절댓값 구하는 함수
{
	if (res < 0)
		res *= -1;
	return (res);
}

void	set_rule_row_vp(int n, int *ij, int *v_p, int *map)//left->right, right->left 뷰포인트 체크
{
	//2 * n + ij[0] : 뷰포인트의 3번째에서 현재인덱스의 행의 해당하는 번호
	if (v_p[2 * n + ij[0]] == n)//현재 칸의 왼쪽 뷰포인트가 n이라면
		map[ij[0] * n + ij[1]] = ij[1] + 1;//왼쪽 기준으로 오름 차순 이므로 현재열의 인덱스 + 1
	if (v_p[3 * n + ij[0]] == n)//현재 칸의 오른쪽 뷰포인트가 n이라면
		map[ij[0] * n + ij[1]] = n - ij[1];//오른쪽 기준으로 오름 차순 이므로 n - 현재열의 인덱스
	if (v_p[2 * n + ij[0]] == 1)//현재 칸의 왼쪽 뷰포인트가 1이라면
		map[ij[0] * n + 0] = n;//현재칸의 제일 첫번째 열에 n저장
	if (v_p[3 * n + ij[0]] == 1)//현재 칸의 오른쪽 뷰포인트가 1이라면
		map[ij[0] * n + n - 1] = n;//현재칸의 제일 마지막 열에 n저장
}

void	set_rule_col_vp(int n, int *ij, int *v_p, int *map)//위와 같음
{
	if (v_p[0 * n + ij[1]] == n)
		map[ij[0] * n + ij[1]] = ij[0] + 1;
	if (v_p[1 * n + ij[1]] == n)
		map[ij[0] * n + ij[1]] = n - ij[0];
	if (v_p[0 * n + ij[1]] == 1)
		map[0 * n + ij[1]] = n;
	if (v_p[1 * n + ij[1]] == 1)
		map[(n - 1) * n + ij[1]] = n;
}

void	set_rule_sum_of_vp(int n, int *v_p, int *map)//열과 행의 뷰포인트쌍의 합이 n+1일때 n을 확정 시켜주는 함수
{
	int	i;

	i = 0;
	//열의 쌍 즉, up + down의 쌍 을 체크
	while (i < n)
	{
		if (v_p[0 * n + i] + v_p[1 * n + i] == n + 1)//두 쌍의 합이 n+1이면서
		{
			if (ft_abs(v_p[0 * n + i] - v_p[1 * n + i]) == 1)//두 쌍의 차이가 1이라면
				map[(v_p[0 * n + i] - 1) * n + i] = n;//up뷰포인트의 값 - 1 인덱스에 n저장
		}
		i++;
	}
	i = 0;
	//열의 쌍 즉, left + right의 쌍 을 체크
	while (i < n)//두 쌍이 n+1이면서
	{
		if (v_p[2 * n + i] + v_p[3 * n + i] == n + 1)//두 쌍의 합이 n+1이면서
		{
			if (ft_abs(v_p[2 * n + i] - v_p[3 * n + i]) == 1)//두 쌍의 차이가 1이라면
				map[i * n + (v_p[2 * n + i] - 1)] = n;//left뷰포인트의 값 - 1 인덱스에 n저장 -> 이유는 그림으로 그리면 나옴
		}
		i++;
	}
}

void	pre_set(int	*v_p, int *map, int n)//확정할수 있는 칸들을 확정하는 함수
{	
	int	ij[2];//i,j 배열

	ij[0] = 0;
	while (ij[0] < n * n)//map의 인자들을 모두 0으로 초기화
		map[ij[0]++] = 0;
	ij[0] = 0;
	//모든 칸을 탐색한다
	while (ij[0] < n)//행을 탐색
	{
		ij[1] = 0;
		while (ij[1] < n)//열을 탐색
		{//칸 하나에 대해 행을 기준으로 한번 체크, 열을 기준으로 한번 체크, 뷰포인트가 1과 n일 때 확정 시켜줌
			set_rule_col_vp(n, ij, v_p, map);
			set_rule_row_vp(n, ij, v_p, map);
			ij[1]++;
		}
		ij[0]++;
	}
	set_rule_sum_of_vp(n, v_p, map);//열과 행의 뷰포인트쌍의 합이 n+1일때 확정 시켜주는 함수
}
