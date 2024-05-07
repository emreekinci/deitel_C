#include <stdio.h>
//degisken uzunluklu dizilerin kullanilmasi


//fonksiyon tanimlamalari
void print1Darray( int size, int arr[ size ]);
void print2DArray( int row, int col, int arr[row][col]);

int main(void)
{
    int arraysize; //bir boyutlu dizinin uzunlugu
    int row1, col1, row2, col2; //iki boyutlu dizinin satir ve sutun sayilari

    printf("%s","Tek boyutlu bir dizi uzunlugu giriniz: ");
    scanf("%d",&arraysize);

    printf("%s","Ikı boyutlu bir dizi icin satir ve sutun sayilari giriniz: ");
    scanf("%d%d",&row1,&col1);

    printf("%s",
    "Ikı boyutlu baska bir dizi icin satir ve sutun sayisi giriniz: ");
    scanf("%d%d",&row2,&col2);

    int array[arraysize]; //tek boyutlu degisken uzunluklu dizi tanimlamasi
    int array2D1[row1][col1]; //iki boyutlu degisken uzunluklu dizi tanimlamasi
    int array2D2[row2][col2];

    // degisken uzunluklu dizilerde sizeof operatorunun test edilmesi
    printf("\nsizeof ile dizi uzunlugu %d byte'tir\n",
           sizeof(array));
    //tek boyutlu diziye elemaen atanmasi
    for(int i=0 ; i<arraysize; i++){
        array[i] = i*i;
    }

    //iki boyutlu diziye eleman atanmasi
    for(int i=0 ; i<row1;i++){
        for(int j=0; j<col1; j++){
            array2D1[i][j] = i + j;
        }
    }
    //ikinci iki boyutlu diziye eleman atanmasi
    for(int i=0 ; i<row2 ; i++){
        for(int j=0 ; j<col2 ;j++){
            array2D2[i][j] = i + j;
        }
    }

    puts("\nTek boyutlu dizi: ");
    print1Darray( arraysize, array ); //tek boyutlu degisken uzunluklu dizinin gecirilmesi

    puts("\nIlk iki boyutlu dizi: ");
    print2Darray( row1, col1, array2D1); //fonksiyona ilk iki boyutlu dizinin gecirilmesi

    puts("\nIkinci iki boyutlu dizi: ");
    print2Darray( row2, col2, array2D2); //fonksiyona ikinci iki boyutlu dizinin gecirilmesi
}//main sonu

void print1Darray( int size, int array[size]){
    //dizi iceriginin yazdirilmasi
    for( int i = 0 ; i<size ; i++){
        printf("array[%d]: %d \n",i, array[i]);
    }
}//sonu

void print2Darray(int row, int col, int arr[row][col]){
    //diziiceriginin yazdirilmasi
    for(int i=0 ; i<row ;i++){
        for(int j= 0 ; j<col ; j++){
            printf("%5d",arr[i][j]);
        }
        puts( "" );// \n yerine gecer
    }
}
