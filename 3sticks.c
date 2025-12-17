#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
      if(!(a<b+c && b<c+a && c<b+a)){
            printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
          return 0;
        }
    
     if((a==b)&&(a==c)){
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }
     else if((a==b)||(a==c)||(b==c)) {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
        }
    else {
         printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }
       
    return 0;
}