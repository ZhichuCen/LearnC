#include<stdio.h>

char * pound(char *ch,int n);
int main(void){
	char ch[20];
	printf("__________\b\b\b\b\b_%s\n",pound(ch,3));
	return 0;

}

char *pound(char *x,int n){
	int l=n;
	while (n-->=0)
		*(x+n)='#';
	*(x+l)='\0';
	return x;
}
