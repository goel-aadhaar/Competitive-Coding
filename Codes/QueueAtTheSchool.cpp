#include<stdio.h>
#include<string.h>
int main(){
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    char str[n];

    char buff;
    scanf("%c",&buff);
    scanf("%[^\n]s",str);
char temp;
    for(int j=0;j<t;j++){
        for(int i=0;i<n;i=i+1){
        
            if(str[i]=='B' && str[i+1]=='G'){
                str[i+1]='B';
                str[i]='G';
                i++;
            }
            else{
                continue;
            }
        }
    }
    for(int k=0;k<n;k++){
        printf("%c",str[k]);
    }
    
    return 0;
}