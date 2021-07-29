#include<stdio.h>
int marks[5];

int main()
{
    int a;
    int b;
    float avg=0;
    int total=0;

    printf("Enter your marks the below subjects\n");
    printf("Maths\n");
    printf("Science\n");
    printf("Sinhala\n");
    printf("English\n");
    printf("History\n");
    for(a=0;a<=4;++a)
    {
        scanf("%d",&marks[a]);
    }
    if (marks[0] > marks[1] && marks[0] > marks[2] && marks[0] > marks[3] && marks[0] > marks[4])
    {
        printf("you has maximum marks for Maths\n");
    }
    else if(marks[0] > marks[1] && marks[0] > marks[2] && marks[0] > marks[3] && marks[0] > marks[4])
    {

    }
    else if(marks[1] > marks[0] && marks[1] > marks[2] && marks[1] > marks[3] && marks[1] > marks[4])
    {
        printf("you has maximum marks for Science\n");
    }
    else if(marks[2] > marks[1] && marks[2] > marks[1] && marks[2] > marks[3] && marks[2] > marks[4])
    {
        printf("you has maximum marks for Sinhala\n");
    }
    else if(marks[3] > marks[0] && marks[3] > marks[1] && marks[3] > marks[2] && marks[3] > marks[4])
    {
        printf("you has maximum marks for English\n");
    }
    else
    {
        printf("you has maximum marks for History\n");
    }
    for(b=0;b<5;++b)
    {
        total= total + marks[b];

    }
    avg = (float) total / 5;
    printf("Total of your marks-: %d\n",total);
    printf("Average of your marks-: %.2f\n",avg);   
}