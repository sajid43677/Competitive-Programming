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
    int n,m;
    cin >> n >> m;
    char arr[n];
    char arr1[m];
    for1(n) cin >> arr[i];
    for1(m) cin >> arr1[i];
    int totb = 0;
    int totr = 0;
    char cnt = arr[0];
    int flg = 0;
    for1(n) {
        if(arr[i] == 'B') totb++;
        else totr++;
        if(cnt != arr[i]){
            flg = 1;
        }
        if(cnt == 'B') cnt = 'R';
        else cnt = 'B';
    }
    cnt = arr1[0];
    int flg1 = 0;
    for1(m) {
        if(arr1[i] == 'B') totb++;
        else totr++;
        if(cnt != arr1[i]){
            flg1 = 1;
        }
        if(cnt == 'B') cnt = 'R';
        else cnt = 'B';
    }
    if(flg == 0 && flg1 == 0){
        cout << "YES" << endl;
        return;
    }
    if(flg == 1 && flg1 == 1){
        cout << "NO" << endl;
        return;
    }
    if(arr[n-1] == arr1[m-1]){
        cout << "NO" << endl;
        return;
    }
    if(flg == 0){
        int cnt[m] = {0};
        for2(m-1){
            if(arr1[i] == arr1[i-1]){
                cnt[i] = 1;
            }
            else{
                cnt[i] = cnt[i-1];
            }
        }
        for(int i = m-1; i >= 1;i--){
            //__f("arr1[i],arr1[i-1]",arr1[i] ,arr1[i-1]);
            if(arr1[i] == arr1[i-1]){
                if(cnt[i-1] == 0){
                    cout << "YES" << endl;
                    return;
                }
                else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    else{
        int cnt[n] = {0};
        for2(n-1){
            if(arr[i] == arr[i-1]){
                cnt[i] = 1;
            }
            else{
                cnt[i] = cnt[i-1];
            }
            //__f("arr[i],arr[i-1],cnt[i]",arr[i] ,arr[i-1],cnt[i]);
        }
        for(int i = n-1; i >= 1;i--){
            //__f("arr[i],arr[i-1]",arr[i] ,arr[i-1]);
            if(arr[i] == arr[i-1]){
                
                if(cnt[i-1] == 0){
                    cout << "YES" << endl;
                    return;
                }
                else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    //cout << "NNN" << endl;

}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











