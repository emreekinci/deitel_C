#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    c=5;

    printf("%d\n",c);//5
    printf("%d\n",++c); //6
    printf("%d\n",c++); //6  7
    printf("%d\n",c);//7

    return 0;
}
