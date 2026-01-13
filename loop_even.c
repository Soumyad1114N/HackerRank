#include <stdio.h>

int main() {
    int num;
    scanf("%i",&num);
    for (int i=2;i<=num;i+=2) {
        printf("%i ",i);
    }
    return 0;
}
