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

int a,b;

int arr[2][200005];
int mark[2][200005] = {{0}};
void check(int i,int n){
    int c;
    if(a == 0 && b < n-1){
        c = min(arr[a+1][b],arr[a][b+1]);
    }
    else if(a == 1 && b < n-1){
        c = min(arr[a+1][b],arr[a][b+1]);
    }
}

void solve(){
    int n;
    cin >> n;
    for1(2){
        for(int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    a = b = 0;
    for(int i = 1;;i++){

    }
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











