#include<stdio.h>
int main(){
    int arr[5][5];
    int a,b;
    

    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if (arr[i][j]==1){  
                a=i;
                b=j;
            }
        }
        }



    printf("%d",6-(a+b));
    return 0;
}