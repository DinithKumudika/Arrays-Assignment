#include<stdio.h>
#include<string.h>
int main()
{
    int inputarr[256];
    int num;
    int i;
    int a;
    int b;
    int length;
    int counter=0;
    
    printf("Enter the size of array-:");
    scanf("%d",length);
    
    printf("Enter the elements of array-:\n");
    
    
    for(i=0; i<length; i++)
    {
        scanf("%d", &inputarr[i]);   
    }
    
    for(a=0;a<length;a++)
    {
        for(b=0;b<length;b++)
        {
            if(inputarr[a]==inputarr[b])
            {
                counter=counter+1;
            }
        }
    }

    return 0;
}