#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    bool flag =true;
    int count=0;
for(int k=0;k<n;k++){
    for(int i=2;i<=n;i++){
        flag=true;
        for(int j=2;j<i;j++){
            if(i%j==0) {
                flag=false; 
                break;
            }
        }
        if(flag==true) {
            arr[k]=i;
             count++;
        }
    }
}
    
    for(int i =0;i<count;i++){
        printf("%d ",arr[i]);
    }
    
    
    
    
        // for(int j=0;j<count;j++){
        //     if (n%arr[j]==0) {
        //         printf("%d",arr[j]);
        //         n/=arr[j];
        //     }
        // }
    
    return 0;
}