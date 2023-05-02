#include<iostream>
using namespace std;

   long long reverse_bits(long long x) {
        
      long int rev = 0, rem = 0;
      int k = 1;

      while(k<=32) {
        rem = x%2;
        rev = rev * 2 + rem;
        x /= 2;
        k++;
      }

      return rev;

    }

int main() {

    int testCase;
    cout << "Enter your Input: ";
    cin >> testCase;

    long long n = reverse_bits(testCase);
    cout << "Output: " << n << endl;

}

/* || Reverse Bits
   Example 1:

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.
Example 2:

Input:
X = 5
Output:
2684354560 
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get, 
10100000000000000000000000000000,
whose decimal value is 2684354560.
*/