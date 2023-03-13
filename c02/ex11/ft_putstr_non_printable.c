#include <unistd.h>

void str_to_hex(unsigned char ch)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[(ch / 16) % 16], 1);
	write(1, &"0123456789abcedf"[ch % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			str_to_hex((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
