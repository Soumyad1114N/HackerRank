#include <stdio.h>

int main() {
    int term,i;
    int count=1;
    scanf("%i",&term);
    for (i=1;count<=term;i++) {
        int sq=i*i;
        if (sq%3!=0) {
            printf("%i ",sq);
            count++;
        }
    }
    return 0;
}