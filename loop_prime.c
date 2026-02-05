#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int type;
    scanf("%i",&n);
    if (n<=1) {
        printf("None");
    }
    else {
        for (int i=2;i<=(n-1);i++){
            if (n%i==0) {
                type=1;
                break;
            }
            else {
                type=0;
            }
        }
        if (type==1) {
            printf("Composite");
        }
        else {
            printf("Prime");
        }
    }
    return 0;
}
