#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        long long x,sum=0;
        cin>>n>>x;
        vector<long long>v(n);
        long long min=0,max=0;
        for(int j=0;j<n;j++){
            cin>>v[j];
            sum+=v[j];
        }
        if(sum%x==0){min=sum/x;}
        else {min=sum/x+1;}
        for(int j=0;j<n;j++){
            if(v[j]%x==0)max+=v[j]/x;
            else max+=v[j]/x + 1;
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
