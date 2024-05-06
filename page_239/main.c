//anket verilerinin diziler ile analizi
//verilerin orta deger ,ortalama ve modunu hesaplama
#include <stdio.h>
#include <stdlib.h>
#define SIZE 99

//istatistik calis **

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[],unsigned const int answer[]);
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);

int main(void)
{
    unsigned int frequency[10] = {0}; //dizi frekansina baslangic degeri atamasi
    //cevap dizisine baslangic degeri atamasi
    unsigned int response[SIZE] =
    {
      6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
      7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
      6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
      7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
      6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
      7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
      5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
      7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
      7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
      4, 5, 6, 1, 6, 5, 7, 8, 7 };

    //cevaplarin islenmesi
    mean(response);
    median(response);
    mode(frequency, response);
}

//cevap degerlerinin ortalamasini hesaplama
void mean( const unsigned int answer[]){
    size_t j; // dizi elemanlarini toplama sayaci
    unsigned int total = 0;

    printf("%s\n%s\n%s\n","*********","Ortalama","*********");

    //cevap degerlerinin tumu
    for(j=0 ;j<SIZE; ++j){
        total+=answer[j];
    }
    printf("Tuum verilerin ortalamasi ,\n"
           "tum elemanlardaki degerlerin toplaminin\n"
           "eleman sayisina olan bolumudur\n"
           "(%u).Bu calistirmanin \n"
           "ortalamasi %u / %u = %.4f\n\n",
           SIZE, total, SIZE, (double)total / SIZE);
}// ortalama fonksiyonunun sonu

//diziinin siralanmasi ve orta elemanin bulunmasi

void median(unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n%s",
           "*********","Orta","*********",
           "Siralanmamis dizi");
    printArray( answer ); //siralanmis dizinin ciktisi

    bubbleSort( answer ); //dizinin siralanmasi

    printf("%s","\n\nSiralanmis dizi");
    printArray( answer ); //siralanmis dizinin ciktisi

    //orta elemanin gosterilmesi
    printf("\n\nOrta eleman olan %u\n"
           "Dizideki %u eleman icinden secilmistir\n"
           "Bu calistirmanin orta elemani %u\n\n",
           SIZE / 2,SIZE,answer[SIZE/2]);
}

// en sik karsilasilan cevabin bulunmasi
void mode(unsigned int freq[],const unsigned int answer[]){
    size_t rating; //frekans dizisinde en sik karsilasilan eleman icin sayac
    size_t j; //0-98 cevap dizisi icin sayac
    unsigned int h; //frekans dizisi degerleri cizelgesi icin sayac
    unsigned int largest = 0; //en yuksek frekans
    unsigned int modeValue = 0; //en sik karsilasilan cevap

    printf("\n%s\n%s\n%s\n",
           "**********","Mod","**********");
    //frekanslara 0 baslangic degeri atamasi
    for(rating = 1; rating <= 9; rating++){
        freq[rating] = 0;
    }

    //frekanslarin toplanmasi
    for(j = 0; j <= SIZE; j++){
        ++freq[answer[j]];
    }

    //cevap sutunlari basliginin ciktisi
    printf("%10s%10s%9s\n\n%54s\n%54s\n\n",
           "Cevap","Frekans-","Cizelge",
           "1122","50505");
    //cevaplarin yazdirilmasi
    for(rating=1 ; rating<=9 ;rating++){
        printf(" %8u%11u ",rating, freq[ rating ]);
        //mod degeri ve en yuksek frekans degerinin takibi
        if(freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }
        //frekans degerlerinden olusan cizelge sutununun yazdirilmasi
        for(h=1 ; h<=freq[rating];h++){
            printf("%s","*");
        }//ic dongu sonu
        puts( "" ); //yeni satir yazdirma
    }//dis dongu sonu

    // mod degerinin yazdirilmasi
    printf("\nMod en sik karsilasilan degerdir.\n"
           "Bu calismada mod %u"
           " %u kez bulunmustur.\n",modeValue,largest);
}//mod fonk sonu

//kabarcik algoritmasi ile diziyi siralayan fonksiyon
void bubbleSort( int a[])//kitapta unsigned var sildim
{
    unsigned int pass; //dolasma sayaci
    size_t j; //karsilastirma sayaci
    unsigned int hold; //yerdegistirme icin gecici degisken

    //dolasma sayilarini kontrol eden dongu
    for(pass=0;pass<SIZE;pass++){
        //her dolasmadaki karsilastirma sayilarini kontrol eden dongu
        for(j=0 ; j<SIZE ; j++){
            //siralama disi ise yer degistirme
            if(a[j] > a[j+1]){
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
        }
    }
}

//dizi iceriginin yazdirilmasi (her siradda 20 deger)

void printArray(const unsigned int a[]){
    size_t j;

    //dizi iceriginin yazdilmasi
    for(j=0 ;j<SIZE ; j++){
        if(j%20 ==0){
            puts( "" );
        }
        printf("%2u",a[j]);
    }
}
