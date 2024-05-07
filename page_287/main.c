#include <stdio.h>
#include <ctype.h> //toupper() fonksiyonu icin

void convertToUppercase( char *sPtr); // okur ve degistirir
void printCharacters( const char *sPtr); // sPtr read only
void f( const int *xPtr);

int main(void)
{

    char string[] = "cHaracTers anD £#$56.38"; //char diziyi baslatmak
    char string_2[] = "print characters of a string";

    //int y;
    //f(&y); // f illegal degisiklik girisiminde bulunur

    printf(" The string before conversion is : %s", string);
    convertToUppercase( string );
    printf("\nThe string after conversion is: %s\n", string);

    puts("The string is: ");
    printCharacters( string_2);
    puts("");

}

void convertToUppercase( char *sPtr){
    while(*sPtr != '\0'){ // \0 gorene kadar don
        *sPtr = toupper( *sPtr); // donustur
        sPtr++;  //ilerle
    }
}//sabit olmayan verilere sabit olmayan isaretci

void printCharacters( const char *sPtr){
    for(;*sPtr !='\0' ; *sPtr++){
        printf("%c", *sPtr);
    }
}//sPtr isaret ettigi karakter uzerinede degisiklik yapamaz read-only isaretci

/*
void f( const int *xPtr){
    *xPtr = 100; // hata:sabit bir nesne uzerinde degisiklik yapamayız
}*/
