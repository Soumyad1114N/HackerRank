#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int temp;
    scanf("%i",&temp);
    if (temp<0) {
        printf("Freezing");
    }
    else if (temp>30) {
        printf("Hot");
    }
    else {
        printf("Normal");
    }
    return 0;
}
