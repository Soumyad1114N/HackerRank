#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    int sign=a>>31;
    if (sign==0)
        printf("Positive");
    else
        printf("Negative");
    return 0;
}