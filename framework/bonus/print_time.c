#include <stdio.h>
#include <time.h>
#include "libunit.h"
#include "libft.h"

void	print_time(int fd, t_unit_tests *unit_tests)
{
	double	start;
	double	end;
	char	buff[32];

	start = unit_tests->start_time.tv_sec
		+ (double)unit_tests->start_time.tv_nsec / 1000000000L;
	end = unit_tests->end_time.tv_sec
		+ (double)unit_tests->end_time.tv_nsec / 1000000000L;
	sprintf(buff, "%fs\n", end - start);
	ft_putstr_fd(buff, fd);
}

void	get_start_time(t_unit_tests *unit_tests)
{
	clock_gettime(CLOCK_REALTIME, &unit_tests->start_time);
}

void	get_end_time(t_unit_tests *unit_tests)
{
	clock_gettime(CLOCK_REALTIME, &unit_tests->end_time);
}
