#include<stdio.h>
#include<string.h>
int stringsize;
char at = '@';
char ch;
int i;

int main()
{
    char student1first[10];
    printf("Enter your first name-:");
    scanf("%s", student1first);

    
    char student1last[10];
    printf("Enter your last name-:");
    scanf("%s", student1last);

    char student1email[256];
    
    printf("Enter your Email-:");
    scanf("%s", student1email);
    
    stringsize = strlen(student1email);

    for(i=0; i<stringsize; i++)
    {
        if(stringsize<=5 && student1email[i] != at)
        {
           printf("Invalid Email!\n");
           printf("Enter your Email-:");
           scanf("%s", student1email);
        }
    }
    

    strcat(student1first, " ");
    strcat(student1first, student1last);
    printf("Full Name-:");
    puts(student1first);

    return 0;
}
