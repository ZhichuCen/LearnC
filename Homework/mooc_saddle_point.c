#include <limits.h>
#include<stdio.h>

int main(void){
    int n,m;
    scanf("%d%d",&n,&m);

    int arr[n+1][m+1];

    for(int ni=0;ni<n;ni++){
        for(int mi=0;mi<m;mi++){
            scanf("%d",&arr[ni][mi]);
        }
    }

    for(int y=0;y<n;y++){
        arr[y][m]=INT_MIN;
        for(int x=0;x<m;x++){
            if(arr[y][x]>arr[y][m]){
                arr[y][m]=arr[y][x];
            }
        }
    }

    for(int x=0;x<m;x++){
        arr[n][x]=INT_MAX;
        for(int y=0;y<n;y++){
            if(arr[y][x]<arr[n][x]){
                arr[n][x]=arr[y][x];
            }
        }
    }

    _Bool have_saddle=0;
    for(int y=0;y<n;y++){
        for(int x=0;x<m;x++){
            if((arr[y][x]==arr[y][m])&&(arr[y][x]==arr[n][x])){
                printf("Point:a[%d][%d]==%d\n",y,x,arr[y][x]);
                have_saddle=1;
            }
        }
    }

    if(!have_saddle){
        printf("No Point\n");
    }



}