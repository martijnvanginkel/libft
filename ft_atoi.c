/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:32:11 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/13 10:42:46 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int		check_prior_chars(const char *str, int *negative)
{
	int x;

	x = 0;
	while (str[x] == 32 || (str[x] < 14 && str[x] > 8))
	{
		x++;
	}
	if (str[x] == '-')
	{
		*negative = -1;
		x++;
	}
	return (x);
}

int				ft_atoi(const char *str)
{
	int			x;
	long int	result;
	int			negative;

	negative = 0;
	result = 0;
	x = check_prior_chars(str, &negative);
	if (str[x] == '+' && negative != -1)
	{
		x++;
	}
	while (str[x] != '\0' && (str[x] >= 48 && str[x] <= 57))
	{
		result = (result * 10) + (str[x] - '0');
		if ((unsigned long)result >= (unsigned long)9223372036854775807)
		{
			if (negative == -1)
				return (0);
			return (-1);
		}
		x++;
	}
	if (negative == -1)
		result = result * -1;
	return (result);
}
