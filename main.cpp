#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int solve(std::vector<int> a,int n){
  int sum =0; 
  for(int i=0;i<n;i++){

  } 
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  int ans = solve(a, n);
  std::cout << ans << std::endl;
  return 0;
}
