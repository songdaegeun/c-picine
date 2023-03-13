/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:34:55 by dasong            #+#    #+#             */
/*   Updated: 2023/02/19 07:06:02 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	pre_set(int	*v_p, int *map, int n);
void	dfs_set(int *v_p, int *map, int n);

int	s_len(char *str)//문자열 길이를 구하는 함수
{
	char	*b_str;

	b_str = str;
	while (*str++)
		;
	return (str - 1 - b_str);
}

int	is_available(char *str, int *n, int **v_p)//인수로 들어온 문자열이 과제가 요구하는 조건에 맞는지 확인 하는 함수 + 판의 크기를 정하고 v_p배열의 크기를 지정
{
	int	i;
	int	s_size;

	i = 0;
	s_size = s_len(str);//인수의 길이
	while (i < s_size)//인수의 길이만큼 반복
	{
		if (!((str[s_size - 1] >= '0') && (str[s_size - 1] <= '9')))//마지막글자가 숫자가 아니라면 0반환
			return (0);
		if (i % 2 == 0)//짝수 번째 글자 이면서
			if (!((str[i] >= '0') && (str[i] <= '9')))// 숫자가 아니면 0반환 -> 짝수에는 무조건 숫자
				return (0);
		if (i % 2 == 1)//홀수 번째 글자 이면서
			if (!(str[i] == ' '))//공백이 아니라면 0반환 -> 홀수에는 무조건 공백
				return (0);
		i++;
	}
	if (((s_len(str) + 1) / 2) % 4 != 0)//숫자의 개수가 4로 나누어 떨어지지 않는다면 오류발생 (s_len(str) + 1) / 2) : 숫자와 공백 쌍의 개수, (s_len(str) + 1) / 2) : 숫자의 개수
		return (0);
	*n = ((s_len(str) + 1) / 2) / 4;//숫자의 개수 / 4. = 판의 크기
	*v_p = (int *)malloc(sizeof(int) * (4) * (*n));//뷰포인트의 개수 만큼 v_p의 크기 할당
	return (1);
}

void	check_1_to_n_range_and_making_solution(int *v_p, int n)//뷰포인트안의 숫자가 1~n 사이의 숫자인지 판별, 정답 찾기
{
	int	i;
	int	j;
	int	*map;//판을 나타내는 배열

	i = 0;
	while (i < 4)//행을 반복
	{
		j = 0;
		while (j < n)//열을 반복
		{
			if (!((v_p[i * n + j] >= 1) && (v_p[i * n + j] <= n)))// 뷰포인트 안의 숫자가 1~n사이가 아닌경우 오류 반환 (i * n + j) : 1차원 배열에서의 i행 j열의 인덱스
			{
				write (1, "Error\n", 6);
				return ;
			}
			j++;
		}
		i++;
	}
	map = (int *)malloc(sizeof(int) * n * n);//판의 칸의 개수만큼 배열 반환
	pre_set(v_p, map, n);//확정된 칸 선별
	dfs_set(v_p, map, n);//빈칸 기준으로 중복되지 않는 행렬 완전 탐색후 뷰포인트 조건 체크
	free(map);//map의 메모리 해제
}

int	main(int argc, char *argv[])
{
	int	n;
	int	i;
	int	*v_p;

	if (!((argc == 2) && is_available(argv[1], &n, &v_p)))//인자수가 2개가 들어오지 않거나 유효하지 않은 경우 에러출력
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (n == 0)//판의 크기가 0인경우 에러출력
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i < 4 * n)//조건민큼 뷰인트에 숫자 넣기
	{
		v_p[i] = argv[1][2 * i] - '0';//짝수번째 인덱스의 정보를 인트형으로 뷰포인트에 저장
		i++;
	}
	check_1_to_n_range_and_making_solution(v_p, n);
	free(v_p);
	return (0);
}
