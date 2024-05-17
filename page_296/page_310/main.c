#include <stdio.h>
#define SIZE 10

// prototipler
void bubble( int work[], size_t size, int (*compare)( int a, int b) );
int ascending( int a, int b);
int descending( int a, int b);


int main(void)
{

    int order; // artan siralama icin 1 azalan siralama icin 2
    size_t counter; //sayac

    // siralanmis a dizisini yukle
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("%s","Enter 1 to sort in ascending order,\n"
           "Enter 2 to sort in descending order: ");
    scanf("%d",&order);

    puts("\nData items in original orders: ");

    // orjinal diziyi goster
    for( counter = 0 ; counter < SIZE ;counter++){
        printf("%5d", a[counter]);
    }

    // diziyi artan sekilde sirala ; artan siralama talebini belirtmek icin
    // arguman olarak ascending fonksiyonunu aktar
    if( order == 1){
        bubble( a, SIZE, ascending );
        puts("\nData items in ascending order");
    }
    else{//descending fonksiyonu aktar
        bubble( a, SIZE, descending );
        puts("\nData items in descending order");
    }

    //sirali diziyi goster
    for( counter = 0 ; counter < SIZE ; counter++ ){
        printf("%5d", a[counter]);
    }

    puts("\n");
}

// cok amacli kabarcik siralama ; compare parametresi siralama seklini belirleyen
// karsilastirma fonksiyonuna isaret eden isaretcidir
void bubble( int work[], size_t size, int (*compare)( int a, int b )){
    unsigned int pass;
    size_t count;

    void swap( int *element1Ptr, int *element2Ptr ); //prototip

    //pass gecisleri kontrol eden dongu
    for( pass=1 ; pass <= size ; pass++){
        //her pass gecisi icin karsilastirma numarasini kontrol eden dongu
        for( count = 0 ; count < size ; count++){
            // bitisik elemanlar siralamaya uymuyor ise yerlerini degistir
            if( (*compare)(work[  count], work[ count + 1 ])){
                swap( &work[ count ], &work[ count +1 ]);
            }
        }
    }
}

// element1Ptr ve element2Ptr nin isaret ettkleri bellek bolgelerindeki degerleri degistir
void swap( int *element1Ptr, int *element2Ptr ){
    int hold; // temp

    hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

//elemanlari artan siralamaya gore  siraya uygun olup olmadigini belirle
int ascending( int a, int b ){
    return b < a;  // b a dan kucukse yerleri degismeli
}
//elemanlari azalan siralama sekline gore siraya uygun olup olmadigini belirle
int descending( int a, int b ){
    return b > a; // b a dan buyukse yerleri degismeli
}
