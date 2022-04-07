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


void solve(int n,int r,int c, int k){
    int arr[r][c];
    int arr1[r][c];
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
            arr1[i][j] = arr[i][j];
        }
    }
    int end = n-1;
    int strt = 0;
    while(k--){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(((arr[i][j] == arr[i][j+1] + 1)|| (arr[i][j] == end && arr[i][j+1] == strt))
                 && j < c - 1){
                    arr1[i][j+1] = arr[i][j];
                }
                if(((arr[i][j] == arr[i][j-1] + 1)|| (arr[i][j] == end && arr[i][j-1] == strt))
                 && j > 0){
                    arr1[i][j-1] = arr[i][j];
                }
                if(((arr[i][j] == arr[i+1][j] + 1)|| (arr[i][j] == end && arr[i+1][j] == strt))
                 && i < r-1){
                    arr1[i+1][j] = arr[i][j];
                }
                if(((arr[i][j] == arr[i-1][j] + 1)|| (arr[i][j] == end && arr[i-1][j] == strt))
                 && i > 0){
                    arr1[i-1][j] = arr[i][j];
                }
            }
        }
        for(int i = 0; i < r;i++){
            for(int j = 0; j < c; j++){
                arr[i][j] = arr1[i][j];
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

     
}

int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
    while(true){
        int n,r,c,k;
        cin >> n >> r >> c >> k;
        if(n == 0 && r == 0 && c == 0 && k==0){
            break;
        } 
        solve(n,r,c,k);   
    }
    

}











