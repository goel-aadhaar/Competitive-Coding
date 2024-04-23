#include<iostream>
using namespace std;
vector<vector<int>> matrixMultiplication(vector<vector<int>>&A,vector<vector<int>>&B){
    int m=A.size(),n=A[0].size(),p=B.size(),q=B[0].size();
    vector<vector<int>>C(m,q,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return C;
}
vector<vector<int>> power(vector<vector<int>>V, int n){
    vector<vector<int>identity(V.size(),V[0].size());
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[0].size();j++){
            if(i==j)identity[i][j]=1;
            else identity[i][j]=0;
        }
    }
    if(n==0)return identity;
    if(n==1)return V;
    if(n&1)return matrixMultiplication(power(V,n/2),power(V,n/2 + 1));
    else return matrixMultiplication(power(V,n/2),power(V,n/2));
}
int fibo(int n){
    vector<vector<int>>V(2,2);
    
}
int main()
{
    cout<<"Enter size of first matrix"<<endl;
    int m,n;
    cin>>m>>n;
    vector<vector<int>>A(m,n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter size of first matrix"<<endl;
    int p,q;
    cin>>p>>q;
    vector<vector<int>>B(p,q);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>B[i][j];
        }
    }
    cout<<matrixMultiplication(A,B);

    return 0;
}