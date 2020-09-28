/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,T,i,j,n,diff,MaxSeen;
	vector<int> Arr;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>n;
		MaxSeen = 2;
		Arr.resize(n);
		for(i=0;i<n;i++)	cin>>Arr[i];
		i = 0;
		diff = 2;
		for(j=2; j<n; j++){
			if(Arr[i]-Arr[i+1] == Arr[j-1]-Arr[j])	diff++;
			else{
				MaxSeen = max(MaxSeen, diff);
				i = j-1;
				diff = 2;
			}
		}
		MaxSeen = max(MaxSeen, diff);
		cout<<"Case #"<<t<<": "<<MaxSeen<<"\n";
	}
	return 0;
}