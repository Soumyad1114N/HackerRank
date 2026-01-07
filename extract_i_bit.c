#include <stdio.h>

int main() {
    int num,pos;
    scanf("%i %i",&num,&pos);
    printf("%d",(num>>pos)&1);
    return 0;
}