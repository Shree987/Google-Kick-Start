/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N,t,K,i,cnt,end,diff;
    vector<pair<int,int>> vp;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>N>>K;
        cnt = end = 0;
        vp.resize(N);
        for(i=0;i<N;i++){
            cin>>vp[i].first>>vp[i].second;
        }
        sort(vp.begin(),vp.end());
        for(i=0;i<N;i++){
            end = max(end, vp[i].first);
            if(end>=vp[i].second)   continue;
            else{
                diff = vp[i].second - end;
                if(diff % K == 0){
                    cnt+=diff/K;
                    end = vp[i].second;
                }
                else{
                    cnt+=(diff/K)+1;
                    end = end + K*((diff/K) + 1);
                }
            }
        }
        cout<<"Case #"<<t<<": "<<cnt<<"\n";
    }
    return 0;
}