#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = 3;
    int hasil_relasi = a == b;
    int hasil_relasi2= b > c;
    int hasil_relasi3= a != c;
    printf("variabel a bernilai 4\n");
    printf("variabel b bernilai 8\n");
    printf("variabel c bernilai 3\n");
    printf("apakah a sama dengan b ? jawabannya adalah %d\n",hasil_relasi);
    printf("apakah b lebih besar dari c ? jawabannya adalah %d\n",hasil_relasi2);
    printf("apakah a tidak sama dengan c ? jawabannya adalah %d\n",hasil_relasi3);
    
    return 0;
}
