/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

priority_queue<pair<int, pair<int,int>>> pq;

int main(){
	int t, i, j, row, col, T;
	ll ans, m;
	cin>>T;
	for(t = 1; t<=T; t++){
		cin>>row>>col;
		ll mat[row][col];
		ans = 0;
		memset(mat, 0, sizeof(mat));
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cin>>mat[i][j];
				pq.push({mat[i][j], {i,j}});
			}
		}
		while(!pq.empty()){
			m = pq.top().first;
			i = pq.top().second.first;
			j = pq.top().second.second;
			pq.pop();
			if(m > mat[i][j]){
				ans += m - mat[i][j];
				mat[i][j] = m;
			}
				if(i>0 && mat[i-1][j]<mat[i][j]-1){
					ans += mat[i][j] - 1 - mat[i-1][j];
					mat[i-1][j] = mat[i][j] - 1;
					pq.push({mat[i][j]-1, {i-1,j}});
				}
				if(i<row-1 && mat[i+1][j]<mat[i][j]-1){
					ans += mat[i][j] - 1 - mat[i+1][j];
					mat[i+1][j] = mat[i][j] - 1;
					pq.push({mat[i][j]-1, {i+1,j}});
				}
				if(j>0 && mat[i][j-1]<mat[i][j]-1){
					ans += mat[i][j] - 1 - mat[i][j-1];
					mat[i][j-1] = mat[i][j] - 1;
					pq.push({mat[i][j]-1, {i,j-1}});
				}
				if(j<col-1 && mat[i][j+1]<mat[i][j]-1){
					ans += mat[i][j] - 1 - mat[i][j+1];
					mat[i][j+1] = mat[i][j] - 1;
					pq.push({mat[i][j]-1, {i,j+1}});
				}
		}
		cout<<"Case #"<<t<<": "<<ans<<"\n";
	}
	return 0;
}