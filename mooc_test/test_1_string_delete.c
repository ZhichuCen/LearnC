// #include<stdio.h>
// #include<stdlib.h>
// int main(void){
//     int n;
//     char garbage;
//     scanf("%d%c", &n,&garbage);

//     char **out=calloc(n,sizeof(char));
//     for(int i=0;i<n;i++){
//         out[i]=calloc(100, sizeof(char));
//     }

//     // char out[n][100];


    
//     for(int i=0;i<n;i++){
//         char temp;
//         int index=0;
//         while((temp = getchar()) != '\n'){
//             if(temp!='A'&&temp!='E'&&temp!='I'&&temp!='O'&&temp!='U'&&temp!='a'&&temp!='e'&&temp!='i'&&temp!='o'&&temp!='u'){
//                 out[i][index++]=temp;
//             }
//         }
//         // putchar('\n');
//         out[i][index++]='\n';
//         out[i][index++]='\0';
//         out[i][index++]='\0';
//     }


//     for(int i=0;i<n;i++){
//         printf("%s",out[i]);
//     }

// }


#include <stdio.h>
int yuanyin(char c)
{
    return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(void)
{
    int n;
    char str[1000];
    scanf("%d",&n);
    getchar();

    for (int i=0;i<n;i++)
    {
        fgets(str, sizeof(str), stdin);
        for (int j = 0; str[j] != '\0'; j++) {
            if (!yuanyin(str[j])) {
                putchar(str[j]);
            }
        }
    }


    return 0;

}