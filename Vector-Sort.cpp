#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int x;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int j=0;j<size;j++){
        cout<<vec[j]<<" ";
    }
    return 0;
}
