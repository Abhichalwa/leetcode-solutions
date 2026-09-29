#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "({[]})";
    char stack[100];
    int top = -1;
    int valid = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1) {
        valid = 0;
    }

    if (valid)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}