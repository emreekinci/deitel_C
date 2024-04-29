#include <stdio.h>
#include <stdlib.h>
//#define c_year 10

// BILESIK FAIZ ORANINI HESAPLAYAN PROGRAM
int main(void)
{
    double amount ;//yatan miktar
    double principle = 1000.00;//ana para
    double rate = 0.5;//yillik faiz orani
    unsigned int year;//sayac yil
    unsigned c_year; //yil degiskeni

    printf("%s","Lutfen bir yil degeri giriniz : ");
    scanf("%u",&c_year);
    //tablo sütun başlıkları yazma
    printf("%4s%21s\n","year""      Amount on deposit" );

    //on yilin here biri icin yatan miktarin hesaplanmasi
    for (year = 1;year <= c_year; ++year){
        //belirtilen yil icin yatan miktari hesaplama
        amount = principle * pow(1.0 + rate,year);
        //bir tablo satiri yazma
        printf("%4u%21.2f\n",year,amount);
    }


    return 0;
}
