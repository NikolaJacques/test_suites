/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:28:27 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/08 10:28:31 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void print(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
