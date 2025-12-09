#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* CheckRange(int num, int low,int high){
    char* a="In Range";
    char* b="Out of Range";
    int res=(num<=high)?((num>=low)?(res=1):(res=0)):(res=0);
    if (res==1) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    int n, low, high;
    scanf("%i %i %i",&n, &low, &high);
    char* result=CheckRange(n,low,high);
    printf("%s",result);
    return 0;
}
