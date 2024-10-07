#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int total_element;
    vector<long long int> arr;
    int first_index;
    
    cin>>total_element;
    
    
    long long int x;
    for(int i=0;i<total_element;i++){
        cin>>x;
        arr.push_back(x);
    }
    cin>>first_index;
    arr.erase(arr.begin()+(first_index-1));
    int lower_limit;
    int upper_limit;
    cin>>lower_limit;
    cin>>upper_limit;
    arr.erase(arr.begin()+(lower_limit-1),arr.begin()+(upper_limit-1));
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
