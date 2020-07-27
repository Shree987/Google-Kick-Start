/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,T,i,m,n;
    long long d,D,x;
    vector<long long> X;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n>>D;
        X.resize(n);
        for(i=0;i<n;i++){
            cin>>X[i];
        }
        d = D;
        i = n-1;
        while(i>-1){
            x = d%X[i];
            d-=x;
            i--;
        }
        cout<<"Case #"<<t<<": "<< d <<"\n";
    }
    return 0;
}
