#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* LastDigit(int n1, int n2) {
    int dig1=n1%10;
    int dig2=n2%10;
    char* a="YES";
    char* b="NO";
    if (dig1==dig2) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    int num1,num2;
    scanf("%i",&num1);
    scanf("%i",&num2);
    char* answer=LastDigit(num1,num2);
    printf("%s",answer);
    return 0;
}
