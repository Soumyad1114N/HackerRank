#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a, int b, int c, int d) {
    int num=(a*1000)+(b*100)+(c*10)+(d);
    return num;
}
int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    scanf("%i %i %i %i",&num1,&num2,&num3,&num4);
    int res=buildNumber(num1, num2,num3,num4);
    printf("The number is: %i",res*5);  
    return 0;
}