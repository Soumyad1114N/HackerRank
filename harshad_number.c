#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,m;
    scanf("%d",&n);
    m=n;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    if (m%sum==0) {
        printf("%d is a harshad number",m);
    }
    else {
        printf("%d is not a harshad number",m);
    }
    return 0;
}
