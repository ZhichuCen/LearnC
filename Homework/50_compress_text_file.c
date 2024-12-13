#include <stdio.h>
#include <string.h>


int pow10(int n){
    int result=1;
    for(int i=0;i<n;i++){
        result*=10;
    }
    return result;
}

int len_of_num(int n){
    int len=0;
    for(;!(pow10(len)<=n && pow10(len+1)>n);len++)
        ;
    return len+1;
}

_Bool is_alphabet(char c){
    _Bool yes=0;
    if(c>='a'&&c<='z'){
        yes=1;
    }
    if(c>='A'&&c<='Z'){
        yes=1;
    }
    return yes;
}

int main(void){

    // ungetc(EOF,stdin);
    // ungetc(EOF,stdin);
    // const char debug[]="abc,abc,kfc,mdl,kfc,\n";
    // for(int i=strlen(debug)-1;i>=0;i--){
    //     ungetc(debug[i],stdin);
    // }

    // printf("t%d\n",len_of_num(1));

    int c;
    char buff[80]={0};
    char dict[10000][80]={0};
    char output[100000]={0};
    int out_index=0;
    int dict_index=0;
    int buff_index=0;
    _Bool in_word=0;
    while((c=getchar())!=EOF)
    {
        if(is_alphabet(c)){
            in_word=1;
            buff[buff_index++]=c;
        }else{
            if(in_word){
                in_word=0;

                buff[buff_index++]='\0';

                _Bool duplicated=0;
                int dup_index=-1;
                for(int i=0;i<dict_index;i++){
                    _Bool identical=1;
                    for(int j=0;j<buff_index;j++){
                        if(buff[j]!=dict[i][j]){
                            identical=0;
                        }
                    }
                    if(identical){
                        duplicated=1;
                        dup_index=i;
                        break;
                    }
                }
                if(duplicated){
                    // putchar(dup_index+'1');

                    dup_index+=1;
                    for(int i=len_of_num(dup_index)-1;i>=0;i--){
                        int this_num=dup_index/(pow10(i));
                        output[out_index++]='0'+this_num;
                        dup_index%=pow10(i);
                    }

        
                    // output[out_index++]=dup_index+'1';
                }else{
                    for(int i=0;i<buff_index-1;i++){
                        // putchar(buff[i]);
                        output[out_index++]=buff[i];
                    }
                    memcpy(dict[dict_index++],buff,buff_index);
                }
                buff_index=0;

            }
            // putchar(c);
            output[out_index++]=c;
        }
    }

    for(int i=0;i<out_index;i++){
        putchar(output[i]);
    }
}