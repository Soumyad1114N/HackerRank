#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%i",&num);
    for (int i=3;i<=num;i++) {
        if ((i % 3 == 0 || i % 5 == 0) && (i % 15 != 0)) 
            printf("%i ",i);
    }
    return 0;
}
