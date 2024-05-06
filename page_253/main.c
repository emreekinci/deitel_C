#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

//fonksiyon tanimlamalari
int minimum( int grades[][ EXAMS], size_t pupils, size_t tests);
int maximum( int grades[][EXAMS], size_t puppils, size_t tests);
double average( const int setOfGrades[], size_t tests);
void printArray( int grades[][EXAMS], size_t puppils, size_t tests);

int main(void)
{
    size_t student; // ogrenci sayaci

    // ogrencilerin notlarina baslangic degeri atanmasi
    int studentGrades[STUDENTS][EXAMS] = {
        { 77, 68, 86, 73},
        { 96, 87, 89, 78},
        { 70, 90, 86, 81} };
    puts("dizi:");
    printArray(studentGrades, STUDENTS, EXAMS);

    // en yuksek ve dusuk notlarin tespiti
    printf("\n\nEn dusuk not: %d\nEn yuksek not: %d\n",
    minimum(studentGrades, STUDENTS, EXAMS),
    maximum(studentGrades, STUDENTS, EXAMS));

    // her ogrencinin not ortalamasini hesaplama
    for(student=0 ; student < STUDENTS ;student++){
        printf("Ogrenci %u nin ortalama notu :%.2f\n",
               student,average(studentGrades[student], EXAMS));
    }
}

//en dusuk notun tespiti
int minimum( int grades[][EXAMS], size_t puppils, size_t tests){

    size_t i; //ogrenci sayaci
    size_t j; //sinav sayaci
    int lowGrade = 100; //en yuksek muhtemel notun deger olarak atanmasi

    // satirdaki notlar arasinda dolasan dongu
    for( i=0 ; i<puppils ; i++){
        //sutundaki notlar arasinda dolasan dongu
        for( j=0; j<tests ; j++){
            if( grades[i][j] < lowGrade ){
                lowGrade = grades[i][j]; //en yuksek notun bulunmasi
            }
        }
    }
    return lowGrade; // en dusuk notun bulunmasi
}
//en yuksek degerin tespit edilmesi
int maximum( int grades[][EXAMS], size_t puppils, size_t tests){
    // size_t : unsigned int
    size_t i; //ogremci sayaci
    size_t j; //sinav sayaci
    int highGrade = 0; //en dusuk muhtemel notun deger olarak atanmasi

    //satirdaki notlar arasinda dolasan dongu
    for( i=0 ; i<puppils ;i++){
        //sutundaki notlar arasinda dolasan dongu
        for( j=0 ;j<tests ; j++){
            if( grades[i][j] > highGrade)
                highGrade = grades[i][j]; // en yuksek notun bulunmasi
        }
    }
    return highGrade;
}

double average( const int setOfGrades[], size_t tests){
    size_t i; //sinav sayaci
    size_t total = 0;

    //bir ogrencinin tum notlarinin toplanmasi
    for( i=0 ; i<tests ;i++){
        total+=setOfGrades[i];
    }
    return (double)total / tests ;//ortalama o ankii elemanin
}

// Dizinin yzzdirilmasi
printArray( int grades[][EXAMS], size_t puppils, size_t tests){
    size_t i; // ogrenci sayaci
    size_t j; //sinav sayaci

    //sutun basliklarinin yazdirilmasi
    printf("%s","                 [0]   [1]   [2]   [3]");

    //notlarin cizelge biziminde yazdirilmasi
    for( i=0 ; i<puppils ;i++){

        //satir etiketlerinin yazdirilmasi
        printf("\nstudentGrades[%d] ", i);

        for( j=0 ; j<tests ; j++){
            //bir ogrencinin notlarinin yazdirilmasi
            printf("%-5d ",grades[i][j]);

        }
    }

}

