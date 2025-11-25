#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int num;
    long lnum;
    char ch;
    float flt;
    double dbl;
    scanf("%d %ld %c %f %lf",&num,&lnum,&ch,&flt,&dbl);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",num,lnum,ch,flt,dbl);
    return 0;
}
