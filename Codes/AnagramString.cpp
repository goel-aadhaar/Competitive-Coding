#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 

int main(){
    string s;
    cin>>s;
        if(s.length()==1)return 1;
        else if(s.length() & 1)return s.length();
        vector<int>v(26,0);int i=0;
        while(i<s.length()){
            v[s[i]-97]++;
            i++;
        }
        for(i,26){
            cout<<v[i]<<endl;
        }
        int min=s.length();
        for(i,26){
            if(v[i]!=0){
                if(min>v[i])min=v[i];
            }
        }
        cout<<s.length()/min;
return 0;
}