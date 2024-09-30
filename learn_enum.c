#include<stdio.h>

enum State {SPIN,STILL} servo_mode=SPIN;

int main(void){
    ++servo_mode%=2;

    return 0;
}