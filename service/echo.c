/* service/echo.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>    //strlen
#include<unistd.h>    //write

void interact()
{
    char buf[32];
    printf("buf is at %x\n", buf);
    gets(buf);
    puts(buf);
}

int main()
{
    while (1)
    {
        interact();
        fflush(stdout);
    }
    return 0;
}
