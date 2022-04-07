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


int main()
{
    Boost;
   //Read;Write;
    int r,c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0; i < r ;i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < c ;i++){
        for(int j = 0; j < r; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    
}











