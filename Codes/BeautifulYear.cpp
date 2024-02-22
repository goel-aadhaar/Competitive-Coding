#include<stdio.h>
int main(){
    int n;
    int arr[4];
    scanf("%d",&n);

    for(int a=n+1;a<=9000;a++){
        for(int i=0;i<4;i++){
        arr[i]=a%10;
        a/=10;
        }
        if((arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3]) && (arr[1]!=arr[2] && arr[1]!=arr[3]) && (arr[2]!=arr[3])){
            for(int j=3;j>=0;j--){
                printf("%d",arr[j]);
                }
                break;
        }
        }
    
    return 0;
}