#include <stdio.h>
#include <string.h>

int main() {
    int month,year;
    scanf("%i %i",&month,&year);
    int leap;
    if ((month<1)||(month>12)) { //invalid inputs//
        printf("Invalid Month\n");
    }
    if (year<1) {
        printf("Invalid Year");
    }
    
    if ((year%4==0 && year%100!=0)||(year%400==0)) { //check for leap year//
        leap=1;
    }
    else {
        leap=0;
    }
    if (year>0) { //printing number of days//
        if ((month>=1)&&(month<=12)) {
            if ((month==2)&&(leap==1)) {
                printf("29");
            }
            else if ((month==2)&&(leap==0)) {
                printf("28");
            }
            else if ((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)) {
                printf("31");
            }
            else {
                printf("30");
            }
            
        }
    }
    return 0;
}