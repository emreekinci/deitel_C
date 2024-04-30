#include <stdio.h>

//dizi isminin dizinin ilk elemani ile ayni olmasi
// array = &array = &array[0] **
int main(void)
{
    char array[5];
    printf("array = %p\n&array[0] = %p\n&array = %p\n",
           array,&array[0],&array);

}
