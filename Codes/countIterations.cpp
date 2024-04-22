#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int count=1;
    // for(int i=1;i<=n;i++){
    //     if(count==3){

    //     }
    // }
    int mul=1,sum=0;
    for(int i=1;i<=(n/3) -1;i++){
        mul*=2;
        sum+=mul;
    }
    cout<<sum*3<<endl;
    sum+=(n%3)*pow(2,n/3);
    cout<<sum;
    return 0;
}