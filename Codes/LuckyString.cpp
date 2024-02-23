#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n];

    for(int i=0;i<n-1;i++){
        str[i]=i+97;
    }
    for(int j=1;j<=26;j++){
        if(((n-j) == 4) || ((n-j) ==7)){
            str[n-1]=j+96;
            break;
        }
    }
    puts(str);
    return 0;
}