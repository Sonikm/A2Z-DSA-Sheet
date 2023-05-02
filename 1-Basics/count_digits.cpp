#include<iostream>
using namespace std;

    int evenlyDivides(int N){
        //code here

        int x = N, r , count = 0;
        
        while(N) {
         r = N%10; // Get last degit
         
         if(r != 0 && x%r == 0) count++;
         
         N /=10;
        }
        
        return count;
    }

int main() {

    int testCase;
    cout << "Enter your Input: ";
    cin >> testCase;
    cout << "Output: " << evenlyDivides(testCase) << endl;

}