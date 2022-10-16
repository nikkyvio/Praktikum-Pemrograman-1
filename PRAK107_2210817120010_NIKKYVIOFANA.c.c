#include <stdio.h>

int main()
{
    int a,b,c,d,keliling,harga,total_harga;
    a=4;
    b=5;
    c=7;
    harga=85000;
    keliling=a + b + c;
    total_harga=harga * keliling;
    printf("diketahui : \n");
    printf("panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
    printf("keliling tanah Pak Dengklek adalah %d\n", keliling);
    printf("harga tanah per meter adalah %d\n", harga);
    printf("jawaban :\n");
    printf("biaya yang diperlukan pak dengklek adalah : Rp %d", total_harga);

    return 0;
}
