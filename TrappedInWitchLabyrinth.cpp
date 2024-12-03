#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            if(i == 0 && v[i][j] == 'U') v[i][j] = 'X';
            else if(j == 0 && v[i][j] == 'L') v[i][j] = 'X';
            else if(i == n - 1 && v[i][j] == 'D') v[i][j] = 'X';
            else if(j == m - 1 && v[i][j] == 'R') v[i][j] = 'X';
        }
    }
    queue<pair<int , int>> q;
    vector<vector<int>> dir = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};
    vector<vector<int>> isVisited(n , vector<int> (m , 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            if(v[i][j] == 'X') q.push({i , j});
        }
    }
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        v[curr.first][curr.second] = 'X';
        if(isVisited[curr.first][curr.second]) continue;
        isVisited[curr.first][curr.second] = 1;
        for(int i = 0; i < 4; i ++){
            int nr = curr.first + dir[i][0];
            int nc = curr.second + dir[i][1];
            if(nr < 0 || nc < 0 || nr >= n || nc >= m || isVisited[nr][nc] || v[nr][nc] == 'X') continue;
            else if(dir[i][0] == 1 && v[nr][nc] == 'U') q.push({nr , nc});
            else if(dir[i][0] == -1 && v[nr][nc] == 'D') q.push({nr , nc});
            else if(dir[i][1] == 1 && v[nr][nc] == 'L') q.push({nr , nc});
            else if(dir[i][1] == -1 && v[nr][nc] == 'R') q.push({nr , nc});
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            if(v[i][j] == '?'){
                if((i <= 0 || (i > 0 && v[i - 1][j] == 'X')) && (j <= 0 || (j > 0 && v[i][j - 1] == 'X')) && (i >= n - 1 || (i < n - 1 && v[i + 1][j] == 'X')) && (j >= m - 1 || (j < m - 1 && v[i][j + 1] == 'X'))) v[i][j] = 'X';
            }
            if(v[i][j] == 'X') cnt++;
            // cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << n * m - cnt << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    