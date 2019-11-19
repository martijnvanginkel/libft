/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:11:45 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 11:26:35 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char*)s;
			return (ptr);
		}
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	return (ptr);
}
