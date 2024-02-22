#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int arr[n][3];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=2;j++){
            if(j==0){
                sum1=sum1+arr[i][0];
            }
            if(j==1){
                sum2=sum2+arr[i][1];
            }
            if(j==2){
                sum3=sum3+arr[i][2];
            }
        }
    }
    if(sum1==0 && sum2==0 && sum3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}