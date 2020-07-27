/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,T,i,m,n;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;
        m=0;
        int dp[n];
        cin>>dp[0]>>dp[1];
        for(i=2;i<n;i++){
            cin>>dp[i];
            if(dp[i-1]>dp[i-2] && dp[i]<dp[i-1])    m++;
        }
        cout<<"Case #"<<t<<": "<< m <<"\n";
    }
    return 0;
}
