#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width) {
    int val=(length*width);
    return val;
}
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int res=area(a,b);
    printf("The area is: %d units", res);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
