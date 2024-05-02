#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        if(isPrime(n)){
            cout<<n-1<<endl;
            continue;
        }
        else if(n%2==0){
            cout<<n/2<<endl;
            continue;
        }
        else {
            int num;
            for(int i=3;i<n;i++){
                if(n%i==0){
                    num=n-i;
                    cout<<num<<endl;
                    break;
                }
            }
        }
        
        
    }
    return 0;
} 