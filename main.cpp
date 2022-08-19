//-----------------------------------NOTES---------------------------------------------------------------
// the number of prime numbers less than or equal to n is approximately n/lnn or the kth prime number is approximately equal to klnk
// time complexity of prime factorization is o(sqrt(n))
// gcd(a,b)=gcd(a,a-b) if(b<a)--euclidean algorithm to find gcd
// header files just copies the code from other files and paste it into current .h  are c standard header whereas <> are cpp headers


//-----------------------------------MACROS (PREPROCESSOR)------------------------------------------------
#define ll long long
#define mod int(1e6)+3
#define N int (1e9)+1

//--------------------------INCLUDING HEADER FILES (PREPROCESSOR STATEMTENTS)-----------------------------
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <iterator>
#include <set>
#include <cmath>
#include <limits.h>
#include <string.h>
#include <queue>


//-------------------------TYPEDEF STATEMENTS (LOCALS)-------------------------------------------------



//-------------------------DECLARING NAMESPACES---------------------------------------------------------
namespace math {
	//checking prime in o(sqrt(n))
	bool prime(int n){
		bool ans=true;
		if(n<=1)return false;
		for (int i=2;i*i<=n;i++)if(n%i==0)return !ans;
		return ans;
	}
	void sieveOfEratosthenes(std::vector<bool> arr){
		// for generating prime number between 1 t0 n the array need to be in the  size of n+1 in o(nlog(logn))
		arr[1]=false;
		for(int i=2;i*i<=arr.size()-1;i++)if(arr[i]==true)for(int j=i*i;j<=arr.size()-1;j+=i)arr[j]=false;  
	}
	int gcd(int a,int b){
		// the idea is to use modulo operator with euclidean algorithm -o(Log(min(a,b)))
		if(b==0)return a;
		return gcd(b,a%b);
	}

	int countSetBit(int a){
		//counting the set bits in a number
		int ans=0;
		for(int i=0;i<=31;i++)if(a&(1<<i))ans++;
		return ans;
	}

	void swap_int(int &a,int &b){
		int temp=b;
		b=a;
		a=temp;
	}
}

//------------------------------------------SOLVE---------------------------------------------------------
void solve(std::vector<int> &arr,int n){
	int sum =0;
	for(int it:arr)sum+=it;
	std::cout<<sum<<std::endl;
}


//golbach conjecture -generating prime numbers from one to n efficiently
//sieve of eratosthenes  

int main(){
	int t;
	std::cin>>t;
	std::cout<<t;
	return 0;
}