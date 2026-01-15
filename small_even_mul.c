#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%i",&num);
    if (num%2==0) {
        printf("%i",num);
    }
    else {
        printf("%i",num*2);
    }
    return 0;
}
