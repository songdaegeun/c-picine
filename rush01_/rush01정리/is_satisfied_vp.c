/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_satisfied_vp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 07:07:46 by dasong            #+#    #+#             */
/*   Updated: 2023/02/19 07:15:39 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_satisfied_up_to_down_vp(int n, int *map, int v_p_num, int index)//up뷰포인트를 기준으로 건물의 개수를 세고 부합하는지 확인
{
	int	i;
	int	max_height;
	int	cnt;

	i = 0;
	cnt = 0;
	max_height = -1;
	while (i < n)//줄의 전체 칸을 탐색
	{
		if (map[i * n + index] > max_height)//앞의 가장큰 건물 보다 크다면 눈에 보이므로 개수 추가 및 가장 큰 건물 업데이트
		{
			cnt++;
			max_height = map[i * n + index];
		}
		i++;
	}
	if (v_p_num == cnt)//보이는 건물수와 뷰포인가 맞다면 1반환
		return (1);
	else//아니라면 0반환
		return (0);
}

int	is_satisfied_down_to_up_vp(int n, int *map, int v_p_num, int index)
{
	int	i;
	int	max_height;
	int	cnt;

	i = n - 1;
	cnt = 0;
	max_height = -1;
	while (i > -1)
	{
		if (map[i * n + index] > max_height)
		{
			cnt++;
			max_height = map[i * n + index];
		}
		i--;
	}
	if (v_p_num == cnt)
		return (1);
	else
		return (0);
}

int	is_satisfied_left_to_right_vp(int n, int *map, int v_p_num, int index)
{
	int	i;
	int	max_height;
	int	cnt;

	i = 0;
	cnt = 0;
	max_height = -1;
	while (i < n)
	{
		if (map[index * n + i] > max_height)
		{
			cnt++;
			max_height = map[index * n + i];
		}
		i++;
	}
	if (v_p_num == cnt)
		return (1);
	else
		return (0);
}

int	is_satisfied_right_to_left_vp(int n, int *map, int v_p_num, int index)
{
	int	i;
	int	max_height;
	int	cnt;

	i = n - 1;
	cnt = 0;
	max_height = -1;
	while (i > -1)
	{
		if (map[index * n + i] > max_height)
		{
			cnt++;
			max_height = map[index * n + i];
		}
		i--;
	}
	if (v_p_num == cnt)
		return (1);
	else
		return (0);
}

int	is_satisfied_vp(int n, int *map, int *v_p, int i)//뷰포인트를 만족 하는지 검사하는 함수
{
	while (i < 4 * n)//뷰포인트의 모든 인덱스 탐색
	{
		if (i / n == 0)//up
		{
			if (!is_satisfied_up_to_down_vp(n, map, v_p[i], i % n))
				return (0);
		}
		else if (i / n == 1)//down
		{
			if (!is_satisfied_down_to_up_vp(n, map, v_p[i], i % n))
				return (0);
		}
		else if (i / n == 2)//left
		{
			if (!is_satisfied_left_to_right_vp(n, map, v_p[i], i % n))
				return (0);
		}
		else if (i / n == 3)//right
		{
			if (!is_satisfied_right_to_left_vp(n, map, v_p[i], i % n))
				return (0);
		}
		i++;
	}
	return (1);
}
