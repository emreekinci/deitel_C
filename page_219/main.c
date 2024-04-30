#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n[10];
    size_t i;
    // n  dizisi elemanlarina 0 atama
    for(i=0;i<10;i++){
        n[i]=0;
    }
    printf("%s%13s\n","Eleman","Deger");
    //ekrana yaz
    for(i=0;i<10;i++){
        printf("%7u%13d\n",i,n[i]);
    }

}
