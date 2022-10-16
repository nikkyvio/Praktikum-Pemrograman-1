#include <stdio.h>

int main()
{
    float a,c,jarak,phi,jari_jari,keliling,x;
    a=5;
    c=2;
    jarak=14;
    phi=3.14;
    keliling=jarak / a;
    x= phi * c;
    jari_jari=keliling / x;
    printf("diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = 5 putaran \n");
    printf("jarak tempuh Pak Dengklek = 14 kilometer \n\n ");
    printf("jawaban : \n");
    printf("jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer", jari_jari);
    
    return 0;
}
