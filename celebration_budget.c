#include <stdio.h>

int main() {
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    scanf("%i %i %i %i %i %i ",&budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
    int foodCost=foodCostPerGuest*numGuests;
    int totalCost=foodCost+decorationCost+musicCost+extraExpenses;
    if (totalCost<=budget) {
        if ((numGuests>5)&&(numGuests<=50)) {
            if (decorationCost<(budget*0.3)) {
                if (numGuests<=25) {
                    printf("Celebration Approved");
                }
                else if ((numGuests>25)&&(musicCost>0)) {
                    printf("Celebration Approved");
                }
                else {
                printf("Celebration Denied");
                }
            }
            else if (foodCost<(budget*0.5)) {
                if (numGuests<=25) {
                    printf("Celebration Approved");
                }
                else if ((numGuests>25)&&(musicCost>0)) {
                    printf("Celebration Approved");
                }
                else {
                printf("Celebration Denied");
                }
            }
            else {
                printf("Celebration Denied");
            }
        }
        else {
        printf("Celebration Denied");
        }
    }
    else {
        printf("Celebration Denied");
    }
    
    return 0;
}