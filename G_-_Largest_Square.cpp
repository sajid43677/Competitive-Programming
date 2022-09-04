#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

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

void solve(){
    int m,n,q;
    cin >> m >> n >> q;
    cout << m << " " << n << " " << q<< endl;
    swap(n,m);
    char arr[n][m];
    for1(n){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for1(q){
        int x,y;
        cin >> x >> y;
        char a = arr[x][y];
        int ans = INT32_MAX;
        int cnt = 0;
        if(x >= n-1 || y >= m - 1 || x <= 0 || y <= 0){
            //__f("a,x,y",a,x,y);
            cout << 1 << endl;
            continue;
        }
        int xx = x;
        int yy = y;
        //__f("a,x,y",a,x,y);
        for(int j = 0; j < 8;j++){
            x = xx;
            y = yy;
            cnt = 0;
            while(true){
                x += gx[j];
                y += gy[j];
                if(arr[x][y] != a){
                   // __f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                    break;
                }
                if(x == n-1 || y == m - 1 || x == 0 || y == 0){
                    cnt++;
                   // __f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                    break;
                }
                cnt++;
            }
            ans = min(cnt,ans);
        }
        int tmp = 0;
        int xxx = xx;
        while(true){
            xx = xx - 1;
            if(xx==0)break;
            tmp++;
            if(tmp==cnt)break;
            int tmp1 = tmp;
            for(int j = 0; j < 8;j++){
                x = xx;
                y = yy;
                tmp = tmp1;
                while(true){
                    x += gx[j];
                    y += gy[j];
                    if(arr[x][y] != a){
                     //__f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                        break;
                    }
                    if(x == n-1 || y == m - 1 || x == 0 || y == 0){
                        tmp++;
                     //__f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                        break;
                    }
                    tmp++;
                }
                cnt = min(cnt,tmp);
            }
        }
        xx = xxx;
        tmp = 0;
        while(true){
            xx = xx + 1;
            if(xx==n-1)break;
            tmp++;
            if(tmp==cnt)break;
            int tmp1 = tmp;
            for(int j = 0; j < 8;j++){
                x = xx;
                y = yy;
                tmp = tmp1;
                while(true){
                    x += gx[j];
                    y += gy[j];
                    if(arr[x][y] != a){
                     //__f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                        break;
                    }
                    if(x == n-1 || y == m - 1 || x == 0 || y == 0){
                        tmp++;
                     //__f("a,arr[x][y],x,y,cnt",a,arr[x][y],x,y,cnt);
                        break;
                    }
                    tmp++;
                }
                cnt = min(cnt,tmp);
            }
        }
        ans = min(cnt,ans);
        cout << ans*2 + 1 << endl;
    }

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











