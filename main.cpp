#include <climits>
#include <cstddef>
#include <pthread.h>
#include <vector> 
#include <iostream>
#define ll long long

using namespace std;

int solve(vector<int> a, int n){
  int sum =0; 
  for(int i=0;i<n;i++){ 
    sum +=a[i ];
  }
  return sum;
}


int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


  int t; 
  cin>>t; 
  while(t--){
    int n; 
    cin>>n; 
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i ];
    }
    int ans = solve(a, n);
    cout<<ans<<endl;
  }

  return 0;
}
