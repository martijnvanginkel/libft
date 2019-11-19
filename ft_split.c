/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 12:45:36 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/15 14:45:39 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		array_object_count(char const *s, char c)
{
	int x;
	int counter;
	int alts_found;

	x = 0;
	counter = 0;
	alts_found = 0;
	while (s[x] == c && s[x] != '\0')
	{
		x++;
	}
	while (s[x] != '\0')
	{
		if (s[x] == c && s[x + 1] != '\0' && s[x + 1] != c)
			counter++;
		if (s[x] != c)
			alts_found++;
		x++;
	}
	if (alts_found == 0)
		return (0);
	if (counter == 0 && alts_found != 0)
		return (1);
	return (counter + 1);
}

static int		get_string_length(const char *s, char c, int number,
				char **startingptr)
{
	int		x;
	int		y;
	int		counter;

	x = 0;
	y = 0;
	counter = 0;
	while (s[x] == c && s[x] != '\0')
	{
		x++;
	}
	while (counter < number && s[x] != '\0')
	{
		if (s[x] == c && s[x + 1] != '\0' && s[x + 1] != c)
			counter++;
		x++;
	}
	*startingptr = &((char*)s)[x];
	while (s[x] != c && s[x] != '\0')
	{
		x++;
		y++;
	}
	return (y);
}

static char		*fill_string(const char *s, char c, int number)
{
	char	*result;
	char	*startingptr;
	int		stringlen;
	int		x;

	x = 0;
	startingptr = 0;
	stringlen = get_string_length(s, c, number, &startingptr);
	result = malloc(sizeof(char) * (stringlen + 1));
	if (!result)
	{
		return (0);
	}
	while (x < stringlen)
	{
		result[x] = startingptr[x];
		x++;
	}
	result[x] = '\0';
	return (result);
}

static void		free_array_items(char **array)
{
	int x;

	x = 0;
	if (array == 0)
	{
		return ;
	}
	while (*array[x] != 0)
	{
		if (array[x] == 0)
		{
			return ;
		}
		free(array[x]);
		x++;
	}
	free(array);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		arrayc;
	int		x;

	if (s == 0)
		return (0);
	x = 0;
	arrayc = array_object_count(s, c);
	array = malloc(sizeof(char*) * (arrayc + 1));
	if (!array)
	{
		return (0);
	}
	while (x < arrayc)
	{
		array[x] = fill_string(s, c, x);
		if (!array[x])
		{
			free_array_items(array);
		}
		x++;
	}
	array[x] = 0;
	return (array);
}
