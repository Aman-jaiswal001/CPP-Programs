/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

#include<iostream>
#include<vector>
using namespace std;

int findMajorityelement(vector<int> nums){
    int freq = 0, ans = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,2,2,3,2,3,3};
    cout<<"mejorityElement : "<<findMajorityelement(nums)<<endl;
    
    return 0;
}