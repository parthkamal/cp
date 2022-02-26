#include<bits/stdc++.h>
#include<algorithm>

//headers
#define ll long long
#define sti stack<int>
#define umii unordered_map<int,int>
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
#define pb push_back
#define m 200000
using namespace std;

//FUNCTIONS
int max3(int a,int b,int c){return max(a,max(b,c));}
int max4(int a,int b,int c,int d){return max(a,max3(b,c,d));}
int dis(int x,int y,int a,int b){return abs(x-a)+abs(b-y);}
bool isPrime(int n){if(n==1)return false;for(int i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
int gcd(int a,int b){if(b==0)return a;else return gcd(b,a%b);}
void swap(int * a,int * b){
    int temp=*a;
    *a=*b;
    *b=*a;
}   
//NUMBER THEORY
void seiveOfEratosthenese(vb& isPrime,int n){
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

void primeFactorization(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0)n/=i,count++;
            cout<<i<<"^"<<count<<" ";
        }
    }
    if(n>1)cout<<n<<"^"<<1<<endl;
}

int exp(int a,int n){
    if(a==0)return 0;
    else if (n==0)return 1;
    else if(n%2==0)return exp(a,n/2)*exp(a,n/2);
    else return a*exp(a,(n-1)/2)*exp(a,(n-1)/2);
}

int arr[m+1][18];

//SOLVE 



int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        
    }
    return 0;
}
