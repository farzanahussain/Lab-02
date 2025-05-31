#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is Positive\n", num);
    else
        printf("%d is NOT Positive\n", num);

    return 0;
}
