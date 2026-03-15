#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, max;
    scanf("%i %i",&a,&b);
    if (a>b) 
        max=a;
    else 
        max=b;
    while (1) {
        if((max%a==0)&&(max%b==0)) {
            printf("%d",max);
            break;
        }
        max++;
    }
    return 0;
}
