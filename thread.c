#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include<stdlib.h>
void *thread1(void *p)
{
    int fd;
    char a[20];
    fd = open("np1", O_RDONLY);
    while (1)
    {
        read(fd, a, sizeof(a));
        printf("%s\n", a);
    }
}
void *thread2(void *p)
{
    int fd;
    char b[20];
    fd = open("np2", O_WRONLY);
    while (1)
    {
        scanf("%s", b);
        write(fd, b, strlen(b) + 1);
    }
}

int main()
{
    pthread_t t1, t2;
    mkfifo("np1", 0664);
    mkfifo("np2", 0664);
    pthread_create(&t1, 0, thread1, 0);
    pthread_create(&t2, 0, thread2, 0);
    while (1);
}
