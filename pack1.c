int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 97 && c < 123))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c > 47 || c < 58)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	int	a;

	a = ft_isalpha(c);
	if (a == 1)
		return (1);
	a = ft_isdigit(c);
	if (a == 1)
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
