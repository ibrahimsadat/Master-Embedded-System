#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = 0;

    // Reverse the whole string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Reverse each word
    while (end <= length) {
        if (str[end] == ' ' || str[end] == '\0') {
            int wordEnd = end - 1;

            // Reverse the word
            while (start < wordEnd) {
                char temp = str[start];
                str[start] = str[wordEnd];
                str[wordEnd] = temp;
                start++;
                wordEnd--;
            }

            // Move to the next word
            start = end + 1;
        }

        end++;
    }
}

int main() {
    char str[] = "mohamed gamal.";
    printf("Input: %s\n", str);

    reverseString(str);

    printf("Output: %s\n", str);

    return 0;
}
