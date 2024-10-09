#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int getMoneySpent(vector<int>& keyboards, vector<int>& drives, int b) {
   int size_of_key=keyboards.size();
   int size_of_drive=drives.size();
   long long int count = -1;
   for(int i=0,t;i<size_of_key;i++){
       for(int j=0;j<size_of_drive;j++){
           t = keyboards[i]+drives[j];
           if(t>count&&t<=b){
               count = keyboards[i]+drives[j];
           }
       }
   }
   return count;
}

int main()
{
    vector<int> keyboards;
    vector<int> drives;
    int budget;
    int size_of_key;
    int size_of_drive;
    cin>>budget;
    cin>>size_of_key>>size_of_drive;
    keyboards.resize(size_of_key);
    drives.resize(size_of_drive);
    
    for(int i=0;i<size_of_key;i++){
        cin>>keyboards[i];
    }
    for(int j=0;j<size_of_drive;j++){
        cin>>drives[j];
    }
    
    cout<<getMoneySpent(keyboards,drives,budget);
    
    return 0;
}
