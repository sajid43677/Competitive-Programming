#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

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
int cas = 1;
void solve(){
    cout << "Case " << cas <<": ";
    int arr[10];
    int sum = 0;
    for1(10){
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum/4;
    sort(arr,arr+10);
    int a,b,c,d,e;
    c = sum - arr[0] - arr[9];
    a = arr[1] - c;
    b = arr[0] - a;
    e = arr[8] - c;
    d = arr[9] - e;
    cout << a<<" " << b<<" " << c<<" " << d<<" " << e << endl;
    cas++;
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











