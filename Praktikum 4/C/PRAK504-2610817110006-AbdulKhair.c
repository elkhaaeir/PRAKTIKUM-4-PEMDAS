#include <stdio.h>

int reverse(int number) {
    int result = 0;

    while(number > 0) {
        int digit = number % 10;
        result = result * 10 + digit;
        number = number / 10;
    }
    return result;
}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);

    A=reverse(A);
    B=reverse(B);

    int C = A+B;
    printf("%d",reverse(C));
}