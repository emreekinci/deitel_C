#include <stdio.h>
#include <stdlib.h>

// Zar atma deneyi
// 1 + rand()%6

int main(void)
{
    unsigned int i; // sayac

    printf("My random results :\n\n");
    for(i = 1;i <= 20; ++i){
        printf("%10d",1 + (rand()%6));

        if(i%5==0){
            puts("");
        }
    }


    return 0;
}
