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

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

void solve(){
    int n,x,y,z,a;
    cin >> n >> x >> y >> z;
    int x1[n],y1[n],z1[n];
    int mark[n] = {0};
    for1(n){
        cin >> x1[i];
    }
    for1(n){
        cin >> y1[i];
    }
    for1(n){
        z1[i] = 10000*(200 - (x1[i]+y1[i])) + i;
        x1[i] = 10000*(100-x1[i]) + i;
        y1[i] = 10000*(100-y1[i]) + i;
    }
    sort(x1,x1+n);
    sort(y1,y1+n);
    sort(z1,z1+n);
    vector <int> vc;
    for1(x){
        vc.pb(x1[i]%10000 + 1);
        mark[x1[i]%10000] = -1;
    }
    int cnt = 0;
    for1(y){
        while(true){
           // __f("mark i",mark[y1[cnt]%10000]);
           // __f("y1 i",y1[cnt]%10000);
            if(mark[y1[cnt]%10000] != -1){
                vc.pb(y1[cnt]%10000 + 1);;
                mark[y1[cnt]%10000] = -1;
                break;
            }
            cnt++;
        }
    }
    cnt = 0;
    for1(z){
        while(true){
            //__f("mark i",mark[z1[cnt]%10000]);
           // __f("y1 i",z1[cnt]);
            if(mark[z1[cnt]%10000] != -1){
                vc.pb(z1[cnt]%10000 + 1);
                mark[z1[cnt]%10000] = -1;
                break;
            }
            cnt++;
        }
    }
    sort(vc.begin(),vc.end());
    for(auto g:vc){
        cout << g << endl;
    }
}

//FuzzyCarnage
int main()
{
   // Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











