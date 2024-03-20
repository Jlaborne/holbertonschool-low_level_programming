int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = sum = 0;

	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, unsigned int);
		i++;
	}
	va-end (list);
	return (sum);
}
