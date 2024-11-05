#include<stdio.h>

void debug_show_cards(char cards[3][4]){
    printf("1st:%s | 2nd:%s | 3rd:%s \n",cards[0],cards[1],cards[2]);
}

void swap_cards(char c1[4],char c2[4]){
    char temp[4];
    for(int i=0;i<4;i++){
        temp[i]=c1[i];
    }
    for(int i=0;i<4;i++){
        c1[i]=c2[i];
    }
    for(int i=0;i<4;i++){
        c2[i]=temp[i];
    }
}

_Bool compare_suits(char a,char b){

}

void sort_cards(char cards[3][4]){
    for(int i=0;i<3;i++){

    }
}

int main(void){
    char a[3][4];
    char b[3][4];

    /*
    char a1[4];
    char a2[4];
    char a3[4];
    char b1[4];
    char b2[4];
    char b3[4];*/

    scanf("%s %s %s %s %s %s",a[0],a[1],a[2],b[0],b[1],b[2]);

    char suit_a_1 =a1[0];
    printf("%c",suit)
    
    debug_show_cards(a);
    debug_show_cards(b);


    


}