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
    for1(n) cin >> arr[i];
    int prev,curr;
    cin >> curr;
    cout << curr - arr[0] << " ";
    prev = curr;
    for(int i = 1; i < n; i++){
        cin >> curr;
        prev = max(arr[i],prev);
        cout << curr - prev << " ";
        prev = curr;
    }
    cout << endl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











