#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dist(char char1, char char2) {
    int distance= (char2-char1);
    return distance;
}
int main() {
    char a,b;
    scanf("%c %c",&a, &b);
    int res=dist(a,b);
    printf("The distance between %c and %c is %d", a, b,res);
    return 0;
}