{\rtf1}#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


long aVeryBigSum(vector<long> ar) {
    int size=ar.size();
    long long int sum=0;
    for(int i=0;i<size;i++){
        sum+=ar[i];
    }
    // cout<<;
    return sum;
}

int main()
{
    int num;
    vector<long> ar;
    int x;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>x;
        ar.push_back(x);
    }
    cout<<aVeryBigSum(ar);
    return 0;
}