/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:46:51 by heom              #+#    #+#             */
/*   Updated: 2021/07/01 13:17:30 by taehokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void
	malloc_fd(void)
{
	int	i;

	i = 0;
	if (!(all()->fd = (int **)malloc(sizeof(int *) * (all()->proc_num))))
		safe_exit(1, "malloc_err");
	while (i < all()->proc_num)
	{
		if (!(all()->fd[i] = (int *)malloc(sizeof(int) * 2)))
			safe_exit(1, "malloc_err");
		i++;
	}
}
