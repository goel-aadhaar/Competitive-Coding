// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<string> vs;
// typedef vector<char> vc;
// #define pb push_back
// #define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
// #define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
// void solve(){
//     int n,c;
//     cin>>n>>c;
//     vector<ll>v(n);
//     for(i,n){
//         cin>>v[i];
//     }
//     // for(i,n){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<endl;
//     for(i,n){
//         v[i]+=i+1;
//     }
//     // for(i,n){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<endl;
    
//     sort(v.begin(),v.end());
//     ll sum=0;
//     int count=0;
//     for(i,n){
//         sum+=v[i];
//         if(sum>c){
//             cout<<i<<endl;
//             return;
//         }
//     }
//     cout<<n<<endl;
// }
// int main(){
//     int T;
//     cin>>T;
//     while(T--){

//         solve();
//     }
// return 0;
// }
