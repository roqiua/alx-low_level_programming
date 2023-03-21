

int print_sign(int n)
{
	if(n < 0)
	{
		printf('-');
		return (-1);
	}
	else if(n > 0)
	{
		printf('+');
		return (1);
	}
	else
	{
		prinrf(0);
		return (0);
	}
}
