#include <bits/stdc++.h>

using namespace std;


void solve(int row){


    int r = row; 

    for(int i=0;i<r; i++){
        for(int j=0;j<r;j++){
            if(j>i && j<r){
                cout<<" ";
            }else {
                int val =0 ; 

                val = val + (j*(2*r -j+1))/2;

                if(j%2==0){
                    val += i-j+1;
                }else {
                    int col = r-1;
                    val+= col-i+1; 
                }

                cout<<val<<" ";
            }
        }

        cout<<endl;
    }
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    
    cout<<(1<<1)<<endl; 
    cout<<(1<<2)<<endl; 
    cout<<(1<<3)<<endl; 
    cout<<(1<<4)<<endl; 


    return 0;
}
