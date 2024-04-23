#include<iostream>
#include<vector>
using namespace std;
int maximumLengthSubstring(string s) {
        int maxLength=0;
        int count=0;
        vector<int>v(26,0);
        int pt=0;
        for(int i=0;i<s.length();i++){
            if(v[s[i]-97]==2){
                pt=i;
                maxLength=max(count,maxLength);
                count=0;
                for(int j=0;j<26;j++){
                    v[j]=0;
                }
                i-=1;
            }
            else{
                v[s[i]-97]++;
                count++;
                // cout<<count<<endl;
            }
        }
        bool flag=true;
        for(int i=0;i<26;i++){
            if(v[i]>=2){
                flag=false;
                break;
            }
        }
        if(flag==false)return s.length()-pt;
        maxLength=max(count,maxLength);
        return maxLength;
    }
int main()
{
    string s;
    cin>>s;
    cout<<maximumLengthSubstring(s);
    return 0;
}