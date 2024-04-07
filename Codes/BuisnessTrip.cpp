#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<12;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    int sum=0,count=0;
    for(int i=0;i<12;i++){
        if(sum>=t)break;
        sum+=v[i];
        count++;
    }
    if(sum<t){
        cout<<-1;
        return 0;
    }
    cout<<count;
    
    return 0;
}
