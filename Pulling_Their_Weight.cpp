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

int arr[100005];
void solve(){
    int n;
    cin >> n;
    int sum = 0,sumr = 0;
    for1(n+1){
        cin >> arr[i+1];
        sum +=arr[i+1];
    }
    sum = sum /2;
    sort(arr+1,arr+n+1);
    for1(n+1){
        sumr += arr[i+1];
        if(sumr >= sum){
            if(sumr > sum){
                cout << arr[i+1] << endl;  
            }
            else{
                if(arr[i+1]==arr[i+2]){
                    cout << arr[i+1] << endl; 
                }
                else{
                    cout << arr[i+1]+ 1 << endl;
                }
            }
            return;
        }
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t; */
    //while(t--) 
        solve();
    

}











