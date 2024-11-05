#include<stdio.h>
#include<math.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    if (a > b)
        return gcd(b, a % b);
    return gcd(a, b % a);
}

int main(void){

    int a,b,c,d;
    //int sb_i=0;//1+  2-  3*  4/
    char r;
    scanf("%d/%d %c %d/%d",&a,&b,&r,&c,&d);

    //printf("%da/%db %cr %dd/%d\n",a,b,r,c,d);


    int f=gcd(b,d);


    switch (r)
    {
    case '+':
        
        break;
    
    default:
        break;
    }

    return 0;
}