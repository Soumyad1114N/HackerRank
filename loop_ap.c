#include <stdio.h>

int main() {
    int term,a,d;
    scanf("%i",&term);
    scanf("%i %i",&a,&d);
    for (int i=term;i>=1;i--) {
        printf("%i ",a);
        a+=d;
    }
    return 0;
}