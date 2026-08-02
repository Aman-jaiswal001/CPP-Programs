/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

#include<iostream>
#include<string>

using namespace std;

class Solution {
    public:
    bool checkPalindrome(string s){
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            while(left< right && !isalnum(s[left])) left++;
            while(left< right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main(){
    Solution s;
    string str = "A man, A plan, a canal: Panama";
    cout<<s.checkPalindrome(str)<<endl;
    return 0;
}