/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_pipe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:48:19 by heom              #+#    #+#             */
/*   Updated: 2021/07/01 13:17:30 by taehokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void
	make_pipe(void)
{
	int	i;

	i = 0;
	while (i < all()->proc_num)
	{
		if (pipe(all()->fd[i]))
			safe_exit(1, "pipe error!\n");
		i++;
	}
}
