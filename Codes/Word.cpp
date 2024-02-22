#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count1=0,count2=0;

    gets(str);

    for(int i=0;i<strlen(str);i++){
        if(str[i] >= 65 && str[i]<=90){
            count1++;
        }
        else if(str[i]>=97 && str[i]<=122){
            count2++;
        }
    }

    if(count2>=count1){
        for(int i=0;i<strlen(str);i++){
            if(str[i]>=97 && str[i]<=122){
            continue;
            }
            else{
                str[i]=str[i]+32;
            }
        }
    }

    else if(count1>count2){
        for(int i=0;i<strlen(str);i++){
            if(str[i]>=65 && str[i]<=90){
            continue;
            }
            else{
                str[i]=str[i]-32;
            }
        }
    }

    puts(str);

    
    return 0;
}