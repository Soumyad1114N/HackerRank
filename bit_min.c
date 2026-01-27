#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a,&b);
    int diff=(a-b);
    int sign=diff>>31;
    int min = b+(diff & sign);
    printf("%i",min);
    return 0;
}