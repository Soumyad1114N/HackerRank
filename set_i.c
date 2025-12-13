#include <stdio.h>

int main() {
    int num,pos;
    scanf("%i %i",&num,&pos);
    int newNum=num|(1<<pos);
    printf("%i",newNum);
    return 0;
}