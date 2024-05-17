#include <stdio.h>

//prototipler
void funtion1( int a);
void funtion2( int b);
void funtion3( int c);

int main(void)
{
    // herbiri bir tamsayi arguman alan ve void turunden 3 fonksiyona isaret eden
    // fonksiyon isaretci dizisinin tanimlanmasi
    void(*f[ 3 ])( int ) = { funtion1, funtion2, funtion3 };

    size_t choise; // kullanici seciminin tutulacaagi degisken

    printf("%s","Enter a number between 0 and 2 , 3 to end: ");
    scanf("%u",&choise);

    //kullanici seciminin isleme alinmasi
    while( choise >= 0 && choise < 3){
        // f dizisi icerisindeki choise konumunda bulunan fonksiyonu cagirir ve
        // ve choise i bir arguman olarak aktar
        (*f[choise])(choise);

        printf("%s","Enter a number between 0 and 2, 3 to end: ");
        scanf("%u",&choise);
    }
    puts("Program execution completed.");
}

void funtion1( int a ){
    printf("You entered %d to function1 was called\n\n",a);
}

void funtion2( int b ){
    printf("You entered %d to function1 was called\n\n",b);
}

void funtion3( int c ){
    printf("You entered %d to function1 was called\n\n",c);
}
