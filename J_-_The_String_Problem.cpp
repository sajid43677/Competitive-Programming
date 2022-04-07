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
    int n,m;
    cin >> n >> m;
    char a;
    int arr[200] = {0};
    int arr1[200] = {0};
    for1(n){
        cin >> a;

        arr[a]++;
    }
    for1(m){
        cin >> a ;
        arr1[a]++;
    }
    int mn = 1e9;
    for(int i = 'a'; i <= 'z'; i++){
        if(arr1[i] != 0){
            mn = min(mn, arr[i]/arr1[i]);
        }
    }
    cout << mn << endl;
}
int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) solve();
    

}











