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

//              N, E, S, W, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={0, 1, 0, -1, 1, 1, -1, -1},
            gy={1, 0, -1, 0, 0, -1, 1, -1};
vector <char> dir={'N','E','S','W'};


//          Code Starts Here          //
//====================================//



void solve(){
    int x,y;
    cin >> x >> y;
    int scent[x+1][y+1];
    allZero(scent); 
    int curx,cury;
    char std;
    string s;
    while(cin >> curx >> cury >> std >> s){
        int curd = -1;
        for1(4){
            if(std == dir[i]){
                curd = i;
                break;
            }
        }
        int lost = 0;
        for1((int)s.size()){
            if(s[i] == 'F'){
                int tmpx,tmpy;
                tmpx = curx;
                tmpy = cury;
                curx += gx[curd];
                cury += gy[curd];
                if(curx > x || curx < 0 || cury > y || cury < 0){
                    curx = tmpx;
                    cury = tmpy;
                    if(scent[tmpx][tmpy]){
                        continue;
                    }
                    else{
                        scent[tmpx][tmpy] = 1;
                        lost = 1;
                        break;
                    }
                }
            }
            else if(s[i] == 'R'){
                curd = (curd+1)%4;
            }
            else{
                curd = (curd+3)%4;
            }
        }
        cout << curx << " " << cury << " " << dir[curd];
        if(lost == 1){
            cout << " LOST"; 
        }
        pendl;

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











