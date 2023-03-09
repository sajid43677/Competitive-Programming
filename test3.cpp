#include <bits/stdc++.h>


using namespace std;

vector <string> token;

string readfile(string fn){
    ifstream fin(fn);
    string line,all;
    while(getline(fin,line)){
        all += line+" \n";
    }
    return all;
}


void tokenisation(string s){
    string tmp = "";
    int sz = s.size();
    for(int i = 0; i < sz; i++){
        if(s[i]== '\n') continue;
        if(s[i] == ' '){
            if(tmp.size() == 0) continue;
            token.push_back(tmp);
            tmp = "";
            continue;
        }
        tmp += s[i]; 
    }
    if(tmp.size() != 0) token.push_back(tmp);

}

int main()
{
    string s = readfile("example.cpp");
    tokenisation(s);
    int i = 0;
    for(auto a: token){
        cout <<"Token id "<<i++<<": " << a << endl;
    }
}
