{\rtf1}#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int simpleArraySum(vector<int> ar) {
    int size = ar.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=ar[i];
    }
    return sum;

}

int main()
{
    int num;
    vector<int> ar;
    int x;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>x;
        ar.push_back(x);
    }
    cout<<simpleArraySum(ar);
    return 0;
}
