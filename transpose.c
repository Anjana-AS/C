#include<stdio.h>
int main() {
int a[10][10], n, i, j, sum = 0;
printf("Enter the size of matrix (n x n): ");
scanf("%d", &n);
printf("Enter %d values:\n", n * n);
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}
}
printf("\nGiven matrix is:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
printf("%d ", a[i][j]);
}
printf("\n");
}
for(i = 0; i < n; i++) {
for(j = i + 1; j < n; j++) {
int temp = a[i][j];
a[i][j] = a[j][i];
a[j][i] = temp;
}
}
printf("\nTranspose of the matrix:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
printf("%d ", a[i][j]);
}
printf("\n");
}
for(i = 0; i < n; i++) {
sum += a[i][i];
}
printf("\nTrace of the matrix is: %d\n", sum);
return 0;
}

