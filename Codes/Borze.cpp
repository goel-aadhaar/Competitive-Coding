#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    gets(str);
    int len =strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]=='.'){
            printf("%d",0);
        }
        else if(str[i]=='-' && str[i+1]=='.'){
            printf("%d",1);
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            printf("%d",2);
            i++;
        }
        
    }
    return 0;
}