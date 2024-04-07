#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int x;cin>>x; char str[x];
        for(int j=0;j<x;j++){
            char ch;cin>>ch;
            str[j]=ch;
        }
        int p=0;int q=1;int a,b;
        while(p<(x-2)){
            if(str[p]!=str[q])q++;
            else{
                a=p;b=q;
                p++;q++;
            }
        }
        cout<<b-a+1<<endl;
    }
    return 0;
}