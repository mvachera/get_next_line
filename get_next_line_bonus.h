/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:22:34 by mvachera          #+#    #+#             */
/*   Updated: 2023/08/14 20:22:38 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
void				read_and_stash(int fd, t_list **stash);
void				lst_new(t_list **stash, char *buf, int readed);
void				extract_to_line(t_list *stash, char **line);
void				clean_node(t_list **stash);
int					found_newline(t_list *stash);
t_list				*get_last_node(t_list *stash);
void				len_line(t_list *stash, char **line);
void				free_stash(t_list *stash);
int					len(const char *str);

#endif
