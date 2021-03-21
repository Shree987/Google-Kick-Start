/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,T,n,k,i;
    string s;
    cin>>T;
    for(t=1; t<=T; t++){
        cin>>n>>k>>s;
        i = 0;
        n--; 
        while(i<n){
            if(s[i] != s[n])    k--;
            i++;
            n--;
        }
        cout<<"Case #"<<t<<": "<<abs(k)<<"\n";
    }
    return 0;
}