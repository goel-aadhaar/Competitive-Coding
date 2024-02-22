// #include<stdio.h>

// int main(){
//     int n,sumTime,sum=0,num,tsum=0;
//     scanf("%d %d",&n,&sumTime);
//     int arr[n][2];
    
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i][0]);
//         scanf("%d",&arr[i][1]);
//     }
    
//     for(int i=0;i<n;i++){
//         sum =sum+arr[i][1];
//     }
//     if(sum<sumTime){
//         printf("NO");
//         return 0;
//     }
//     else{
//         printf("YES\n");
//     }
    
//     for(int i=0;i<n-1;i++){
    
//         num=arr[i][1];
//         for(int i=0;i<n;i++){
//         sum =sum+arr[i][1];
//         }
//         if(sum<sumTime){
//             num=arr[i][0];
        
//         }
//         tsum=tsum+num;
//         printf("%d ",num);
//     }
//     arr[n-1][1]=sumTime-tsum;
//     printf("%d",arr[n-1][1]);
    
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,n,time;
    ll a[35],b[35];
    while(cin>>n>>time){
         ll min_time=0,max_time=0,sum_time=0;
         vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
            min_time+=a[i];
            max_time+=b[i];
            v.push_back(a[i]);
            sum_time+=a[i];
        }
        if(min_time<=time && time<=max_time){
            cout<<"YES\n";
            if(sum_time<time){
            for(i=0;i<n;i++){
                    ll df=b[i]-a[i];
                    j=1;
                while(j<=df){
                        if(sum_time==time)
                        break;
                    sum_time++;
                    v[i]++;
                    j++;
                }
            }
        }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO\n";
}
    return 0;
}