#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void gradingStudents(vector<int> grades) {
    int size=grades.size();
    for(int i=0;i<size;i++){
        if(grades[i]>=35&&grades[i]%5==3){
            grades[i]+=2;
        }
        else if(grades[i]>=35&&grades[i]%5==4){
            grades[i]+=1;
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<grades[i]<<endl;
    }
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
    gradingStudents(ar);
    return 0;
}