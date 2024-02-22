#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    scanf("%d",&n);

    char str[n];
    // gets(str);
    for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
    }

    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            for(int j=i+1;j<n;j++){
                str[j]=str[j+1];
                
            }
            i++;
            count++;
        }
        
        else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}