/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/

#include<iostream>
#include<vector>
using namespace std;

double myPow(double x, int n) {
        long binForm = n;
        if (n < 0) {
            x = 1 / x;
            binForm = -binForm;
        }
        double ans = 1;
        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }

int main(){
    cout<<"pow(2,5) : "<<myPow(2,5);
    return 0;
}