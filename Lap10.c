#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    char word[100];

    printf("Enter word: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}
