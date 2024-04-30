#include <stdio.h>
#include <stdlib.h>
// FONKSİYONLARDA BELLEK SINIFI / BELLEK SURESI / KAPSAM / BAGLANTI

//Kapsama
void useLocal(void);
void staticLocal(void);
void useGlobal(void);

int x = 1; // genel degisken

int main(void)
{
    int x = 5;
    printf("Local x in outer scope of main is %d\n",x);
    {//yeni kapsam baslar
        int x = 7; // yeni kapsam yerel degiskeni

        printf("Local x in inner scope of main is %d\n",x);
    }

    printf("Local x in outer scope of main is %d\n",x);

    useLocal(); // useLocalin otomatik yerel x i vardir
    useStaticLocal(); //useStaticLocal in statik yerel x i vardir
    useGlobal(); // useGlobal genel x i kullanir
    useLocal(); // statik otomatik yerel x e yeniden baslangic degeri verir
    useStaticLocal(); // statik yerel x onceki degerini korur
    useGlobal(); // genel x de degerini korur

    printf("\nLocal x in main is %d\n",x);
}

//useLocal her cagrida x yerel degiskenine yeniden baslangic degeri verir
void useLocal(void){
    int x = 25; // useLocal her cagrildiginda baslangic degeri verilir
    printf("\nlocal x in useLocal is %d after entering useLocal\n",x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n",x);
}//useLocal fonksiyon sonu

//useStaticLocal statik x yerel deg. e fonksiyon yalnizca ilk cagrildigi zaman
//baslangic degeri verilir : x in degeri bu fonksiyona yapilan cagrilar arasinda saklanir.
useStaticLocal(void){
    //program baslamadan once baslangic degeri verilir
    static int x =50;

    printf("\nlocal static x is %d on entering useStaticLocal\n",x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n",x);
}
//useGlobal fonk. her cagrida x genel degiskenini degistirir
void useGlobal(void){
    printf("\nglobal x is %d on entering useGlobal\n",x);
    x*=10;
    printf("global x is %d on exiting useGlobal\n",x);
}





