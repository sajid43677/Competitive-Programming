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

/* //              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={1, -1, 0, 0, 1, 1, -1, -1},
            gy={0, 0, 1, -1, 1, -1, 1, -1}; */


//          Code Starts Here          //
//====================================//

//              N, E, S, W, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={-1, 0, 1, 0, 1, 1, -1, -1},
            gy={0, 1, 0, -1, 0, -1, 1, -1};
map <char,int> dir;

void solve(){
    int x,y,curx,cury;
    dir['N'] = 0;
    dir['E'] = 1;
    dir['S'] = 2;
    dir['W'] = 3;
    curx = 0;
    while(1){
        curx = 0;
        cin >> x >> y >> cury;
        if(x == 0 && y == 0 && cury == 0) break;
        cury--;
        
        char arr[x][y];
        int step[x][y];
        for1(x){
            for(int j =0;j < y;j++){
                cin >> arr[i][j];
                step[i][j] = 0;
            }
        }
        int cnt = 1;
        while(1){
           // __f("curx,cury,step[curx][cury],gx[dir[arr[curx][cury]]],dir[arr[curx][cury]],arr[curx][cury]",curx,cury,step[curx][cury],gx[dir[arr[curx][cury]]],dir[arr[curx][cury]],arr[curx][cury]);
            if(curx >= x || curx < 0 || cury >= y || cury < 0){
                cout << cnt-1 <<" step(s) to exit" << endl;
                break;
            }
            if(step[curx][cury] != 0){
                cout << step[curx][cury] - 1 <<" step(s) before a loop of "<< cnt - step[curx][cury] <<" step(s)" << endl;
                break;
            }
            step[curx][cury] = cnt++;
            //__f("curx,cury,step[curx][cury],dir[arr[curx][cury]]",curx,cury,step[curx][cury],dir[arr[curx][cury]]);
            //__f("gx,gy",gx[dir[arr[curx][cury]]],gy[dir[arr[curx][cury]]]);
            int tmpx = curx;
            curx = curx + gx[dir[arr[curx][cury]]];
            cury = cury + gy[dir[arr[tmpx][cury]]];
            //__f("curx,cury,step[curx][cury]",curx,cury,step[curx][cury]);
        }
    }
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











