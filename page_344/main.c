// strtol fonksiyonu kullanım
// unsigned long int turunde karakter dizisi icin : strtoul
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *string  = "-1234567abcdef"; // isaretci tanimi

    char *remainderPtr; // char turunde isaretci olusturulmasi
    long x; // donusturulmus diziyi tutmak icin

    x = strtol( string, &remainderPtr, 0); // remainderPtr donusumden arta kalan karakter dizinine atanir, NULL : kalan karakter d. yok say.
    puts("");
    printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "The original string is " , string,
           "The converted value is " , x,
           "The remainder of the original string is ",
           remainderPtr,
           "The converted value plus 567 is " ,x+567);
}// main sonu
