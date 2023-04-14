/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:12:03 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 21:11:15 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE 10

char	*new_line(int fd, char *static_buffer);
char	*fixed_line(char *static_buffer);
char	*next_line(char *static_buffer);
char	*get_next_line(int fd);
char	*ft_strjoin1(char *left_str, char *buff);
size_t	ft_strlen1(char *s);
char	*ft_strchr1(char *s, int c);
char	*ft_strdup1(char *s1);
char	*ft_substr1(char *s, unsigned int start, size_t len);

#endif