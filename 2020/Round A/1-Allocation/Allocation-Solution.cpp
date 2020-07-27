/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,T,n,i,j;
    long long b;
    cin>>T;
    vector<int> v;
    for(t=1;t<=T;t++){
        cin>>n>>b;
        v.resize(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        i = 0;
        while(i<n && b>0){
            if(v[i]>b)  break;
            else{
                b-=v[i];
                i++;
            }
        }
        cout<<"Case #"<<t<<": "<<i<<"\n";
    }
    return 0;
}
