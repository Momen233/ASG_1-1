#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is odd = 0 \n");
        printf("The number is even = 1\n");
    } else {
        printf("The number is odd = 1\n");
        printf("The number is even = 0\n");
    }

    return 0;
}
