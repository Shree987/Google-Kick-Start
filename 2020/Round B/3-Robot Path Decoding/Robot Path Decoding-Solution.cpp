/*  Author : Shreeraksha R Aithal  */
/*  Github : @Shree987  */
/*  University : NITK  */

#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

vector<long> RoboMove(string path){
    long x_pos=0,x_neg=0,y_pos=0,y_neg=0;
    int i, j, n = path.size(),k;
    vector<long> ans(4,0);
    for(i=0;i<n;i++){
        if(path[i]<='9' && path[i]>='2'){
        	k=0;
            j=i+2;
            while(path[j]!=')' || k>0){
            	if(path[j]=='(')	k++;
            	else if(path[j]==')')	k--;
            	j++;
            }
            ans = RoboMove(path.substr(i+2,j-i-2));
            ans[0] = ((ans[0]%MAX)*(path[i]-'0'))%MAX;
            ans[1] = ((ans[1]%MAX)*(path[i]-'0'))%MAX;
            ans[2] = ((ans[2]%MAX)*(path[i]-'0'))%MAX;
            ans[3] = ((ans[3]%MAX)*(path[i]-'0'))%MAX;
            x_pos = (ans[0] + x_pos)%MAX;
            x_neg = (ans[1] + x_neg)%MAX;
            y_pos = (ans[2] + y_pos)%MAX;
            y_neg = (ans[3] + y_neg)%MAX;
        	i=j;
        }
        else{
        	if(path[i]=='W')    		x_neg = (x_neg+1)%MAX;
        	else if(path[i]=='E')    	x_pos = (x_pos+1)%MAX;
        	else if(path[i]=='N')    	y_neg = (y_neg+1)%MAX;
        	else if(path[i]=='S')    	y_pos = (y_pos+1)%MAX;
        }
    }
    ans[0] = x_pos%MAX;
    ans[1] = x_neg%MAX;
    ans[2] = y_pos%MAX;
    ans[3] = y_neg%MAX;
    return ans;
}

int main(){
    int T,t;
    string path;
    vector<long> answer;
    cin>>T;
    for(t=1;t<=T;t++){
    	cin>>path;
        answer = RoboMove(path);
        cout<<"Case #"<<t<<": "<<(answer[0]-answer[1]+MAX)%MAX+1<<" "<<(answer[2]-answer[3]+MAX)%MAX+1<<"\n";
    }
    return 0;
}
