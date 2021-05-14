int	true_function_launcher(void);

int	main(void)
{
	int	result;

	result = 0;
	result += true_function_launcher();
	if (result != 0)
		return (1);
	else
		return (0);
}
