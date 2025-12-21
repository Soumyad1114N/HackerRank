#include <stdio.h>
int main() {
    int year;
    scanf("%i",&year);
    if (year<=0) {
        printf("The given year %i is Invalid year.",year);
    }
    else {
        if ((year%4==0 && year%100!=0)||(year%400==0)) {
            printf("Yes, %i is a leap year.",year);
        }
        else {
            printf("No, %i is not a leap year.",year);
        }
    }
    return 0;
}