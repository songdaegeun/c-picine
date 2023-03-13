#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    int i;
    int j;


    char *ptr = (char *)malloc(10000 * 10001);

    i = 0;
    while (i < 10000)
    {
        j = 0;
        while (j < 10000)
        {
            ptr[10001 * i + j] = ((rand() % 10) < 8) ? '.' : 'o'; 
            j++;
        }
        ptr[10001 * i + j] = '\n';
        i++;
    }
    fd = open("france_map", O_RDWR);
    write(fd, ptr, 10000 * 10001);
    
    return (0);
}