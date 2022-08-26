#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

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
int h[3] = {0};
int w[3] = {0};
int arr[3][3] = {{0}};
int ansa = 0;
void recur(int ij){
    int i = ij/3;
    int j = ij%3;
    if(i == 3){
        ansa++;
        return;
    }
    if(i == 2){
        int ans = w[j] - arr[0][j] - arr[1][j];
        if(ans <= 0) return;
        arr[i][j] = ans;
        recur(ij+1);
    }
    else if(j == 2){
        int ans = h[i] - arr[i][0] - arr[i][1];
        if(ans <= 0) return;
        arr[i][j] = ans;
        recur(ij+1);
    }
    else{
        for(int x = 1; x <= 30;x++){
            int ans = x;
            arr[i][j] = ans;
            recur(ij+1);
        }
    }

}

void solve(){
    cin >> h[0]>>h[1]>>h[2]>>w[0]>>w[1]>>w[2];
    if (h[0] + h[1] + h[2] != w[0] + w[1] + w[2]) {
    cout << 0 << "\n";
    return;
  }
    recur(0);
    cout << ansa << endl;
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











