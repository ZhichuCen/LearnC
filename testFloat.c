/*testing how float works*/
#include<stdio.h>
int main(void){
    long double a = 123.456789e10L;
    printf("this is deximal: %LF \n this is exponential %Le \n and this is hexadecimal %La \n more,this is p: ",a,a,a);
    return 0;
}

