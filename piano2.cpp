#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
const int mod=998244353,MAX=300005,INF=15<<26;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    set<int> SE;
    vector<int> X;
    for(int i=0;i<N;i++){
        int x;cin>>x;
        SE.insert(x);
        X.push_back(x);
    }
    for(int i=0;i<M;i++){
        int x;cin>>x;
        X.push_back(x);
    }
    sort(all(X));
    
    for(int i=0;i+1<si(X);i++){
        if(SE.count(X[i])&&SE.count(X[i+1])){
            cout<<"Yes\n";
            return 0;
        }
    }
    
    cout<<"No\n";
}

