/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:34:49 by vafernan          #+#    #+#             */
/*   Updated: 2024/05/10 09:21:19 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, char c)
{
	int	i;
	int	size;

	if (!str)
		return (NULL);
	i = 0;
	size = ft_strclen(str, '\0');
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (c == '\0')
		return (str + i);
	if (size <= i)
		return (NULL);
	return (str + i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstring;
	int		i;
	int		j;
	int		size;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	size = ft_strclen(s1, '\0') + ft_strclen(s2, '\0');
	newstring = malloc(sizeof(char *) * (size + 1));
	if (!newstring)
		return (0);
	i = -1;
	j = 0;
	while ((i < size) && (s1[++i]))
		newstring[i] = s1[i];
	while ((i < size) && (s2[j]))
		newstring[i++] = s2[j++];
	newstring[i] = '\0';
	if (s1)
		free (s1);
	return (newstring);
}

int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while ((str[i] && str[i] != c))
		i++;
	return (i);
}

char	*ft_strndup(char *s, int len)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*dealloc(char *line_buffer, char *buffer)
{
	free(line_buffer);
	free(buffer);
	return (NULL);
}
