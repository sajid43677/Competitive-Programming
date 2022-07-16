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
int cas = 1;

void solve(){
    int n;
    cin >> n;
    while(n!=0){
        cout << "Case " << cas <<":" << endl;
        int arr[n] = {0};
        for1(n){
            cin >> arr[i];
        }
        vector <int> vc;
        for(int i = 0; i < n-1;i++){
            for(int j= i+1;j < n;j++){
                vc.pb(arr[i]+arr[j]);
            }
        }
        int len = vc.size();
        int q;
        cin >> q;
        int a,flg,tmp;
       /*  for(auto k: vc){
            cout << k << " ";
        }
        cout << endl; */
        for1(q){
            cin >> a;
            int cc = a;
            flg = INT_MAX;
            tmp = -1;
            for(int j = 0; j < len;j++){
                a = abs(vc[j] - cc);
                //cout << a << endl;
                if(a == 0){
                    tmp = vc[j];
                    break;
                }
                if(a < flg){
                    flg = a;
                    tmp = vc[j];
                }
            }
            cout << "Closest sum to " << cc << " is "<<tmp<<"."<<endl; 
        }
        cin >> n;
        cas++;
    }
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











