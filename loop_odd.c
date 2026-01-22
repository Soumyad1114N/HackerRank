#include <stdio.h>

int main() {
    int num;
    scanf("%i",&num);
    for(int i=1;i<=num;i+=2) {
        printf("%i ",i);
    }
    return 0;
}