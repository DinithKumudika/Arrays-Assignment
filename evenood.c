#include<stdio.h>

int main()
{
    int inputarr[256];
    int a;
    int i;
    int length;
    int counter1=0;
    int counter2=0;
    
    
    printf("Enter the Size of the array-:");
    scanf("%d",&length);

    printf("Enter a String of numbers-:\n");

    for(i=0; i<length; i++)
    {
        scanf("%d",&inputarr[i]);
    }
    for(a=0;a<length;a++)
    {
        if(inputarr[a]%2==0)
        {
            counter1=counter1+1;
        }
        else
        {
            counter2=counter2+1;
        }
    }
    printf("Number of even numbers in the array-:%d\n",counter1);
    printf("Number of odd numbers in the array-:%d\n",counter2);

    return 0;
}