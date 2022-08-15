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

void solve(){
    int n,a,b;
    cin >> n;
    string s;
    cin >> s;
    vector <pair<int,int>> vc(n);
    for1(n){
        cin >> a;
        b = s[i] - '0';
        vc[i] = mkp(a,b);
    }
    sort(vc.begin(),vc.end(),greater<pair<int,int>>());
    /* for1(n){
        cout << vc[i].first << " " << vc[i].second << endl;
    } */
    int ones[n] = {0};
    int zeroes[n] = {0};
    if(vc[0].second == 1) ones[0] = 1;
    for(int i = 1; i < n; i++){
        if(vc[i].second == 1) ones[i] = ones[i-1] + 1;
        else ones[i] = ones[i-1];
    }
    if(vc[n-1].second == 0) zeroes[n-1] = 1;
    for(int i = n-2; i >=0;i--){
        if(vc[i].second == 0) zeroes[i] = zeroes[i+1] + 1;
        else zeroes[i] = zeroes[i+1];
    }
    int ans = INT32_MAX;
    if(zeroes[0] == n){
        cout << n << endl;
        return;
    }
    if(ones[n-1] == n){
        cout << n << endl;
        return;
    }
    for1(n){
        a = abs(ones[i]-zeroes[i]);
        if(ans > a){
            b = i;
            ans = a;
        }
    }
   /*  __f("w",vc[b].first);
    __f("o",b+1 - ones[b]);
    __f("z",ones[n-1] - ones[b]); */
    cout <<n - ((b+1 - ones[b]) + (ones[n-1] - ones[b])) << endl;


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











