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
#define pb(x) push_back(x);
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

char board[8][8];
int cnt = 0;

vector <pair<int,int>> qs;

bool chk(int x, int y){
    if(board[x][y] == '*') return false;
    for(auto a: qs){
        int dy = y - a.yy;
        int dx = x - a.xx;
        if (dx == 0 || dy == 0 || dx == dy || dx == -dy) {
            return false;
        }
    }
    return true;
}

void back(int pos){
    if(pos == 8){
        /* for(auto a: qs){
            cout << a.xx << a.yy << " ";
        }
        pendl; */
        cnt++;
        return;
    }
    for(int i = 0; i < 8;i++){
        if(chk(pos,i)){
            qs.pb(mkp(pos,i));
            back(pos+1);
            qs.pop_back();
        }
    }

}

void solve(){
    for1(8){
        for(int j = 0; j < 8;j++){
            cin >> board[i][j];
        }
    }
    back(0);
    cout << cnt << endl;

   /*  for1(8){
        for(int j = 0; j < 8;j++){
            cout << board[i][j];
        }
        pendl;
    } */
    
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











