/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

int main()
{  int n,s, findf( int );
   scanf("%d", &n);
   s = findf(n);
   printf("%d\n", s);
   return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

int findf(int n){
    if(n<0){
        return -1;
    }else if(n<=4){
        return 1;
    }else if(n%2==0){
        return findf(n-1)+findf(n-3);
    }else if(n%2==1){
        return findf(n-2)+findf(n-4);
    }else{
        return -1;
    }
}
