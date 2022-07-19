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
    while(cin >> n){
        int vc[n];
        //cout << "in";
        int a;
        for1(n){
            cin >> a;
            vc[a] = i;
        }
        int ans = 0,tmp;
        for1(n){
            cin >> a;
            if(i < vc[a]){
                ans += vc[a] - i;
                tmp = vc[a];
                vc[a] = i;
                for(int j = 0; j < n;j++){
                    if(vc[j] < tmp && vc[j] >= i){
                        vc[j]++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
   /*  int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











