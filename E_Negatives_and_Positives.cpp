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
    ll sum = 0;
    ll arr[n];
    for1(n){
        cin >> arr[i];
        sum += arr[i];
    }
    for1(n-1){
        if(arr[i] < 0 && arr[i+1] < 0){
            arr[i+1] = -1*arr[i+1];
            arr[i] = -1*arr[i];
            sum += (arr[i] + arr[i+1])*2;
            continue;
        }
    }
    if((arr[0]) < 0){
        if(abs(arr[0]) > arr[1]){
            arr[1] = -1*arr[1];
            arr[0] = -1*arr[0];
            sum += (arr[0] + arr[1])*2;
            
        }
    }
    for2(n-2){
        if(arr[i] < 0){
            if(abs(arr[i]) > arr[i+1] && abs(arr[i]) > arr[i-1]){
                if(arr[i+1] > arr[i-1]){
                    arr[i-1] = -1*arr[i-1];
                    arr[i] = -1*arr[i];
                    sum += (arr[i] + arr[i-1])*2;
                    continue;
                }
                else{
                    arr[i+1] = -1*arr[i+1];
                    arr[i] = -1*arr[i];
                    sum += (arr[i] + arr[i+1])*2;
                    continue;
                }
            }
            if(abs(arr[i]) > arr[i-1]){
                arr[i-1] = -1*arr[i-1];
                arr[i] = -1*arr[i];
                sum += (arr[i] + arr[i-1])*2;
                continue;
            }
            if(abs(arr[i]) > arr[i+1]){
                arr[i+1] = -1*arr[i+1];
                arr[i] = -1*arr[i];
                sum += (arr[i] + arr[i+1])*2;
                continue;
            }
        }
    }
    if((arr[n-1]) < 0){
        if(abs(arr[n-1]) > arr[n-2]){
            arr[n-1] = -1*arr[n-1];
            arr[n-2] = -1*arr[n-2];
            sum += (arr[n-1] + arr[n-2])*2;
            
        }
    }
    cout << sum << endl;
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











