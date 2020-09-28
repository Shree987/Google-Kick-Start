/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N,X,t,a,i;
    vector<pair<long,long>> vp;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>N>>X;
        vp.resize(N);
        for(i=1;i<=N;i++){
            cin>>a;
            vp[i-1].second = i;
            vp[i-1].first = (a-1)/X;
        }
        sort(vp.begin(),vp.end());
        cout<<"Case #"<<t<<": ";
        for(i=0;i<N;i++){
        	cout<<vp[i].second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}