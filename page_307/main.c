#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

//prototipler
void shuffle( unsigned int wDeck[][FACES]);
void deal( unsigned int wDeck[][FACES], const char *wFace[],
           const char *wSuit[]); // dagitmak diziler uzerinde degisiklik yapmaz

int main(void)
{
    //suit dizisini yukle
    const char *suit[SUITS] =
    {"Hearts","Diamonds","Clubs","Spades"};

    //face dizisini yukle
    const char *face[FACES] =
    {
        "Ace","Deuce","Three","Four",
        "Five","Six","Seven","Eight",
        "Nine","Ten","Jack","Queen","King",
    };

    //deck dizisini yukle
    unsigned int deck[ SUITS ][ FACES ] = { 0 };

    srand( time(NULL) ); // rastgele sayi ureticisi

    shuffle( deck ); //desteyi karistir
    deal( deck, face, suit ); //desteyi dagit
}

// deck icerisindeki kartlari karistir

void shuffle( unsigned int wDeck[][ FACES ])
{
    size_t row; //satir numarasi
    size_t column; //sutun numarasi
    size_t card; //sayac

    //kartlarin her biri icin deck yuvasini rastgele sec
    for( card = 1 ; card <= CARDS ; ++card)
    {
        //kullanilan yuva bulunana kadar rastgele olarak yeni bir yer sec
        do
        {
            row = rand() % SUITS;
            column = rand() % FACES;
        }
        while( wDeck[ row ][ column ] != 0);
        //secilen wDeck yuvasi icerisine kart numarasini yerlestir
        wDeck[ row ][ column ] = card;
    }
}
void deal( unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[] )
{
    size_t card; //kart sayisi
    size_t row; //sutun sayisi
    size_t column; //satir sayisi

    //kartlarin herbirini dagit
    for(card=1 ; card <= CARDS ; card++ )
    {
        //wDeck satirlari boyunca dongu olustur
        for(row=0 ; row < SUITS ; row++)
        {
            //gecerli satir icin wDeck sutunlari boyunca dongu olustur
            for( column = 0 ; column < FACES ; column++)
            {
                //eger slot gecerli karti iceriyorsa
                if( wDeck[row][column] == card )
                {
                    printf("%5s of %-8s%c", wFace[ column ], wSuit[ row ], card % 2 == 0 ? '\n' : '\t'); // 2 sutun bicimi
                }
            }
        }
    }
}


