#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int convertTime(int hh) {
    int hour;
    if(hh>12) {
        hour= (hh-12);
    }
    else if(hh==0) {
        hour=12;
    }
    else {
        hour=hh;
    }
    return hour; 
}

char *format(int hh) {
    char *form;
    if (hh<12){
        form="AM";
    }
    else {
        form="PM";
    }
    return form;
}
int main() {
    int h, m;
    scanf("%i",&h);
    scanf("%i",&m);
    int newHour=convertTime(h);
    char *sign=format(h);
    (m>=10)?printf("%i:%i %s",newHour,m,sign):printf("%i:0%i %s",newHour,m,sign);
    return 0;
}

