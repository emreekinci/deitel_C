#include <stdio.h>
#define ARRAY_SIZE 4
// indisleme ve isaretci gosterimlerini diziler ile kullanmak
int main(void)
{
    int b[] = {10, 20 ,30 , 40}; // b dizisini olustur ve ilk deger ata
    int *bPtr = b; // bPtr olustur ve b dizisine isaret eder
    size_t i; //sayac
    size_t offset; //sayac

    // b dizisini dizi indis gosterimi kullanarak sun
    puts("Array b printed:\nArray subscript notation");

    // b dizisi boyunca dongu olustur
    for(i=0 ; i<ARRAY_SIZE ; i++){
        printf("b[%u] = %d\n",i,b[i]);
    }

    // b  dizisini dizi adi ve isaretci/offest gosterimi olarak sun
    puts("\nPointer offset notation where\n"
         "The pointer is the array name");

    // b dizisi boyunca dongu olustur
    for(offset=0 ; offset < ARRAY_SIZE ;offset++){
        printf("*(b + %u) = %d\n",offset, *(b + offset));
    }

    // b dizisini bPtr ve dizi indisleme gosterimi kullanarak cikti olarak sun
    puts("\nPointer/offset notation");

    //b dizisi boyunca dongu olustur
    for(i=0 ; i<ARRAY_SIZE; i++){
        printf("bPtr[%u] = %d\n",i, bPtr[i]);
    }

    // b dizisini bPtr ve isaretci/offset gosterimi kullanarak cikti olarak sun
    puts("\nPointer/offset notation");

    //b dizisi boyunca dongu olustur
    for(offset=0 ; offset < ARRAY_SIZE ;offset++){
        printf("*(bPtr + %u) = %d\n",offset, *(bPtr + offset));
    }

}
