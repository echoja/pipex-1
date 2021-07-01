/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:46:17 by heom              #+#    #+#             */
/*   Updated: 2021/07/01 13:17:31 by taehokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

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
