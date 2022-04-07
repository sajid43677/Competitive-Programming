#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)

void solve(){
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for1(n) cin >> arr[i];
    for1(n) cin >> arr1[i];
    int sm = 0, ns = 0;
    for1(n){
        if(arr[i] == arr1[i]){
            sm++;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr1[j]){
                ns++;
                break;
            }
        }
    }
    cout << sm << endl << ns << endl;

}

int main()
{
    Boost;
    //Read;Write;
    int t;
    /* cin >> t;
    while(t--) */ solve();
    

}











