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
    n = pow(2,n);
    int prev,curr;
    vector <int> cn(n);
    int cnt = 0;
    prev = -1;
    for1(n) {
        cin >> curr;
        if(prev > curr && i != 0){
            cnt++;
        }
        cn[i] = cnt;
        prev = curr;
    }
    if(cnt == 0){
        cout << 0 << endl;
        return;
    }
    cnt = 0;
    int r = n-1;
    int l = 0;
    while(r >= l){
        cnt++;
        int mid = l + (r - l) / 2;
        if(cn[l] == cn[mid]){
            break;
        }
        if(cn[r] == cn[mid+1]);{
            break;
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
    while(t--) */ 
        solve();
    

}











