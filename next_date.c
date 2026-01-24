#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d,m,y;
    scanf("%i %i %i",&d,&m,&y);
    //checking if leap year//
    int leap;
    if ((y%4==0 && y%100!=0)||(y%400==0)) {
        leap=1;
    }
    else {
        leap=0;
    }
    //logic for month and date//
    if (m==2) { //for feb//
        if (d==28 && leap==1) {//for 28 feb//
            d=29;
        }
        else if ((d==28 && leap==0)||d==29) {
            d=1;
            m=3;
        }
        else if (d>0 && d<28) {
            d++;            
        }
           
    }

    else if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)) { //for month with 31 days//
        if (d==31) {//if date is 31//
            d=1;
            if (m==12) {//if month is dec//
                m=1;
                y++;
            }
            else { //if month is not dec//
                m++;
            }
        }
        else if ((d>0)&&(d<=30)) {//if date is other than 31//
            d++;
        }
    }
    else if ((m==4)||(m==6)||(m==9)||(m==11)) { //for months with 30 days//
        if (d==30) {//if date is 30//
            d=1;
            m++;            
        }
        else if ((d>0)&&(d<30)) {//if date is other than 30//
            d++;
        }
    }
    printf("%02d-%02d-%d\n", d, m, y);
    return 0;
}
