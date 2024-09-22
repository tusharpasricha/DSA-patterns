// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

//https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
using namespace std;
vector<int>twoSum(vector<int>nums,int target){
    vector<int>ans;
    int i=0;
    int j=nums.size()-1;
    sort(nums.begin(),nums.end());
    while(i<j){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if(nums[i]+nums[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={2,7,11,15};
    int target = 9;
    vector<int>ans = twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

//time
//nlogn+n=>nlogn

// space
// o(1)