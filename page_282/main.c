#include <stdio.h>
#include <stdlib.h>

//arguman aktarimi: deger ile aktarma , referans ile aktarma

int cubeByValue(int n);
int cubeByReferance(int *nptr);
int main(void)
{
    int number = 5;
    int res_1;
    printf("The original value of number is %d\n", number);
    // number degiskenini deger yolu ile cubeByValue fonksiyonuna aktar
    res_1 = cubeByValue( number );
    cubeByReferance( &number );
    printf("The new value is %d\n",res_1);
    printf("The last value is %d",number);
}
int cubeByValue(n){//deger ile aktarim
    return n * n * n;
}
int cubeByReferance( int *nptr ){//referans ile aktarim
    *nptr = *nptr * *nptr * *nptr; // direk bellek adresini degistirme islemi
}
