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
#define for2(n) for(int i = 1; i <= n;i++)



int main()
{
    Boost;
    //Read;Write;
    int s,b;
    while(true){
        cin >> s >> b;
        if(s == 0 && b == 0){
            break;
        }
        int l,r;
        int ls[s+1] = {0};
        int rs[s+1] = {0};
        for2(s){
            ls[i] = i - 1;
            rs[i] = i + 1;
        }
        ls[1] = -1;
        rs[s] = -1;
        for1(b){
            cin >> l >> r;
            ls[rs[r]] = ls[l];
            if(ls[l] == -1){
                cout << "* ";
            }
            else{
                cout << ls[l] << " ";
            }
            rs[ls[l]] = rs[r];
            if(rs[r] == -1){
                cout << "*" << endl;
            }
            else{
                cout << rs[r] << endl;
            }
        }

        cout << "-" << endl;
    }
    

}











