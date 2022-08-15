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
    char arr[n][n];
    for1(n){
        for(int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int cntb = 0,cntw = 0;
    int smc[n] = {0};
    for1(n){
        cntb = cntw = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'B') cntb++;
            else cntw++;
            if(i != 0 && arr[i-1][j] == arr[i][j]) smc[j]++;
        }
        if(cntw != cntb){
             cout << 0 << endl;
            return;
        }
         /* for(int j = 0 ; j < n; j++){
            if(smc[j] >= 2){
                cout << 0 << endl;
                return;
            }
        }  */
    }
    int smr[n] = {0};
    for1(n){
        cntb = cntw = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == 'B') cntb++;
            else cntw++;
            if(i != 0 && arr[j][i-1] == arr[j][i]) smr[j]++;
        }
        if(cntw != cntb){
             cout << 0 << endl;
            return;
        }
        //  for(int j = 0 ; j < n; j++){
        //     if(smr[j] >= 2){
        //         cout << 0 << endl;
        //         return;
        //     }
        // } 
    }
    int cnt = 0,cnta = 0;
    for1(n){
        for(int j = 0 ; j < n;j++){
            if(cnt >= 2 || cnta >= 2) {
                cout << 0 << endl;
                return;
            }
            if(j !=0 && arr[i][j] == arr[i][j-1]) cnt++;
            else cnt = 0;
            if(j != 0 && arr[j-1][i] == arr[j][i]) cnta++;
            else cnta = 0;
        }
    }
    cout << 1 << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











