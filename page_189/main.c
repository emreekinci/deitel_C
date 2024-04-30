#include <stdio.h>
#include <stdlib.h>
// recursion

unsigned long long int factorial(unsigned int number);

int main(void)
{
    unsigned int i; //sayac
    //her tekrarlamada ,factorial(i) hesapla
    //ve sonucu goster
    unsigned int x;
    printf("Lutfen factoriali alinacak sayiyi gir: ");
    scanf("%d",&x);
    //puts(x);
    for(i=0;i <= x;i++){
        printf("%u! = %llu\n",i,factorial(i));
    }
}
//factorial ozyineli halde
unsigned long long int factorial(unsigned int number){
    //temel durum
    if(number == 1 || number == 0){return 1;}
    /*if(number < 0){
        printf("Negatif degerler giremezsin ..");
    }*/
    else{
        return (number * factorial(number - 1));
    }
}
