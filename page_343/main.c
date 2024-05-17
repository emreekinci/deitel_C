// Karakter dizini donusturme fonksiyonu : strod fonksiyonu kullanimi
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // karakter dizini isaretcisine baslangic degeri atanmasi
    const char *string = "51.2% are admitted "; // karakter dizinine baslangic degeri atanir

    double d; // donusturulmus karakter dizinine baslangic degeri atanir
    char *stringPtr; // char turune isaretci atanir

    d = strtod( string, &stringPtr );

    puts(" ");
    printf("The string \"%s\" is converted to the \n", string );
    printf("double value %.2f and the string \"%s\"\n",d, stringPtr);
}
