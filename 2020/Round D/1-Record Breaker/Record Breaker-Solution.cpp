/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,T,i,cnt,n,MaxSeen;
	vector<int> v;
	cin>>T;
	for(t=1;t<=T;t++){
		cin>>n;
		v.resize(n);
		cnt=0;
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		MaxSeen = -1;
		for(i=0;i<n;i++){
			if(v[i]>MaxSeen && (i==n-1 || (i<n-1 && v[i]>v[i+1])))	cnt++;
			MaxSeen = max(MaxSeen, v[i]);
		}
		cout<<"Case #"<<t<<": "<<cnt<<"\n";
	}
	return 0;
}
