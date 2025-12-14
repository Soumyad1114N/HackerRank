#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%i %i",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a = %i \n",a);
    printf("b = %i",b);
    return 0;
}