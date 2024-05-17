#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%s\n%s%s%s\n%s%s%s\ns%s%s\n\n",
           "isspace fonksiyonu sonucu: ",
           "Newline ",isspace( '\n' ) ? "is a " : "is not a ",
           "Whitespace character","Horizontal tab ",
            isspace( '\t ') ? "is a " : "is not a ",
           "Whitespace character ",
           isspace( '%' ) ? "% is a " : "% is not a ",
           "Whitespace chaacter ");

    printf("%s\n%s%s%s\n%s%s\n\n","iscntrl fonksiyonu sonucu:",
           "Newline",iscntrl( '\n' ) ? "is a " : "is not a ",
           "control character", iscntrl( '$' ) ? " $ is a ":
           "$ is not a", "conntrol character");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
           "ispunct fonksiyonuna göre:",
           ispunct( ';') ? "; is a " : "; is not a ",
           "punctuation character",
           ispunct( 'Y' ) ? "Y is a " : "Y is not a ",
           "punctuation character",
           ispunct( '#' ) ? "# is a " : "# is not a",
           "punctuation character"  );

    printf("%s\n%s%s\n%s%s%s\n\n","isprint fonksiyonuna gore: ",
           isprint( '$' ) ? "$ is a " : "$ is not a",
           "printing character",
           "Alert ", isprint( '\a' ) ? "is a " : "is not a",
           "printing character" );

    printf("%s\n%s%s\n%s%s%s\n\n","isgraph fonksiyonuna gore: ",
           isgraph( 'Q' ) ? "Q is a" : "Q is not a ",
           "printting character other than a space",
           "Space ", isgraph( ' ' ) ? "is a " : "is not a ",
           "printing character other than a space" );
}
