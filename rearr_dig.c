#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%i",&num);
    if ((num>1000)&&(num<=9999)) {
        int a,b,c,d;
        int A,B,C,D;        
        a=num/1000;
        b=(num/100)%10;
        c=(num/10)%10;
        d=num%10;
        if (a>=b && a>=c && a>=d) {
            A=a;
            if (b>=c && b>=d) {
                B=b;
                if (c>=d) {
                    C=c;
                    D=d;}
                else {
                    C=d;
                    D=c;}
            }
            else if (c>=b && c>=d) {
                B=c;
                if (b>=d) {
                    C=b;
                    D=d;}
                else {
                    C=d;
                    D=b;}
            }
            else {
                B=d;
                if (b>=c) {
                    C=b;
                    D=c;}
                else {
                    C=c;
                    D=b;}
            }
        }
        else if (b>=a && b>=c && b>=d) {
            A=b;
            if (a>=c && a>=d) {
                B=a;
                if (c>=d) {
                    C=c;
                    D=d;}
                else {
                    C=d;
                    D=c;}
            }
            else if (c>=a && c>=d) {
                B=c;
                if (a>=d) {
                    C=a;
                    D=d;}
                else {
                    C=d;
                    D=a;}
            }
            else {
                B=d;
                if (a>=c) {
                    C=a;
                    D=c;}
                else {
                    C=c;
                    D=a;}
            }
        }
        else if (c>=a && c>=b && c>=d) {
            A=c;
            if (a>=b && a>=d) {
                B=a;
                if (b>=d) {
                    C=b;
                    D=d;}
                else {
                    C=d;
                    D=b;}
            }
            else if (b>=a && b>=d) {
                B=b;
                if (a>=d) {
                    C=a;
                    D=d;}
                else {
                    C=d;
                    D=a;}
            }
            else {
                B=d;
                if (a>=b) {
                    C=a;
                    D=b;}
                else {
                    C=b;
                    D=a;}
            }
        }
        else {
            A=d;
            if (a>=b && a>=c) {
                B=a;
                if (b>=c) {
                    C=b;
                    D=c;}
                else {
                    C=c;
                    D=b;}
            }
            else if (b>=a && b>=c) {
                B=b;
                if (a>=c) {
                    C=a;
                    D=c;}
                else {
                    C=c;
                    D=a;}
            }
            else {
                B=c;
                if (a>=b) {
                    C=a;
                    D=b;}
                else {
                    C=b;
                    D=a;}
            }
        }
        printf("%i%i%i%i",A,B,C,D);
    }
    return 0;
}
