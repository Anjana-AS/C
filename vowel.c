#include <stdio.h>
#include <ctype.h>

int main() {
char str[1000];
  
int a = 0, e = 0, vowel_i = 0, o = 0, u = 0;
int specialcount = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);  

printf("\nspecial characters found:");
for (int i = 0; str[i] != '\0'; i++) {
char ch = tolower(str[i]);

switch (ch) {
case 'a': a++; break;
case 'e': e++; break;
case 'i': vowel_i++; break;
case 'o': o++; break;
case 'u': u++; break;
default:
if (!isalnum(ch) && !isspace(ch)) {
printf("%c",str[i]);
specialcount++;
}
break;
}
}

printf("\nVowel Occurrences:\n");
printf("a: %d\n", a);
printf("e: %d\n", e);
printf("i: %d\n", vowel_i);
printf("o: %d\n", o);
printf("u: %d\n", u);
printf("\nSpecial Characters Count: %d\n", specialcount);

return 0;
}
