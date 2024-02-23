#include<stdio.h>
int main(){
    int n,count ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<n;i++){
        count =0;
        for(int j=1;j<=i;j++){
            if (arr[i]%j==0) count++;
        }
        if (count==3) {
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}