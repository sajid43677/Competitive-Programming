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
#define rof1(n) for(int i = n-1; i >= 0;i--)
#define for2(n) for(int i = 1; i <= n;i++)
#define rof2(n) for(int i = n; i > 0;i--)
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
    int n,m,x,y,y1;
    cin >> n >> m;
    int arr[n+1] = {0};
    int arr2[n+1] = {0};
    int arr1[m+1] = {0};
    int read[n+1] = {0};
    int pos[n+1] = {0};
    pos[0] = 0;
    for2(n){
        cin >> arr[i];
        pos[i] = 0;
    }
    int curr = 1;
    for2(m){
        cin >> x;
        arr1[i] = x;
        if(!read[x])arr2[curr++] = arr[x];
        read[x] = 1;
    }
    //sort(pos+1,pos+n+1);
    stack <int> q;
    stack <int> st;
    rof2(n) q.push(arr2[i]);
    /* while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }
    return; */
    ll sum = 0;
    for2(m){
        x = arr[arr1[i]];
        //__f("q.top(),x",q.top(),x);
        while(x != q.top()){
            
            st.push(q.top());
            sum += q.top();
            q.pop();   
        }
        q.pop();
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        q.push(x);
    }
    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }
    return;
    cout << sum << endl;
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











