/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehokim <taehokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:45:50 by heom              #+#    #+#             */
/*   Updated: 2021/07/01 13:17:30 by taehokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "types.h"

t_all
*all(void);

void
malloc_fd(void);

void
make_pipe(void);

void
fork_loop();

void
safe_exit(int code, const char *msg);

void
exit_code_msg(int code, const char *msg);

/*
**-----------------split
*/
char
**px_split(char const *s, char c);

void
free_px_split(char **tab);

char
*px_strjoin(char const *s1, char const *mid, char const *s2);

unsigned int
px_strlcpy(char *dest, char *src, unsigned int size);

#endif
