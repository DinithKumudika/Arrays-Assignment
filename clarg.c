#include<stdio.h>
int i;
int main(int argc, char* argv[])
{
    printf("number of parameters-:%d\n", argc);
    for(i=0;i<argc;i++)
    {
        puts(argv[i]);
    }
    return 0;
}