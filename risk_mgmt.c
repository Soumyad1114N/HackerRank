#include <stdio.h>

int main() {
    int age, inc, rt;
    scanf("%i %i %i",&age, &inc, &rt);
    if (age<30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if ((inc<=30000)&&((rt==1)||(rt==2))) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if (age<=50) {
        if (inc<=75000) {
            if (rt==2) {
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
        }
        else {
            if ((rt==1)||(rt==2)) {
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
            else {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
    }
    else {
        if ((inc>75000)&&(rt==3)) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }
    return 0;
}