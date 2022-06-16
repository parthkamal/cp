#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long int ull;
const ll mod = ll(1e9) + 7;
const int inf=ll(1e9)+1;
const int N=40000;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void swap_int(int * a,int * b) {int temp=*a;*a=*b;*b=temp;}
void swap_char(char *a,char* b){char temp=*a;*a=*b;*b=temp;}

void solve(int s[],int q[],int n,int m){
	set<int> st;
	vector<int> ans;
	for(int i=0;i<m;i++)st.insert(q[i]);
	for(int i=0;i<n;i++)if(st.find(s[i])!=st.end())ans.push_back(s[i]);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
	cout<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    fastio();
	int t;
	cin>>t;
	cout<<t<<endl;
	return 0;
}
