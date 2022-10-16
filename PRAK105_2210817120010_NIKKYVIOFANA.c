#include <stdio.h>

int main(){
    float a,b,x,y,c,d,total;
    a=9;
    b=5;
    x=8;
    y=8;
    c=a / b;
    d=x / y;
    d++;
    total= d + c;
    printf("variabel a adalah 9 \n");
    printf("variabel b adalah 5 \n");
    printf("variabel x adalah 8 \n");
    printf("variabel y adalah 8 \n");
    printf("total sisa bagi dari a dibagi b dan x dibagi y adalah %.f",total);
    
    return 0;
}