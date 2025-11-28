#include <stdio.h>
#define MAX 10  

int main(){
int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
int r1,r2,c1,c2;
int i,j,k;

printf("Enter rows and coloumns of first matrix:");
scanf("%d %d",&r1,&c1);

printf("Enter rows and coloumns of second matrix:");
scanf("%d %d",&r2,&c2);

if(c1!=r2){
printf("matrix multiplication is not possible.Coloumns of A must equal rows of B\n");
return 1;
}

printf("enter elements of matrix A(%d*%d):\n",r1,c1);
for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
scanf("%d", &A[i][j]);
}
}


printf("enter elements of matrix B(%d*%d):\n",r2,c2);
for (i = 0; i < r2; i++) {
for (j = 0; j < c2; j++) {
scanf("%d", &B[i][j]);
}
}


for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
C[i][j] = 0;
}
}

    
for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
for (k = 0; k < c1; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}

printf("Resultant Matrix C (%d x %d):\n", r1, c2);
for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
printf("%d ", C[i][j]);
}
printf("\n");
}
return 0;
}

