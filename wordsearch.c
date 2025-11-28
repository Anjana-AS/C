#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], word[1000];
    int count = 0;
    printf("enter a string :\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("enter a word to find: ");
    scanf("%s", word);
    char* token = strtok(str, " \t\n");
    while (token != NULL) {
    if (strcmp(token, word) == 0) {
    count++;
    }
    token = strtok(NULL, " \t\n");
    }
    printf("the word '%s' occurs %d times.\n", word, count);
    return 0;
}
  
