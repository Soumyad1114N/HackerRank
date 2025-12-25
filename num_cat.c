#include <stdio.h>

int main() {
    int num;
    char class;
    scanf("%i",&num);
    if ((num%2==0)&&(num%3==0)&&(num%5!=0)) {
        class='A';
    }
    else if ((num==2*11)||(num==3*7)||(num==3*11)||(num==5*7)||(num==5*11)||(num==7*11)) {
        class='B';
    }
    else if ((num>9 && num<100)&&((num%3==0 && num%7!=0)||(num%3!=0 && num%7==0))){
        class='C';
    }
    else if (((num==1)||(num==4)||(num==9)||(num==16)||(num==25)||(num==36)||(num==49)||(num==64)||(num==81)||(num==100)||(num==121)||(num==144)||(num==169)||(num==196))) {
        class='D';
    }
    else {
        class='E';
    }
    printf("%c",class);
    return 0;
}