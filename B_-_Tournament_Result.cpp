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

void solve(){
    int n;
    cin >> n;
    char arr[n][n];
    for1(n){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for1(n){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == '-') continue;
            if(arr[i][j] == 'W'){
                if(arr[j][i] == 'L'){
                    arr[j][i] = '-';
                    continue;
                }
                cout << "incorrect" << endl;
                return;
            }
            if(arr[i][j] == 'L'){
                if(arr[j][i] == 'W'){
                    arr[j][i] = '-';
                    continue;
                }
                cout << "incorrect" << endl;
                return;
            }
            if(arr[i][j] == 'D'){
                if(arr[j][i] == 'D'){
                    arr[j][i] = '-';
                    continue;
                }
                cout << "incorrect" << endl;
                return;
            }
        }
    }
    cout << "correct" << endl;
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











