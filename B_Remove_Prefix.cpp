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
    int n;
    cin >> n;
    int arr[n];
    for1(n){
        cin >> arr[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    set <int> st;
    int sz = 0,cns;
    //cout << n << endl;
    for(int i = n - 1; i >=0;i--){
        st.insert(arr[i]);
        cns = st.size();
        sz++;
        //cout << sz << " " << cns << endl << endl;
        if(sz>cns){
            cns = -1;
            break;
        }

    }
    //cout << sz << endl;
    if(cns == -1)
        sz = n - (sz-1);
    else
        sz = n - sz;
    cout << sz << endl;
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











