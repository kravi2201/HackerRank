#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int count=0;
    int temp=n;
    while(temp!=0){
        int unit=temp%10;
        if(unit==0){
            count=count+0;
        }
        else if(n%unit==0){
            count++;
        }
        temp/=10;
    }
    return count;
}

int main()
{
    int test_case;
    int num;
    cin>>test_case;
    while(test_case--){
        cin>>num;
        cout<<findDigits(num)<<endl;
    }
    return 0;
}