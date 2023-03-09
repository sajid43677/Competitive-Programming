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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}

void solve(){
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    int arr[n+1] = {0};
    vector <pair<int,int>> vc(n);
    for1(n){
        arr[i] = s[i] - '0';
        vc[i] = {arr[i],i};
    }
    sort(all(vc),cmp);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < (int)vc.size();j++){
           // __f("vc[j].second,k,i",vc[j].second,k,i);
            if(vc[j].second - i <= k && vc[j].first > arr[i]){
                //__f("vcj2,k,i,vcj1,arri",vc[j].second,k,i,vc[j].first,arr[i]);
                k = k - (vc[j].second - i);
                int m = vc[j].second;
                for(int l = 0; l < (int)vc.size();l++){
                    if(vc[l].second < m) vc[l].second++;
                }
                while(m>i){
                    swap(arr[m],arr[m-1]);
                    m--;
                }
                vc.erase(vc.begin()+j);
                break;
            }
        }
        int tmp = -1;
        for(int j = 0; j < (int)vc.size();j++){
            if(vc[j].second == i) tmp = j;
        }
        if(tmp != -1) vc.erase(vc.begin()+tmp);
    }
    for1(n){
        cout << arr[i];
    }

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











