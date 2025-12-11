#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int convert(double n) {
    int dec=(n/1);
    return dec;
}
int main() {
    float num;
    scanf("%f",&num);
    int result=convert(num);
    printf("Rounded Value = %i",result);
    return 0;
}
