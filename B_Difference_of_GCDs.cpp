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
    int n,l,r,cnt = 1,a;
    cin >> n >> l >> r;
    vector <int> st1;
    for(int i = 1; i <=n;i++){
        //cout << cnt%i << endl;
        if(l%i == 0){
            st1.pb(l);
        }
        else{
            a = ceil(l*1.0/i)*i;
            if(a <=r){
                st1.pb(a);
            }
            else{
                cout << "NO" << endl;
                return;
            }

        }
    }
    cout << "YES"<< endl;
    for(auto m: st1){
        cout << m << " ";
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











