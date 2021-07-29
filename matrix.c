//a program to add and multiply two given matrices
#include <stdio.h>

int column1; //variable to store no of columns in 1st matrix
int row1;    //variable to store no of rows in 1st matrix
int column2; //variable to store no of columns in 2nd matrix
int row2;    //variable to store no of rows in 2nd matrix
int a;
int b;
int first[100][100];    //array to contain first matrix
int second[100][100];   //array to contain second matrix
int add[100][100];      //array to store result of addition
int multiply[100][100]; //array to store result of multiplication

void rowcolumn(int, int, int, int);      //function to get the number of columns and rows from user
void matrix1element(int, int);           //function to get the elements of 1st matrix
void matrix2element(int, int);           //function to get the elements of 2nd matrix
void addition(int, int);                 //function to add the two matrices
void multiplication(int, int, int); //function to multiply two matrices

int main()
{
    rowcolumn(column1, row1, column2, row2);

    /*checking if input matrices agrees with the rules of matrix addition and multiplication
    To add two matrices number of columns in matrices should be equal and number of rows should be also equal
    To multiply two matrices number of columns in first matrix should be equal to number of rows in second matrix*/
    
    while (column1 != row2 && column1 != column2 && row1 != row2) 
    {
        printf("invalid input of rows and columns\n\n");
        rowcolumn(column1, row1, column2, row2);
    }

    matrix1element(row1, column1);
    matrix2element(row2, column2);

    addition(row1, column1);

    return 0;
}

//definition of rowcolumn function
void rowcolumn(int column1, int row1, int column2, int row2)
{
    printf("Enter the number of columns in 1st matrix-:");
    scanf("%d", &column1);
    printf("Enter the number of rows in 1st matrix-:");
    scanf("%d", &row1);

    printf("Enter the number of columns in 2nd matrix-:");
    scanf("%d", &column2);
    printf("Enter the number of rows in 2nd matrix-:");
    scanf("%d", &row2);
}

//definition of matrix1element function
void matrix1element(int row1, int column1)
{
    printf("Enter the elements of 1st matrix:\n");
    for (a = 0; a < row1; ++a)
    {
        for (b = 0; b < column1; ++b)
        {
            scanf("%d", &first[a][b]);
        }
    }
}

//definition of matrix2element function
void matrix2element(int row2, int column2)
{
    printf("Enter the elements of 2nd matrix:\n");
    for (a = 0; a < row2; ++a)
    {
        for (b = 0; b < column2; ++b)
        {
            scanf("%d", &second[a][b]);
        }
    }
}

//definition of addition function
void addition(int row1, int column1)
{
    int i;
    int j;
    for (i = 0; i < row1; ++i)
    {
        for (j = 0; j < column1; ++j)
        {
            add[i][j] = first[i][j] + second[i][j];
        }
    }
    for (a = 0; a < row1; ++a)
    {
        printf("Addition of Two matrices = \n");
        for (b = 0; b < column1; ++b)
        {
            printf("\n");
            printf("%d  ", add[a][b]);
        }
    }
}

void multiplication(int column1, int column2, int row1)
{
    int i;
    int j;
    int k;

    for(i=0; i<row1; ++i)
    {
        for(j=0; j<column2; ++j)
        {
            multiply[i][j]=0;

            for(k=0; k<column1; ++k)
            {
                multiply[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
