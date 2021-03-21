/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,T,R,C,i,j;
	ll Left,Right,Up,Down,k,ans;
	cin>>T;
	for(t = 1; t<=T; t++){
		cin>>R>>C;
		ans = 0;
		int mat[R][C], left[R][C], right[R][C], up[R][C], down[R][C];
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				cin>>mat[i][j];
				left[i][j] = right[i][j] = up[i][j] = down[i][j] = 0;
			}
		}
		for(i=0;i<R;i++){
			for(j=1;j<C;j++){
				if(mat[i][j-1] == 1)	left[i][j] = left[i][j-1]+1;
				else	left[i][j] = 0;
			}
			for(j=C-2;j>=0;j--){
				if(mat[i][j+1] == 1)	right[i][j] = right[i][j+1]+1;
				else	right[i][j] = 0;
			}
		}
		for(j=0;j<C;j++){
			for(i=1;i<R;i++){
				if(mat[i-1][j] == 1)	up[i][j] = up[i-1][j]+1;
				else	up[i][j] = 0;
			}
			for(i=R-2;i>=0;i--){
				if(mat[i+1][j] == 1)	down[i][j] = down[i+1][j]+1;
				else	down[i][j] = 0;
			}
		}
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				if(mat[i][j] == 0)	continue;
				Left = left[i][j] + 1;
				Right = right[i][j] + 1;
				Up = up[i][j] + 1;
				Down = down[i][j] + 1;
				if(Left>1 && Up>1){
					k = min(Up/2,Left);
					if(k>1)		ans += k-1;

					k = min(Up, Left/2);
					if(k>1)		ans += k-1;
				}
				if(Left>1 && Down>1){
					k = min(Down/2,Left);
					if(k>1)		ans += k-1;

					k = min(Down, Left/2);
					if(k>1)		ans += k-1;
				}
				if(Right>1 && Down>1){
					k = min(Down/2,Right);
					if(k>1)		ans += k-1;

					k = min(Down, Right/2);
					if(k>1)		ans += k-1;
				}
				if(Right>1 && Up>1){
					k = min(Up/2,Right);
					if(k>1)		ans += k-1;

					k = min(Up, Right/2);
					if(k>1)		ans += k-1;
				}
			}
		}
		cout<<"Case #"<<t<<": "<<ans<<"\n"; 
	}
	return 0;
}