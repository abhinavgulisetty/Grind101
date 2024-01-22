/*Matrix Multiplication of two arrays in C
P.S The code was made clean using GPT :)*/

#include <stdio.h>

#define MAX_SIZE 100  

int main (int argc, char *argv[]) {
    int row1, col1, row2, col2;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter the dimensions of the first matrix (rows, columns):\n");
    scanf("%d%d", &row1, &col1);


    printf("Enter the dimensions of the second matrix (rows, columns):\n");
    scanf("%d%d", &row2, &col2);

    printf("Enter the elements of the first matrix:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            result[i][j] = 0;
            for(int k=0; k<col1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resulting matrix after multiplication:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}