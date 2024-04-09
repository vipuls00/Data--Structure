#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int stack[100];
int top = -1;

int operate(int a, int b, char opr) {
    switch (opr) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
    }
    return 0;
}

int peak() {
    if (top >= 0)
        return stack[top];
    else
        return -1;
}

void pop() {
    top--;
}

void push(int value) {
    stack[++top] = value;
}

int main() {
    char str[100];
    int i = 0, ans = 0, a, b;
    scanf("%[^\n]%*c", str);
    for (i = 0; strlen(str) > i; i++) {
        if (str[i] == ' ') {
            push(ans);
            ans = 0;
        } else if (str[i] >= 48 && str[i] <= 57) {
            ans = ans * 10 + (str[i] - 48);
        } else {
            b = peak();
            pop();
            a = peak();
            pop();
            if (top < -1) {
                break;
            } else {
                ans = operate(a, b, str[i]);
            }
        }
    }
  
        printf("%d", ans);
    return 0;
}
