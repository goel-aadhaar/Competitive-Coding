// #include<iostream>
// #include<string>
// using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      char arr[n];
//      for(int i=0;i<n;i++){
//          string str;
//          cin>>str;
//          int countA=0,countB=0;
//          for(int j=0;j<5;j++){
//              if(str[j]=='A') countA++;
//              if(str[j]=='B') countB++;
//          }
//          if(countA>countB){
//              arr[i]='A';
//          }
//          else{
//              arr[i]='B';
//          }
//      }
//      for(int k=0;k<n;k++){
//          cout<<arr[k]<<endl;
//      }
//      return 0;
//  }
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char str1[5];
	for(int i=0;i<n;i++){
	  for(int j=0;j<5;j++){
	  	scanf("%c",&str1[j]);
	  }
	int count1=0,count2=0;
	for(int k=0;k<5;k++){
		if(str1[k]=='A'){
			count1++;
		}
		if(str1[k]=='B'){
		count2++;
		}
	}
	if(count1>count2){
		printf("A\n");
	}
	else{
		printf("B\n");
	}
}
}