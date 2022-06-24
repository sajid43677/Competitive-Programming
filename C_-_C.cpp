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

bool checkPalindrome(string str)
{
    int len = str.size();
    string l = str.substr(0,len/2);
    string r = str.substr(len/2,len-len/2);
    //cout << l << " "<< r << endl;
    //if(l == r) return true;
    l = str.substr(len-3,2);
    if(len > 4)r = str.substr(len-5,4);
    
    if(l == "EW" || l == "SN" || r == "ESWN" || r == "WSEN") return true;

    return false;
}

void solve(){
    string s1 = "",s2= "",s3 = "";
    int r,c;
    cin >> r >> c;
    char arr[r][c];
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
            s3 += arr[i][j];
        }
    }
    int len = s3.size();
    int cnt = 0;
    int blkr,blkc;
    char it;
    //cout << s3 << endl;
    for1(len){
        blkr = i/c;
        blkc = i%c;
        s1 = s3[i];
        //cout << blkr << blkc<< endl;
        while(true){
            //cout << s1 <<" "<< cnt << " "<<blkr << " "<< blkc << endl;
            if(arr[blkr][blkc] == 'N'){
                blkr--;
            }
            else if(arr[blkr][blkc] == 'E'){
                blkc++;
            }
            else if(arr[blkr][blkc] == 'W'){
                blkc--;
            }
            else{
                blkr++;
            }
            if(blkc < 0 || blkc >= c || blkr < 0 || blkr >= r){
                break;
            }
            s1 += arr[blkr][blkc];
            if(s1.size() > 2 && checkPalindrome(s1)){
                cnt++;
                //cout << s1 <<" "<< cnt << " "<<blkr << " "<< blkc << endl;
                break;
            }
        }
       // cout<<endl;
    }
    cout << cnt << endl;
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











