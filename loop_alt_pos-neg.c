#include <stdio.h>

int main() {
    int num;
    scanf("%i",&num);
    for (int i=1;i<=num;i++) {
        if (i%2==0)
            printf("-%i ",i);
        else 
            printf("%i ",i);
    }
    return 0;
}