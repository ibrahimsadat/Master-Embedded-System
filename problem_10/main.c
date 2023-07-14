#include <stdio.h>

int countMaxOnesBetweenZeros(const char* binaryString) {
    int maxCount = 0;
    int currentCount = 0;
    int i = 0;

    while (binaryString[i] != '\0') {
        if (binaryString[i] == '1') {
            currentCount++;
        } else if (binaryString[i] == '0') {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
        }

        i++;
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    return maxCount;
}

int main() {
    const char* binaryString1 = "01110";
    int maxCount1 = countMaxOnesBetweenZeros(binaryString1);
    printf("Input: %s\n", binaryString1);
    printf("Output: %d\n", maxCount1);

    const char* binaryString2 = "01101110";
    int maxCount2 = countMaxOnesBetweenZeros(binaryString2);
    printf("Input: %s\n", binaryString2);
    printf("Output: %d\n", maxCount2);

    return 0;
}
