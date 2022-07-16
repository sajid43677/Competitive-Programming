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
    int arr[n] = {0};
    int cnt = 0;
    int prev,curr,cntz = 0;
    for1(n){
        cin >> arr[i] ;
        if(arr[i] == 0) cntz++;
    }
    if(cntz == n){
        cout << 0 << endl;
        return;
    }
    if(cntz == 0){
        cout << 1 << endl;
        return;
    }
    prev = arr[0];
    for(int i = 1; i < n; i++){
        curr = arr[i];
        if(prev && curr == 0){
            cnt++;
        }
        prev = curr;
    }
    if(curr != 0) cnt++;
    cout << min(cnt,2) << endl;
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











