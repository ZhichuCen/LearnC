#include<stdio.h>

int main(void){
    int x,y,z;
    for(x=1;x<=100;x++){
        for(y=1;y<=100;y++){
            for(z=1;z<=100;z++){
                if( (0.4*x + 4*y +0.2*z==40.0)&&(x+y+z==100)){
                    printf("x=%d,y=%d,z=%d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}