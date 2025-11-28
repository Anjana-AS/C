#include <stdio.h>
int main() {
    int lines = 4;

    for (int i = 1; i <= lines; i++) {
  for (int space = 1; space <= lines - i; space++) {
  printf("  ");
        }
 for (int j = i; j < i + i; j++) {
    printf("%d ", j);
        }

 for (int j = i + i - 2; j >= i; j--) {
 printf("%d ", j);
}

 printf("\n");
}
    return 0;
}



