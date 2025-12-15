#include <stdio.h>
int largest(int a,int b,int c) {
    int large;
    if ((a>b)&&(a>c)) {
        large=a;
    }
    else if ((b>a)&&(b>c)) {
        large=b;
    }
    else {
        large=c;
    }
    return large;
}
int main() {
    int a,b,c;
    scanf("%i %i %i",&a, &b, &c);
    int res=largest(a,b,c);
    printf("The largest number is : %i",res);
    return 0;
}