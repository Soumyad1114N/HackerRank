#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float halfValue(float n) {
    float half = n/2;
    return half;
}
int main() {
    int num;
    scanf("%i", &num);
    float res=halfValue(num);
    printf("Half of %i is %.2f", num,res);
    return 0;
}
