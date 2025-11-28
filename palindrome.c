#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char str[100], filtered[100];
int i, j, len, isPalindrome = 1;

printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);


str[strcspn(str, "\n")] = '\0';
j = 0;
for (i = 0; str[i] != '\0'; i++) {
if (isalnum(str[i])) {
filtered[j++] = tolower(str[i]);
}
}
filtered[j] = '\0';
len = strlen(filtered);

for (i = 0; i < len / 2; i++) {
if (filtered[i] != filtered[len - i - 1]) {
isPalindrome = 0;
break;
}
}

if (isPalindrome)
printf("The string is a palindrome.\n");
else
printf("The string is NOT a palindrome.\n");
return 0;
}

