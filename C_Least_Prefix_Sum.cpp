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
    int n,k;
    cin >> n >> k;
    int arr[n];
    for1(n){
        cin >> arr[i];
    }
    int p = 0, sm = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = k; i < n;i++){
        if(arr[i] < 0){
            pq.push(arr[i]);
        }
        sm += arr[i];
        while(sm < 0){
            int l = pq.top();
            pq.pop();
            l = -1*l;
            sm = sm + 2*l;
            p++;
        }
        if(arr[k-1] <= 0) sm = arr[k-1];
        else if(k != 1) sm = -1*arr[k-1];
        p++;
    }
     priority_queue<int> pq1;
     for(int i = k-2; i >=1;i--){
        if(arr[i] > 0){
            pq1.push(arr[i]);
        }
        sm += arr[i];
        while(sm > 0){
            int l = pq1.top();
            pq1.pop();
            l = -1*l;
            sm = sm + 2*l;
            p++;
     }
}
cout << p << endl;
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











