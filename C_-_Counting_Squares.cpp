#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define all(x) x.begin(),x.end()
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
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

char arr[9][9];

int square(int x,int y){
    int lenx = 0;
    int leny = 0;
    int tmpx = 0;
    int tmpy = 0;
    int tot = 0;
    for(int i = x; i < 9;i++){
        for(int j = y+1; j < 9; j++){
            lenx = i - x;
            leny = j - y;
            if(arr[i][j] == '#'){
                if(i+leny > 8 || j - lenx < 0) continue;
                if(arr[i+leny][j-lenx] == '#'){
                    tmpx = i+leny;
                    tmpy = j - lenx;
                    if(tmpy - leny < 0) continue;
                    if(arr[tmpx-lenx][tmpy-leny] == '#') tot++;
                }
            }
        }
    }
    return tot;

}

void solve(){
    
    int tot = 0;
    for1(9){
        for(int j = 0; j < 9;j++){
            cin >> arr[i][j];
        }
    }
    for1(9){
        for(int j = 0; j < 9;j++){
            if(arr[i][j] == '#'){
                tot += square(i,j);
            }
        }
    }
    cout << tot << endl;

}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











