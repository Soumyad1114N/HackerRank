#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* voter(int a){
    char* e=(a<18) ? (e="Not Eligible") : (e = "Eligible");
    return e;
}
int main() {
    int age;
    scanf("%i",&age);
    char* elg=voter(age);
    printf("%s",elg);
    return 0;
}
