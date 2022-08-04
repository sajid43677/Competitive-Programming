#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)
#define lohi int, vector<int>, greater<int>>

void solve(){
    ll n,a;
    cin >> n;
    ll arr[n+1] = {0};
    ll sm = 0;
    for1(n){
        cin >> a;
        if(i+1 == a){
            sm++;
            arr[i+1] = -1;
        }
        else{
            arr[i+1] = a;
        }
    }
    sm--;
    ll cnt = (sm*(sm+1))/2;
    for1(n){
        if(arr[i+1] == -1) continue;
        a = arr[i+1];
        if(arr[a] == i+1){
            arr[i+1] = -1;
            arr[a] = -1;
            cnt++;
        }
    }
    cout << cnt << endl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











