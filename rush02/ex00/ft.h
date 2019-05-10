/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:00:49 by malberte          #+#    #+#             */
/*   Updated: 2018/02/21 14:30:42 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int				ft_atoi(char *s);
void			ft_putchar(char c);
void			ft_putnbr(int number);
void			ft_putstr(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_str_is_uppercase(char *str);
void			ft_uncapitalize(char **str, int *word_found);
char			*ft_strcapitalize(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strlowcase(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_contains(char *str, char *to_find);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strupcase(char *str);

#endif
