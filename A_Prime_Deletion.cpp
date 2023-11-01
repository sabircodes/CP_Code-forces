#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string nums;
        cin >> nums;
        int n = nums.size();
        string ans = "";
        char ch ;
        for(int i =0 ; i < n ; i++){
            if(nums[i]=='1'){
                ch='1';
                break;
            }
            else if(nums[i]=='3'){
                ch='3';
                break;
            }
        }

        
        if(ch=='1'){
            cout<<"13"<<endl;
        }
        if(ch=='3'){
            cout<<"31"<<endl;
        }
    }

    return 0;
}
