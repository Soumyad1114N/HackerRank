#include <stdio.h>

int main() {
    int n,i,res;
    scanf("%d",&n);
    scanf("%d",&i);
    if ((i>=0)||(i<=31)) {
        res=n&~(1<<i);
        printf("%d",res); 
    }
   
    return 0;
}