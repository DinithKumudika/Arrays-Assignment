//A program to find the frequency in of a give character in a given string
#include<stdio.h>
#include<string.h>

int main()
{
    char inputstr[256];
    char ch;
    int a;
    int length;
    int counter=0;
    
    printf("Enter a String of characters-:");
    gets(inputstr);
    
    printf("Enter a character in the above string-:");
    scanf("%c", &ch);
    
    length=strlen(inputstr);
    
    for(a=0; a<length; a++)
    {
        if (inputstr[a]==ch)
        {
            counter=counter+1;
        }    
    }
    printf("Frequency of the given character-:%d\n", counter);

    return 0;
}