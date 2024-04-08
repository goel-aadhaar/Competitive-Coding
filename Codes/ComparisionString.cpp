#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count=1;
        int max_count=1;
        for(int j=0;j<n-1;j++){
            if(str[j]==str[j+1])count++;
            else {
                if(max_count<count){max_count=count;}
                count=1;
            }
        }
        if(max_count<count){max_count=count;}
        cout<<max_count+1<<endl;
    }
    return 0;
}