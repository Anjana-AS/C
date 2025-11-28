#include <stdio.h>

int main() {
int start, end, num, i, sum;
int found = 0;

printf("Enter the starting number of the range: ");
scanf("%d", &start);
printf("Enter the ending number of the range: ");
scanf("%d", &end);

printf("Perfect numbers between %d and %d are:\n", start, end);

for (num = start; num <= end; num++) {
sum = 0;

for (i = 1; i <= num / 2; i++) {
if (num % i == 0) {
sum += i;
}
}
if (sum == num && num != 0) {
printf("%d\n", num);
found = 1;
}
}
if (!found) {
printf("No perfect numbers found in the given range.\n");
}
return 0;
}


