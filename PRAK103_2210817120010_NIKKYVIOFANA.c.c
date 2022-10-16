#include <stdio.h>

int main()
{
    float a,b,c,x,y,hasil;
    a=9;
    b=6;
    x=10;
    y=7;
    c=a + b;
    hasil= c * x / y;
    printf("variabel a bernilai 9\n");
    printf("variabel b bernilai 6\n");
    printf("variabel x bernilai 10\n");
    printf("variabel y bernilai 7\n");
    printf("hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", hasil);
    return 0;
}
