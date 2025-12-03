#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int a = 0, e = 0, i_v = 0, o = 0, u = 0;
    int specialcount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nSpecial Characters Found: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i_v++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
        else if (!isalnum(ch) && !isspace(ch)) {
            printf("%c", str[i]);
            specialcount++;
        }
    }

    printf("\n\nVowel Occurrences:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i_v);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    printf("\nSpecial Characters Count: %d\n", specialcount);

    return 0;
}

