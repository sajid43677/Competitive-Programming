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


bool valid(int x, int y,int n, int m){
    return x >= 0 && x < n && y < m && y >= 0 ;
}
int cas = 1;
void solve(){
    cout << "Case " << cas++ << ": ";
    int n,m;
    cin >> n >> m;
    char a;
    char vc[n+1][m+1];
    vector <pair<int,int>> fire;
    int x=0,y=0,x1,y1,xf,yf,xf1,yf1;
    for1(n){
        for(int j = 0; j < m;j++){
            cin >> a;
            vc[i][j] = a;
            if(a == 'J'){
                x = i;
                y = j;
            }
            if(a == 'F'){
                fire.pb({i,j});
            }
        }
    }
    if(x == n-1 || y == m-1 || x == 0 || y == 0){
        cout << 1 << endl;
        return;
    }

    int fvisited[n+1][m+1] = {0};
    for1(n){
        for(int j = 0; j < m;j++) fvisited[i][j] = INT32_MAX;
    }
    queue <pair<int,int>> qf;
    for(auto a: fire){
        xf = a.xx;
        yf = a.yy;
        fvisited[xf][yf] = 0;
        qf.push({xf,yf});
    }
    {
        int markf[n+1][m+1] = {0};
        /* for1(n){
            for(int j = 0; j < m;j++) markf[i][j] = 0;
        } */
        while(!qf.empty()){
            xf = qf.front().xx;
            yf = qf.front().yy;
            qf.pop();
            if(markf[xf][yf] == 1) continue;
            for(int i = 0; i < 4; i++){
                xf1 = xf + gx[i];
                yf1 = yf + gy[i];
                if(!valid(xf1,yf1,n,m)) continue;
                 //cout << xf1 << " " << yf1 << " " << xf << " " << yf <<" "<< fvisited[xf1][yf1]<< endl;
                if(vc[xf1][yf1] == '.'){
                    fvisited[xf1][yf1] = min(fvisited[xf][yf] + 1,fvisited[xf1][yf1]);
                   
                    qf.push({xf1,yf1});
                }
            }
            markf[xf][yf] = 1;
        }
    }
    /* pendl;
    for1(n){
        for(int j = 0; j < m;j++) cout << fvisited[i][j] << " ";
        pendl;
    } */







    int visited[n+1][m+1] = {0};
    for1(n){
        for(int j = 0; j < m;j++) visited[i][j] = 0;
    }
    int stp[n+1][m+1] = {0};
    queue <pair<int,int>> q;
    q.push({x,y});
    int lvl = 0;
    stp[x][y] = 0;
    while(!q.empty()){
        x = q.front().xx;
        y = q.front().yy;
        q.pop();
        if(visited[x][y] == 1) continue;
        //__f("x,y",x,y);
        for(int i = 0; i < 4;i++){
            //__f("x1,y1,vc[x1][y1]",x1,y1,vc[x1][y1]);
            
            x1 = x + gx[i];
            y1 = y + gy[i];
            if(!valid(x1,y1,n,m)) continue;
            stp[x1][y1] = stp[x][y] + 1;
            /* if(lvl < stp[x1][y1]){
                lvl = stp[x1][y1];
                for(auto a: fire){
                    for1(4){
                        xf = a.xx + lvl*gx[i];
                        yf = a.yy + lvl*gy[i];
                        if(!valid(xf,yf,n,m)) continue;
                        vc[xf][yf] = 'F';
                    }
                } 
            } */
            
            if(vc[x1][y1] == '.' && fvisited[x1][y1] > stp[x1][y1]){
                //cout << x1 << " " << y1 << " " << x << " " << y << " " << vc[x1][y1] << " "<< fvisited[x1][y1] << " " <<  stp[x1][y1]<< endl;
                if(x1 == n-1 || y1 == m-1 || x1 == 0 || y1 == 0){
                    cout << stp[x1][y1] + 1 << endl;
                    return;
                }
                q.push({x1,y1});
            }
            
        }
        visited[x][y] = 1;
         
    }
    cout << "IMPOSSIBLE" << endl;
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











