#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int counter; // not sayisi sonraki grilecek
    int grade;  // not degeri
    int total;  // girilen toplam not degeri
    int average; // ortalama

    // initializing value to asign
    total=0;
    counter=1;

    // işlem
    while(counter <= 10){
        printf("%s","Enter grade: "); // giris istemi
        scanf("%d",&grade);  // kullanicidan not oku
        total+=grade;        // totale notu ekle
        counter+=1;
    }//sonlandırma kismi
    average= total / counter;

    printf("Class average is %d\n: ",average); // sonucu göster

    return 0;
}
