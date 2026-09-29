#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    int count[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[(unsigned char)t[i]]--;
    }

    int isAnagram = 1;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}