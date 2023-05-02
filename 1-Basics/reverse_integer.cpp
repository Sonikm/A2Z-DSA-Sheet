#include<iostream>
using namespace std;

    int reverse(int x) {
        
      long long int ans = 0, digit;

        while(x) {
            digit = x%10;
            ans = ans*10 + digit;

            if((ans > INT_MAX) || (ans < INT_MIN)) return 0;

            x /= 10;
        }

        return x < 0 ? -ans : ans;

    }

int main() {

    int testCase;
    cout << "Enter your Input: ";
    cin >> testCase;
    cout << "Output: " << reverse(testCase) << endl;

}