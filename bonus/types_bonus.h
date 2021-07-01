/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:46:17 by heom              #+#    #+#             */
/*   Updated: 2021/07/01 13:17:17 by taehokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_BONUS_H
# define TYPES_BONUS_H

typedef struct	s_all
{
	int		**fd;
	long	proc_num;
	char	**env;
	char	**argv;
	int		rfd;
	int		wfd;
	char	**paths;
	char	**new_argv;
	pid_t	*pid;
}				t_all;

#endif
