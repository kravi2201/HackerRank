{\rtf1}#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int countingValleys(int steps,string path) {
    int level=0;
    int c=0;
    for(int i=0;i<path.size();i++){
        if(path[i]=='D'){
            level--;
        }
        else if(path[i]=='U'){
            level++;
        }
        
        if(path[i]=='U' && level==0){
            c++;
        }
    }
    
    return c;
}

int main(){
    int num;
    string str;
    cin>>num;
    
        cin>>str;
    
    cout<<countingValleys(num,str);
    return 0;
}