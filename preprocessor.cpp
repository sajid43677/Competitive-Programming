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


string commrtRmv(string s){
    int sz = s.size();
    string line = "";
    for(int i = 0; i < sz; i++){
        if(s[i] == '/' && s[i+1] == '/'){
            i++;
            for(; i < sz;i++){
                if(s[i] == '\n') break;
            }
            continue;
        }
        else if(s[i] == '/' && s[i+1] == '*'){
            i++;
            for(; i < sz;i++){
                if(s[i] == '*' && s[i+1] == '/') break;

            }
            i++;
            continue;
        }
        line += s[i];
    }
    return line;
}

int main()
{
    string s = readfile("example.cpp");
    string ln = commrtRmv(s);
    cout << ln << endl;
}
