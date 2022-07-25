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
#define lohi int, vector<int>, greater<int>>

void solve(){
    int n,m,a,b;
    cin >> n >> m;
    int arr[n] = {0};
    ll arr1[n] = {0};
    ll arr2[n] = {0};
    for1(n) cin >> arr[i];
    ll cnt = 0;
    for(int i = 1; i < n;i++){
        if(arr[i] < arr[i-1]){
            cnt = cnt + arr[i-1] - arr[i];
        }
        arr1[i] = cnt;
        //cout << arr1[i] << endl;
    }
    cnt = 0;
    for(int i = n-2; i >=0;i--){
         if(arr[i] < arr[i+1]){
            cnt = cnt + arr[i+1] - arr[i];
        }
        arr2[i] = cnt;
       // cout << arr2[i] << " " << arr[i+1] - arr[i] << endl;
    }
    //cout << endl;
    for1(m){
        ll mx = 0,ans;
        cin >> a >> b;
        if(b < a) mx = 1;
        //cout << mx << endl;
        if(mx == 0){
            ans = arr1[b-1] - arr1[a-1];
        }
        else{
            ans = arr2[b-1] - arr2[a-1];
        }
        cout << ans << endl;
    }
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
   /*  int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











