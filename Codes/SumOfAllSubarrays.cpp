#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    int count=0;
    count=n;
    for(int i=0;i<n;i++){
        count-=i;
        sum+=(v[i]*(n-i));
    }
    cout<<sum;
    return 0;
}
// 4+3*5+4*6+2*7     14+24+15+4
// 1 
// 1 3
// 1 3 4
// 1 3 4 2
// 3
// 3 4 
// 3 4 2 
// 4
// 4 2
// 2