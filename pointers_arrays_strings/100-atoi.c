#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i;
	int j;

	while (*s >= '9' || *s <= '0')
	{
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			s++;
			i++;
		}
	while (i > 0)
		{
			j *= 10;
			i--;
		}
		return (result * sign);
}
