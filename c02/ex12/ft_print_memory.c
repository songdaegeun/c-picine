#include <unistd.h>

void	int_to_hex(unsigned long long addr)
{
	if (addr / 16)
		int_to_hex(addr / 16);
	write(1, &"0123456789abcdef"[addr % 16], 1);
}

void	print_hex_addr(unsigned long long addr)
{
	unsigned long long t_addr;
	int					num;

	t_addr = addr;
	num = 0;
	while (t_addr)
	{
		t_addr /= 16;
		num++;
	}
	while (16 - num++)
	{
		write(1, " ", 1);
	}
	int_to_hex(addr);
}

void	print_hex_char(unsigned char *addr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		write(1, &"0123456789abcdef"[addr[i] / 16], 1);
		write(1, &"0123456789abcdef"[addr[i] % 16], 1);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_char(unsigned char *addr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if((addr[i] >= 32) && (addr[i] <= 126))
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		if ((size - i) < 16)
			len = size - i;
		else
			len = 16;
		print_hex_addr((unsigned long long)addr + 16 * j);
		write(1, ": ", 2);
		print_hex_char(addr + 16 * j, len);
		print_char(addr + 16 * j, len);
		write(1, "\n", 1);
		i += len;
		j++;
	}
	return (addr);
}
