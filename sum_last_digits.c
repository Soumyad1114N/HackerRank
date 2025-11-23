#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a,int b) {
    int out=(a%10)+(b%10);
    return out;
}
int main() {
    int dig1, dig2;
    scanf("%d %d",&dig1,&dig2);
    int res= sumLastDigits(dig1,dig2);
    printf("The sum of last digits is: %d",res);
    return 0;
}