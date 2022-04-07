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

char arr[510][510];
int main()
{
    Boost;
//Read;Write;
    int r,c;
    cin >> r >> c;
    int flg = 0;
    //char arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j]== 'W'){
                if(arr[i-1][j] == 'S' && i-1 > -1){
                    flg = 1;
                    break;
                }
                if(arr[i][j-1] == 'S' && j-1 > -1){
                    flg = 1;
                    break;
                }
                if(arr[i+1][j] == 'S' && i+1 < r){
                    flg = 1;
                    break;
                }
                if(arr[i][j+1] == 'S' && j+1 < c){
                    flg = 1;
                    break;
                }
            }
        }
    }
    if(flg == 1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(arr[i][j] == '.'){
                    cout << 'D';
                    continue;
                }
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    
}











