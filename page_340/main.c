#include <stdio.h>
#include <ctype.h>


int main(void)
{
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "islower fonksiyonu sonucu: ",
           islower( 'p' ) ? " p is a " : " p is not a ",
           "lowercase letter",
           islower( 'P') ? " P is a " : " P is not a ",
           "lowercase letter",
           islower( '5' ) ? " 5 is a " : " 5 is not a ",
           "lowercase letter",
           islower( '!') ? " ! is a " : " ! is not a ",
           "lowercase letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "isupper fonksiyonu sonucu: ",
           isupper( 'D' ) ? " D is a " : " D is not a ",
           "uppercase letter",
           isupper( 'd') ? " d is a " : " d is not a ",
           "uppercase letter",
           isupper( '8' ) ? " 8 is a " : " 8 is not a ",
           "uppercase letter",
           isupper( '$') ? " $ is a " : " $ is not a ",
           "uppercase letter");

    printf("%s%c\n%s%c\n%s%c\n%s%c\n\n",
           "u buyuk harfe donusum ",toupper( 'u' ),
           "U kucuk harfe donusum ",tolower( 'U' ),

           "7 buyuk harfe donusum ",toupper( '7' ),
           "$ buyuk harfe donusum ",toupper( '$' ),
           "L buyuk harfe donusum ",toupper( 'L' ) );
}
