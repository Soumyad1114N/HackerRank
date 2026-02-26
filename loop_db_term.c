#include <stdio.h>

int main() {
    int term,val;
    val=1;
    scanf("%i",&term);
    if (term>0) {
        printf("<");
        for (int i=1;i<=term;i++) {
            printf("%i",val);
            if (i < term) {
                printf(" ");
            }
            val=2*val;
        }
        printf(">");   
    }
    
    return 0;
}