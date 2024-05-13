#include <stdio.h>
#define SIZE 10

void copy1( char * const s1, const char * const s2);
void copy2( char *s1, const char *s2);
int main(void)
{
    char string1[SIZE];
    char *string2 = "Hello";
    char string3[SIZE];
    char string4[] ="Good Bye";

    copy1( string1, string2);
    printf("string1 = %s\n",string1);

    copy2( string3, string4);
    printf("string3 = %s\n", string3);
}

// dizi gosterimini kullanarak s2 yi s1 e kopyala
void copy1( char * const s1, const char * const s2){
    size_t i; //sayac

    //karakter dizinleri boyunca dongu olustur
    for( i=0 ; (s1[i] = s2[i]) !='\0' ;i++){ //kopyalanan karakter null olana kadar don
        ;
    }
}

//isaretci gosterimi kullanarak s2 yi s1 e kopyala
void copy2( char *s1, const char *s2){
    //karakter dizinleri boyunca dongu olustur
    for(; (*s1 = *s2) != '\0' ;++s1,++s2){
        ;
    }
}
