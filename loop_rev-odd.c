#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=2*n-1;i>=1;i-=2) {
        printf("%d",i);
        if (i!= 1) {
            printf(" ");
        }
        else {
            printf(".");
        }
    }  
    return 0;
}