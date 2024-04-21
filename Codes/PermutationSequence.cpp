#include<bits/stdc++.h>
using namespace std;
void generate(vector<string>&s,string str,int n,int index){
    if(str.length()==n){
        s.push_back(str);
        index=1;
        return;
    }

    for(int i=index;i<=n;i++){
        generate(s,str+to_string(i),n,index+1);
    }
    }

int main()
{
    int n,k;
    cin>>n>>k;
    vector<string>s;
    generate(s,"",n,1);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}