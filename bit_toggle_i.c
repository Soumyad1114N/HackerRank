#include <stdio.h>

int main() {
    int n,i,res;
    scanf("%d %d", &n,&i);
    res=n^(1<<i);
    printf("%d",res);
    return 0;
}