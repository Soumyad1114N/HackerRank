#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int angle;
    scanf("%i",&angle);
    for (;angle>360;) {
        angle=angle-360;
    }
    
    if (angle<=90) {
        if(angle==90) {
            printf("Right Angle");
        }
        else {
            printf("Acute Angle");
        }
    }
    else if (angle<=180) {
        if(angle==180) {
            printf("Straight Angle");
        }
        else {
            printf("Obtuse Angle");
        }
    }
    else if (angle<=360) {
        if(angle==360) {
            printf("Full Rotation");
        }
        else {
            printf("Reflex Angle");
        }
    }

    return 0;
}
