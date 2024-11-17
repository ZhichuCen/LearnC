#include <stdio.h>
char t[81];
_Bool whether_in_t(char chr)
{
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (t[i] == chr)
        {
            // t[i]=-1;
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char s[81], u[81];
    // scanf("%s%s", s, t);
    char temp;

    int s_i=0,t_i=0;

    while((temp=getchar())!='\n'){
        s[s_i++]=temp;
    }
    s[s_i]='\0';
    while((temp=getchar())!='\n'){
        t[t_i++]=temp;
    }
    t[t_i]='\0';

    // printf("%d\n%d\n",my_str_len(s),my_str_len(t));
    int u_index = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!whether_in_t(s[i]))
        {
            u[u_index++] = s[i];
        }
    }
    u[u_index] = '\0';

    printf("%s\n", u);
    return 0;
}