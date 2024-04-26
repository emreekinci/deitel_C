#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int counter;
    int grade;
    int total;

    float avg;

    // baslangic
    counter = 0;
    total = 0;

    // islem kismi
    // kullanicidan ilk notu al

    printf("%s","Enter grade -1 to end : ");  // giris istemi
    scanf("%d",&grade);                       // kullanicidan notu oku
    while(grade != -1){
        total+=grade;
        counter+=1;
        //kullanicidan sonraki notu al
        printf("%s","Enter grade , -1 to end : ");
        scanf("%d",&grade);
    }//while sonu
    if(counter != 0){
        avg= (float)total / counter;
        printf("Class avg is %.2f\n",avg);
    }
    else{
        printf("No grades were entered");
    }


    return 0;
}
