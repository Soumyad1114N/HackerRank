#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price, float percent) {
    float discountAmount=(price*percent)/100;
    float discountedPrice=price-discountAmount;
    return discountedPrice;
}
int main() {
    float amount, discount;
    scanf("%f %f",&amount, &discount);
    float result=discounted(amount,discount);
    printf("The final price is: %f",result);
    return 0;
}
