#include <stdio.h>
float elec(int n) {
    float bill;
    if (n<0) {
        bill=-1;
    }
    else if (n<=100) {
        bill=n*5;
    }
    else if (n<=300) {
        bill=500+((n-100)*7);
    }
    else {
        bill=1900+((n-300)*10);
    }
    return bill;
}
int main() {
    int unit;
    scanf("%i",&unit);
    float res=elec(unit);
    if (res!=-1) {
        if ((res>0) && (res<=1200.00)) {
            printf("The electricity bill is: %.2f.",res*0.9);
        }
        else {
            printf("The electricity bill is: %.2f.",res);
        }
    }
    else {
        printf("Invalid Input!");
    }
    return 0;
}