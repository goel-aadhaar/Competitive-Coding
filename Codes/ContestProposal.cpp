#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v1(n);
        vector<long long>v2(n);
        long long count=0;
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];
        long long  i=0,j=0;
        while(i<n && j<n){
            if(v2[j]<v1[i]){
                count++;
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        cout<<count<<endl;
    }
        
    return 0;
}