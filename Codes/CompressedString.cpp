#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
        string str="";
        int count=1;
        sort(chars.begin(),chars.end());
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1])count++;
            else{
                str+=chars[i];
                if(count!=1){
                    str+=to_string(count);
            }
                count=1;
            }
        }
        str+=chars[chars.size()-1];
        if(count!=1){
            str+=to_string(count);
        }
        for(int i=0;i<str.length();i++){
            chars[i]=str[i];
        }
        for(int i=0;i<str.length();i++){
            cout<<chars[i];
        }
        return str.length();
    }
int main()
{
    int n;cin>>n;
    vector<char>chars(n);
    // cin>>chars;
    for(int i=0;i<n;i++){
        cin>>chars[i];
    }
    cout<<compress(chars);
    return 0;
}