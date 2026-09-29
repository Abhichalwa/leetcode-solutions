#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;

    int i = 0;

    while (strs[0][i] != '\0') {
        char current = strs[0][i];

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                printf("Longest common prefix: ");

                for (int k = 0; k < i; k++) {
                    printf("%c", strs[0][k]);
                }

                printf("\n");
                return 0;
            }
        }

        i++;
    }

    printf("Longest common prefix: %s\n", strs[0]);

    return 0;
}