/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 15:30:23 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/13 15:44:10 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		get_num_length(int n)
{
	int number;
	int x;

	x = 0;
	number = n;
	if (n == 0)
	{
		return (1);
	}
	while (number > 0)
	{
		number = number / 10;
		x++;
	}
	return (x);
}

static int		*make_array_from_int(int *array, int number, int numlen)
{
	int x;

	x = 0;
	array = malloc(sizeof(int) * (numlen + 1));
	if (!array)
	{
		return (0);
	}
	while (x < numlen)
	{
		array[x] = number % 10;
		number = number / 10;
		x++;
	}
	array[x] = 0;
	return (array);
}

static char		*make_str_from_int_array(char *str, int *int_array, int numlen,
				int negative)
{
	int x;
	int y;

	x = 0;
	y = numlen;
	if (negative == 1)
	{
		str[x] = '-';
		x++;
		numlen++;
	}
	while (x < numlen)
	{
		str[x] = int_array[y - 1] + '0';
		x++;
		y--;
	}
	str[x] = '\0';
	return (str);
}

static int		is_max_min_value(int *number)
{
	if (*number == -2147483648)
	{
		*number = *number + 1;
		*number = *number * -1;
		return (1);
	}
	else
	{
		*number = *number * -1;
		return (0);
	}
}

char			*ft_itoa(int n)
{
	char	*result;
	int		numlen;
	int		*int_array;
	int		negative;
	int		exception;

	negative = 0;
	int_array = 0;
	if (n < 0)
	{
		negative = 1;
		exception = is_max_min_value(&n);
	}
	numlen = get_num_length(n);
	int_array = make_array_from_int(int_array, n, numlen);
	if (negative == 1)
		result = malloc(sizeof(char) * (numlen + 2));
	else
		result = malloc(sizeof(char) * (numlen + 1));
	if (!result)
		return (0);
	result = make_str_from_int_array(result, int_array, numlen, negative);
	if (exception == 1)
		result[numlen] = '8';
	return (result);
}
