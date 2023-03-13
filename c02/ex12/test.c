#include <stdio.h>

void    *ft_print_memory(void *addr, unsigned int size);

int main()
{
	char text[] = "Bonjo	ur les \0am\0inches\0c est foutoutce qu onpeut faire\
	avecprint_memory\0\0 lol\0lol\0 \0";
	//ft_print_memory(&text, 64);
	unsigned int size = 400;
	ft_print_memory(text, size);
}
