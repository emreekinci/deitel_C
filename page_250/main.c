#include <stdio.h>
#include <stdlib.h> //string islemleri icin

void printArray(int a[][3]);

int main(void)
{
    //array1,array2,array3 dizilerine baslangic degeri atanmasi
    //atanmayan dizi indis bolgeleri defaul: 0
    int array1[2][3] = { {1,2,3}, {4,5,6} };
    int array2[2][3] = { 1,2,3,4,5};   //{ {1,2,3},{4,5}};
    int array3[2][3] = {{1,2},{4} };

    puts("array1 de yer alan degerin satirla gosterilmesi");
    printArray(array1);

    puts("array2 de yer alan degerin satirla gosterilmesi");
    printArray(array2);

    puts("array3 de yer alan degerin satirla gosterilmesi");
    printArray(array3);

}
// 2 satir ve 3 sutun halinde dizinin ekrana yazdirilmasi
void printArray( int a[][3]){ //satir sayisi belirtilmedi

    size_t j; //satir sayaci
    size_t i; //sutun sayaci

    //satirda dolasan dongu
    for(j=0 ; j<=1 ; j++){
        for(i=0 ; i<=2 ; i++){ // sutunda dolasan dongu
            printf("%d ",a[j][i]);
        }
        printf("\n");//puts( "" );
    }

}
