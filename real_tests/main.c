int	ft_strlen_launcher(void);
int	ft_atoi_launcher(void);
#include <stdlib.h>
int	main(void)
{
	int	result;

	result = 0;
	result += ft_strlen_launcher();
	result += ft_atoi_launcher();
	system("leaks $$");
	if (result != 0)
		return (1);
	else
		return (0);
}
