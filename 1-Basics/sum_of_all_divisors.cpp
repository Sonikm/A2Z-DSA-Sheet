#include<iostream>
using namespace std;

    int sumOfAllDivisors(int N){
        //code here

        int i = 1, res = 0;
        
        while(i <= N) { 
          res += i * (N/i);
          i++;
        }
        
        return res;
    }

int main() {

    int testCase;
    cout << "Enter your Input: ";
    cin >> testCase;
    cout << "Output: " << sumOfAllDivisors(testCase) << endl;

}