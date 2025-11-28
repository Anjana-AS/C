#include <stdio.h>
#define MAX 10 
int main() {
int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
int rows, cols;
int i, j;

printf("Enter number of rows and coloumns:");
scanf("%d %d", &rows, &cols);

printf("Enter elements of matrix A (%d x %d):\n", rows, cols);
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
scanf("%d", &A[i][j]);
}
}

printf("Enter elements of matrix B (%d x %d):\n", rows, cols);
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
scanf("%d", &B[i][j]);
}
}

for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
C[i][j] = A[i][j] + B[i][j];
}
}

printf("Resultant matrix after addition (A+B):\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
printf("%d ", C[i][j]);
}
printf("\n");
}
return 0;
}   

