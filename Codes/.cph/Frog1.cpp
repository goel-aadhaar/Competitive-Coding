#include<bits/stdc++.h>
using namespace std;
void helper(vector<int> &dp , vector<int> &v , int n , int curr , int &mn , vector<int> h){
  if(curr == n){
    h.push_back(v[curr]);
    int sum = 0;
    for(int i = 0; i < h.size() - 1; i++){
      sum = (h[i] - h[i + 1]);
    }
    mn = min(mn , sum);
    return;
  } 
  helper(dp , v , n , curr + 1 , mn , h);
  h.push_back(v[curr]);
  helper(dp , v , n , curr + 1 , mn , h);
}
int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0 ; i < n ; i ++){
    cin >> v[i];
  }
  vector<int> dp , h;
  int mn = 0;
  helper(dp , v , n , 0 , mn , h);
  cout << mn;
}