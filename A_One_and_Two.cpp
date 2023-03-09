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
    cin >> n;
    ll arr[n];
    ll arr1[n];
    ll arr2[n];
    for1(n){
        cin >> arr[i];
    }
    //arr1[0] = arr[0];
    if(arr[0] == 2)
            arr1[0] =1;
    else arr1[0] = 0;
    for2(n-1){
        if(arr[i] == 2)
            arr1[i] = arr1[i-1]+1;
        else arr1[i] = arr1[i-1];
    }
    if(arr[n-1] == 2)
            arr2[n-1] =1 ;
    else arr2[n-1] = 0;
    for(int i = n-2; i >=0;i--){
        if(arr[i] == 2)
            arr2[i] = arr2[i+1]+1;
        else arr2[i] = arr2[i+1];
    }

    int ans = -1;
    for1(n-1){
        //cout << arr1[i] << " " << arr2[i]<< endl;
        if(arr1[i] == arr2[i+1]){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;

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











