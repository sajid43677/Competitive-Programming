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
#define mkp make_pair
#define pendl cout << '\n' 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

//              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={1, -1, 0, 0, 1, 1, -1, -1},
            gy={0, 0, 1, -1, 1, -1, 1, -1};


//          Code Starts Here          //
//====================================//

void solve(){
    int n;
    cin >> n;
    int ase= 0,bag = 0;
    vector<int> vc;
    char vow[5] = {'a','e','i','o','u'};
    string s;
    int flg = 0;
    for1(n){
        cin >>s;
        for(int j = 0;j<s.size();j++){
            flg = 0;
            for(int k = 0; k < 5;k++){
                if(vow[k] == s[j]){
                    flg = 1;
                    ase++;
                    break;
                }
            }
            if(flg == 0){
                if(ase)bag++;
                ase = 0;
            }
        }
        if(ase)
            bag++;
        //cout << ase <<" " << bag << endl;
        vc.pb(bag);
        ase = bag = 0;
    }
    /* for(auto v:vc){
        cout << v << endl;
    } */
    int arr[3] = {5,12,17};
    int cnt = 0;
    for(int i = 0; i < n; i++){
        ase = 0;
        bag = 0;
        for(int j = i; j < n;j++){
            if(ase>16)break;
            ase = ase+vc[j];
            for(int k = 0; k < 3;k++){
                if(arr[k] == ase){
                    bag++;
                    break;
                }
            }
        }
        if(bag == 3)cnt++;
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











