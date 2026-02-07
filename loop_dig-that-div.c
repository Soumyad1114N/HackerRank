#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count=0;
    scanf("%i",&n);
    for (int i=n;i>0;i/=10) {
        int dig=i%10;
        if (n%dig==0) {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
