#include<stdio.h>
#include<string.h>
int main()
{
    int inputarr[256];
    int largest;
    int largest2;
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
    
    for(a=0; a<length; ++a)
    {
        if (inputarr[a]<inputarr[a+1])
        {
            largest = inputarr[a+1];
        }
        else if(inputarr[a+1]<inputarr[a+2])
        {
            largest2 = inputarr[a+1];
        }
        else if(inputarr[a+1]<inputarr[a])
        {
            largest2 = inputarr[a];
        }    
    }
    printf("Second largest number in the array-:%d\n", largest2);

    return 0;
}