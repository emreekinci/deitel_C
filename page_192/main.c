#include <stdio.h>
#include <stdlib.h>

//ozyineleme fibonacci hesabi

unsigned long long int fib( unsigned int ); // fonksiyon bildirimi
int main(void)
{
    unsigned long long int result;
    unsigned int number;

    //kullanicidan tam sayi al
    printf("%s","Enter an integer: ");
    scanf("%d",&number);

    // kullanicidan girilen sayi icin fib degeri hesapla
    result = fib(number);

    //sonucu goster
    printf("Fibonacci(%u) : %llu ",number,result);
}

//fibonacci yinelemeli tanimi
unsigned long long int fib(unsigned int n){
    //temel durum
    if( 0 == n || 1 == n){
        return n;
    }
    else // yineleme adimi
    {
        return fib(n-1) + fib(n-2);
    }
}
