#include <stdio.h>
#include <string.h>

int main() {
    char str[200], substr[100];
    int pos;

    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 


    printf("Enter the substring to insert: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; 


    printf("Enter the position to insert the substring: ");
    scanf("%d", &pos);

    int lenStr = strlen(str);
    int lenSubstr = strlen(substr);


    if (pos < 0 || pos > lenStr) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = lenStr; i >= pos; i--) {
        str[i + lenSubstr] = str[i];
    }


    for (int i = 0; i < lenSubstr; i++) {
        str[pos + i] = substr[i];
    }

    printf("Resulting string: %s\n", str);

    return 0;
}

