#include <stdio.h>
#include <stdlib.h>
// Sayfa 159
//swıtch case yapilari ile harf notu hesabı
int main(void)
{
    int grade;
    unsigned int aCount = 0; // A larin sayisi
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades." );
    puts("Enter the EOF character to end input." );

    //Kullanici dosya sonu anahtar dizesi girene kadar don
    while ((grade = getchar()) != EOF) // EOF tasinabilirligi artiran temsili semboldur sistemden sisteme degisen degerler icin kullanilir..
    {
        //Hangi notun girildigine karar ver
        switch(grade)
        {
        case 'A' : //not buyuk A
        case 'a' : //veay kucuk a
            ++aCount;
            break; //switch ten cik
        case 'B' : //not buyuk B
        case 'b' : //veay kucuk b
            ++bCount;
            break;
        case 'C' : //not buyuk C
        case 'c' : //veay kucuk c
            ++cCount;
            break;
        case 'D' : //not buyuk D
        case 'd' : //veay kucuk d
            ++dCount;
            break;
        case 'F' : //not buyuk F
        case 'f' : //veay kucuk f
            ++fCount;
            break;
        case '\t':
        case '\n':
        case ' ':
            break;

        default: // diger tum karakterleri yakala
            printf("%s","Incorrect letter grade entered.");
            puts("Enter a new grade." );
            break; //istege bagli her halukarda switchten cıkacak
        }
    }
    //ctrl + z   *******
    //Sonuclarin ozet ciktisi
    printf("\n Totals for each letter grade are:" );
    printf("A: %u\n",aCount);
    printf("B: %u\n",bCount);
    printf("C: %u\n",cCount);
    printf("D: %u\n",dCount);
    printf("F: %u\n",fCount);


/*    #include <stdio.h>
     count digits, white space, others
main ()
{
  int c, i, nwhite, nother;
  int ndigit[10];
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;
  while ((c = getchar ()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  printf ("digits =");
  for (i = 0; i < 10; ++i)
    printf (" %d", ndigit[i]);
  printf (", white space = %d, other = %d\n", nwhite, nother);
}
*/
    return 0;
}
