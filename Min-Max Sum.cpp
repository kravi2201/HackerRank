#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void miniMaxSum(vector<int> arr) {
    int size=arr.size();
    long long int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long int min=0;
    for(int i=0;i<size-1;i++){
        min+=arr[i];
    }
    
    long long int max=0;
    for(int i=1;i<size;i++){
        max+=arr[i];
    }
    
    cout<<min<<" "<<max;
}

int main()
{
    int num=5;
    vector<int> ar;
    int x;
    
    for(int i=0;i<num;i++){
        cin>>x;
        ar.push_back(x);
    }
    miniMaxSum(ar);
    return 0;
}