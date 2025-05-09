#include <stdio.h>
int main(){
    int a = 15;
    int b = 20;
    printf("a = %d,b = %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swap: a = %d,b = %d",a,b);
    return 0;
}