#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{

		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}
