#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,diff,sum=0,pro=1;
    scanf("%i",&n);
    for (;n>0;n/=10) {
        int dig=n%10;
        sum+=dig;
        pro*=dig;
    }
    diff=pro-sum;
    printf("%d",diff);
    return 0;
}
