#include <stdio.h>

int main() {
    int n,i;
    scanf("%i",&n);
    for (i=n;i>1;) {
        if (i%2==0) {
            printf("%i",i);
            i=i/2;
        }
        else {
            printf("%i",i);
            i=3*i+1;
        }
        printf(" -> ");
    }
    printf("1");
    return 0;
}