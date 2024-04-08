
#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        int ch=97;int count=0;
        for(int j=0;j<n;j++){
            cout<<(char)ch;
            ch++;
            count++;
            if(count==b){
                ch=97;
                count=0;
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}