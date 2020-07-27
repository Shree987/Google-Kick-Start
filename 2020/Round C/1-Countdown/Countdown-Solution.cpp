/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,T,i,k,n,cnt;
	bool k_cnt = false;
	vector<int> v;
	cin>>T;
	for(t=1;t<=T;t++){
		cin>>n>>k;
		v.resize(n);
		cnt = 0;
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		for(i=0;i<n;i++){
			if(v[i]==k)		k_cnt=true;
			else if(v[i]<k){
				if(i>0 && v[i-1]-v[i]==1 && k_cnt){
					if(v[i]==1){
						cnt++;
						k_cnt = false;
					}
				}
				else	k_cnt = false;
			}
		}
		cout<<"Case #"<<t<<": "<<cnt<<"\n";
	}
	return 0;
}
