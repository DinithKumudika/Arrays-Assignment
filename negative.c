#include<stdio.h>

int main()
{
    int inputarr[256];
    int a;
    int i;
    int length;
    int counter=0;
    
    
    printf("Enter the Size of the array-:");
    scanf("%d",&length);

    printf("Enter a String of numbers-:\n");

    for(i=0; i<length; i++)
    {
        scanf("%d",&inputarr[i]);
    }
    for(a=0;a<length;a++)
    {
        if(inputarr[a]<0)
        {
            counter=counter+1;
        }
    }
    printf("Number of negative numbers in the array-:%d\n",counter);

    return 0;
}