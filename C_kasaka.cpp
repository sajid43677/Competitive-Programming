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

bool checkPalindrome(string str)
{
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
}

bool checkPalindrome2(string str,int len)
{
    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
}

int main()
{
    Boost;
   //Read;Write;
    string s;
    cin >> s;
    int len = s.length();
    int fa = 0;
    int fl = 0;
    if(checkPalindrome(s)){
        cout << "Yes" << endl;
    }
    
    else{
        int flg = 0;
        for(int i = 0; i < len;i++){
            if(s[i] == 'a'){
                fa++;
            }
            else{
                break;
            }
        }
        for(int i = len - 1; i >=0;i--){
            if(s[i] == 'a'){
                fl++;
            }
            else{
                //cout << s[i] << endl;
                break;
            }
        }
       // cout << fa << endl;
       // cout << fl << endl;
        fa = fl - fa;
        
        if(fa > 0){
            len = len - fa;
            //cout << len << endl;
            if(checkPalindrome2(s,len)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }

    
}











