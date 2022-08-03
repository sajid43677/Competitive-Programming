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
    vector<vector<int>> vc( n+1 , vector<int> (n+1, 0));

    for1(m){
        cin >> a >> b;
        vc[a][b] = vc[b][a] = 1;
        //cout << vc[a][b];
    }
    int cnt = 0;
    for(int i = 1; i <= n;i++){
        for(int j = i+1;j <= n;j++){
            for(int k = j+1; k <= n;k++){
                if(vc[i][j] == 1 && vc[j][k] == 1 && vc[i][k] == 1){
                    cnt++;
                }
            }
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











