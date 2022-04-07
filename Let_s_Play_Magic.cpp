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



int main()

{
   Boost;
  // Read;Write;
    int n,t;
    while(true){
    cin >> n;
    if(n==0) break;
    string vl,su;
    vector <pair<string,string>> vc;
    for1(n){

        pair <string,string> p;

        //if(vl == "0") break;
        cin >>vl >> su;
        p.first = vl;
        p.second = su;
        vc.pb(p);
        //cout << p.first << endl;
       // cout << vc[i].first << endl;
    }
    vector <string> vcc(n);
    for(int i = 0 ; i < n;i++){
        vcc[i] = "-1";
    }
    int len = 0;
    int flg = 0;
    int cnt = 0;

    for(int i = 0; i < n;i++){
        len = vc[i].second.size();
        cnt = 0;
        while(true){
            if(vcc[flg] == "-1"){
                if(cnt == len - 1){
                    vcc[flg] = vc[i].first;
                    break;
                }
                cnt++;
            }
            flg++;
            flg = flg%n;
        }
    }
    for1(n-1){
        cout << vcc[i] << " ";
    }
    cout <<vcc[n-1] << endl;

    }

}











