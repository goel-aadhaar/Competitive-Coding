#include<bits/stdc++.h>
using namespace std;
void permutation(string original,string answer){
    if(original.length()==0){
        cout<<answer<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        permutation(original.substr(0,i)+original.substr(i+1),answer+ch);
    }
}
int main()
{
    string str;
    cin>>str;
    permutation(str,"");
    return 0;
}