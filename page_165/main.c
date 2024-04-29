#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maksimum(int x,int y,int z); //fonksiyon bildirlimi
int max_square(int);


int main(void)
{

    int number1,number2,number3;
    int ret_val=0;

    printf("%s","Please enter three integers: ");
    scanf("%d%d%d",&number1,&number2,&number3);
    //gets(number1,number2,number3);

    printf("Maximum is :%d \n",maksimum(number1,number2,number3));
    ret_val = maksimum(number1,number2,number3);
    printf("Max element's square is : %d",max_square(ret_val));
    return 0;
}

int maksimum(int x,int y,int z)
{
    int max=x;
    if(y>max)
    {
        max=y;
    }
    if(z>max)
    {
        max=z;
    }

    return max;
}

int max_square(int x){
    return pow(x,2);
}

