#include<stdio.h>
#include<math.h>

int my_str_len(char *chr){
    int len=0;
    while(*(chr++)!='\0'){
        len++;
    }
    return len;
}

// void append_number_too

int main(void){
    char raw_char[100];
    char compressed_char[100];
    int raw_index=0,compressed_index=0;
    scanf("%s",raw_char);

    int len=my_str_len(raw_char);

    char duplicated_char;
    int duplicated_count;
    int digits_count=0;

    while(raw_index<len){
        if(raw_char[raw_index]!=raw_char[raw_index+1]){
            compressed_char[compressed_index++]=raw_char[raw_index++];
        }else{
            duplicated_count=1;
            duplicated_char=raw_char[raw_index];

            while(raw_char[++raw_index]==duplicated_char){
                duplicated_count++;
            }
            digits_count=(int)log10f(duplicated_count)+1;
            for(int i=0;i<digits_count;i++){
                compressed_char[compressed_index++]=duplicated_count%10+0x30;
                duplicated_count/=10;
            }
            compressed_char[compressed_index++]=duplicated_char;
        }
    }
    compressed_char[compressed_index]='\0';
    printf("%s\n",compressed_char);
    
}