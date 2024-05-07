#include <stdio.h>

//sabit olmayan verilere sabit isaretci uzerinden erismeye calismak-1
//sabit verilere sabit isaretci uzerinde degisiklik yapmaya calismak-2
int main(void)
{
    int x,y; //x ve y tanımlandi
    int z= 12;
    int t;

    //1- ptr ptr uzerinden degistirilebilir bir tamsayiya isaret eden sabit bir isaretcidir
    //fakat daima aynı bellek bolgesine isaret eder
    int * const ptr = &x; //daima x adresine isaret eder

    //   -1
    *ptr = 7 ; // izin verilir: *ptr const turunde degil
    ptr = &y ; // hata :ptr,const turunde ;yeni bir adresle iliskilendirilemez

    //ptr sabit bir degere isaret eden sabit bir isaretci
    //ptr daima ayni bolgeye isaret eder
    //bu bolgedeki tam sayi uzerinde degisiklik yapilamaz
    const int *const ptr_2 = &z;

    printf("\nSection-2\n\n%d",*ptr_2);
    *ptr_2 = 7; //hata: *ptr const turundendir ;yeni deger ile iliskilendirilemez
    ptr_2 = &t; //hata: ptr const turundendir yeni adres atanamaz
}
