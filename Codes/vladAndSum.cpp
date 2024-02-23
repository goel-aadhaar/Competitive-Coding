#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        string x = str[i];
        for(int k=0;k<stoi(x);k++){
            string y=to_string(k);
            for(int j=0;j<y.size();j++){
                sum+=accumulate(y.begin(),y.end(),0);
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}