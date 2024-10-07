#include <bits/stdc++.h>
#include<vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void compareTriplets(vector<int> a, vector<int> b) {
    int size=a.size();
    int ab=0;
    int ba=0;
    int c=0;
    for(int i=0;i<size;i++){
        if(a[i]>b[i]){
            ab++;
        }
        else if(b[i]>a[i]){
            ba++;
        }
        else c++;
    }
    vector<int> abc;
    for(int i=0;i<2;i++){
        if(i==0){
            abc.push_back(ab);
        }
        else abc.push_back(ba);
    }
    for(int i=0;i<2;i++){
        cout<<abc[i]<<" ";
    }
// return 0;
}

int main()
{
  vector<int> a;
  vector<int> b;
  a.resize(3);
  b.resize(3);
  int x;
  for(int i=0;i<3;i++){
      cin>>x;
      a.push_back(x);
  }
  for(int i=0;i<3;i++){
      cin>>x;
      b.push_back(x);
  }
  
  compareTriplets(a,b);
  return 0;
}
