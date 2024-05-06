#include<iostream>
using namespace std;
int minDistance(string word1, string word2) {
        int numOpr=0;
        if((word1.length()-word2.length())>0){
            numOpr=word1.length()-word2.length();
        }
        else{
            numOpr=-(word1.length()-word2.length());
        }
        // numOpr=abs(word1.length()-word2.length());
        int count=0;
        int i=0,j=0;
        int pt=0;
        for(int i=0;i<word2.length();i++){
            j=pt;
            while(j<word1.length()){
                if(word2[i]==word1[j]){
                    cout<<word2[i]<<" ";
                    count++;
                    break;
                    pt=j;
                }
                else {
                    j++;
                }
            }
        }

        // while(i<word1.length() && j<word2.length()){
        //     if(word1[i]==word2[j]){
        //         count++;
        //         i++;
        //         j++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        int ans=numOpr+(word2.length()-count);
        return ans;
    }
int main()
{
    string s,str;
    cin>>s>>str;
    cout<<minDistance(s,str);
    return 0;
}