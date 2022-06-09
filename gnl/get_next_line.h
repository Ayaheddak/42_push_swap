/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:50:09 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/09 12:03:56 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

#define BUFFER_SIZE 1

char	*get_next_line(int fd);
size_t	ft_strlenn(const char *s);
char	*ft_strdupp(char *s1);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char *s);
char	*get_after_newline(char *qarchala);

#endif
