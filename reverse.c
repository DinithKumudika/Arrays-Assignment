//A program to reverse a string
#include <stdio.h>
#include <string.h>

int length;

int main()
{
    int x;
    int y;
    char sentence[256];
    char reverse[256];

    printf("Enter the Sentence-:");
    scanf("%s", sentence);
    
    length = strlen(sentence);
    y = length -1;
 
    printf("Reversed Sentence-:");
    for (x = 0; x <length; x++)
    {
        reverse[x] = sentence[y];
        printf("%c", reverse[x]);
        y--;
    }
    printf("\n");
    
    return 0;
}