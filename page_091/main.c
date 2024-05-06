#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int passes = 0; // gecenler
    unsigned int failure = 0; // kalanlar
    unsigned int students =1; // ogrenci sayisi
    unsigned int student_c=1;
    int result=0;

    //sayac kontrolüyle x ogrenciyi isle
    printf("%s","Lutfen ogrenci sayisini giriniz : ");
    scanf("%d",&student_c);

    while(students <= student_c){
        printf("%s","Enter result (1 pass ,2 fail): ");
        scanf("%d",&result);

        if(result == 1)passes+=1;
        else failure+=1;
        students+=1;
    }
    //sonlandirma kismmi gecenler ve kalanlari listele
    printf("Passed %u ",passes);
    printf("Failed %u\n",failure);

    if(student_c/2 < failure) printf("Odul yok");
    else printf("Bonus to instructer ..");


    return 0;
}
