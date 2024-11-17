#include<stdio.h>

int main(void){
    char s[100],r[100];
    scanf("%s",s);

    int r_i=0;

    for(int i=0;s[i]!='\0';i++){
        _Bool dup=0;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                dup=1;
            }
        }
        if(!dup){
            r[r_i++]=s[i];
        }
    }
    r[r_i]='\0';
    printf("%s\n",r);
    return 0;
}