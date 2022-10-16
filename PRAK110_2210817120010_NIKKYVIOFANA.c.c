#include <stdio.h>
#include <math.h>

int main()
{
    float A,T,C,D,sisi_b,sisi_a,sisi_c,keliling,luas;
    A=5;
    T=12;
    C=A * A + T * T;
    D=0.5;
    sisi_a=T;
    sisi_b=sqrt(C);
    sisi_c=A;
    keliling=sisi_a + sisi_b + sisi_c;
    luas=D * A * T;
    printf("diketahui : \n");
    printf("alas = 5 cm\n");
    printf("tinggi = 12 cm\n\n");
    printf("jawab : \n");
    printf("sisi A = %.f cm\n", sisi_a);
    printf("sisi B = %.f cm\n", sisi_b);
    printf("sisi C = %.f cm\n", sisi_c);
    printf("keliling = %.f cm\n", keliling);
    printf("luas = %.f cm", luas);
    return 0;
}
