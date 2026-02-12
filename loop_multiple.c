#include <stdio.h>

int main() {
    int term,num;
    scanf("%i %i",&term,&num);
    for (int i=1;i<=term;i++) {
        printf("%i ",num*i);
    }
    return 0;
}