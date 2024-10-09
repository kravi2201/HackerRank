#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
int a;
int b;
string mouse ="Mouse C";
string cat2="Cat B";
string cat1="Cat A";

a=abs(z-x);
b=abs(z-y);

if(a<b){
    return cat1;
}
else if(a>b){
    return cat2;
}
return mouse;

}

int main()
{
    int no_of_test_case;
    int catA;
    int catB;
    int mouse;
    cin>>no_of_test_case;
    while(no_of_test_case--){
        cin>>catA;
        cin>>catB;
        cin>>mouse;
        cout<<catAndMouse(catA,catB,mouse)<<endl;
    }
    return 0;
}
