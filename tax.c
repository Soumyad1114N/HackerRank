#include <stdio.h>

int main() {
    float sal;
    scanf("%f",&sal);
    float tax;
    if (sal>=0) {
        if (sal<=250000) {
            tax=0;
            printf("%.2f",tax);
        }
        else if (sal<=500000) {
            tax=((sal-250000)*0.05);
            printf("%.2f",tax);
        }
        else if (sal<=1000000) {
            tax=((250000*0.05)+((sal-500000)*0.2));
            printf("%.2f",tax);
        }
        else {
            tax=((250000*0.05)+(500000*0.2)+((sal-1000000)*0.3));
            printf("%.2f",tax);
        }
    }
    else {
        printf("INVALID");
    }
    return 0;
}