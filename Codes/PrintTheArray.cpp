#include<bits/stdc++.h>
using namespace std;
long long hcf(long long a, long long b) {
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}
bool check(long long num,vector<long long>&v){
    bool flag=true;
    for(int i=0;i<v.size();i++){
        if(v[i]%num==0)return false;
    }
    return true;
}
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;long long arr[n];vector<long long>f;vector<long long>s;
            
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(j&1)s.push_back(arr[j]);
            else f.push_back(arr[j]);
        }
        long long hcf_f;
        long long hcf_s;
        if(f.size()>1){
            hcf_f=hcf(f[0],f[1]);
        }
        else {
            hcf_f=f[0];
        }
        if(s.size()>1){
            hcf_s=hcf(s[0],s[1]);
        }
        else {
            hcf_s=s[0];
        }
        
        for(int j=0;j<f.size();j++){
            hcf_f=hcf(f[j],hcf_f);
        }
        for(int j=0;j<s.size();j++){
            hcf_s=hcf(s[j],hcf_s);
        }

        if(check(hcf_s,f))cout<<hcf_s<<endl;
        else if (check(hcf_f,s))cout<<hcf_f<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
