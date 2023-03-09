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



void solve(){
    int n;
    int arr[3];
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    int ans = -1;
    sort(arr,arr+3);
    /* if(n%arr[0]==0){
        ans = n/arr[0];
        cout << ans << endl;
        return ;
    } */
    int curr = 0;
    int cnt = 0;
    int tmp = n;
    /* while(true){
        tmp = tmp - arr[1];
        if(tmp < 0){
            break;
        }
        cnt++;
        if(tmp%arr[0] == 0){
            //__f("cnt,a,tmp,arr[0]",cnt,tmp/arr[0],tmp,arr[0]);
            cnt += tmp/arr[0];
            cout << cnt << endl;
            return;
        }
    } */
    ans = -1;
    for(int i = 0; i <= n/arr[0];i++){
        for(int j = 0; j <= n/arr[1];j++){
            tmp = i*arr[0] + j*arr[1];
            //__f("tmp,i,j,k",tmp,i,j,(n-tmp)/arr[2]);
            if(tmp > n) break;
            if(tmp == n){
               // __f("tmp,i,j",tmp,i,j);
                ans = max(ans,i+j);
            }
            if(1){
                if((n-tmp)%arr[2] == 0){
                    //__f("tmp,i,j,k",tmp,i,j,(n-tmp)/arr[2]);
                    ans = max(ans,i+j+(n-tmp)/arr[2]);
                }
            }
        }
    }
    cout << ans << endl;

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











