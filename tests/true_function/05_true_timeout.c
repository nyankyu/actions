#include <unistd.h>

static int	success(void)
{
	sleep(10);
	return (0);
}

int	true_timeout(void)
{
	if (success())
		return (0);
	else
		return (-1);
}
