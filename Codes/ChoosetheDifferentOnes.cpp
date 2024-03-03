#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        int brr[m];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int j=0;j<m;j++){
            cin>>brr[j];
        }
        int countn=0;
        int countm=0;
        for(int s=1;s<=k;s++){
            for(int p=0;p<n;p++){
                if(arr[p]==s){
                    countn++;
                    break;
                }
                else if(p==(n-1) && countn<3){
                    countn=0;
                    break;
                }
            }
            for(int p=0;p<m;p++){
                if(brr[p]==s){
                    countm++;
                    break;
                }
                else if(p==(m-1) && countm<3){
                    countm=0;
                    break;
                }
            }
            
        }
        if (countn>=k/2 && countm>=k/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}