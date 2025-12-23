#include <stdio.h>
int main() {
    int num;
    scanf("%i",&num);
    if (num>0) {
        if ((num>10 && num%2==0)&&(num>15 && num%3==0)&&(num%7==0)) {
            printf("The verdict for the number %i is: SUPERNATURAL",num);
        }           
        else if ((num%2==0 && num>10)&&(num>15 && num%3==0)){
            printf("The verdict for the number %i is: MIRACULOUS",num);
        }
        else if ((num%2==0 && num>10)&&(num%7==0)) {
            printf("The verdict for the number %i is: MIRACULOUS",num);
        }
        else if ((num>15 && num%3==0)&&(num%7==0)) {
            printf("The verdict for the number %i is: MIRACULOUS",num);
        }            
        else if ((num>15 && num%3==0)||(num%2==0 && num>10)||(num%7==0)){
            printf("The verdict for the number %i is: MAGICAL",num);
        }            
        else if (!((num>10 && num%2==0)&&(num>15 && num%3==0)&&(num%7==0))) {
            printf("The verdict for the number %i is: NORMAL",num);   
        }
    }
    else
        printf("The verdict for the number %i is: INVALID",num);
    return 0;
}