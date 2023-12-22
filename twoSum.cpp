#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
vector<int> twoSum(vector<int>& nums, int target){

    map<int, int> indexStore;
    // Storing indexes of elements
    for (int i=0; i<nums.size(); i++){
        indexStore[nums[i]] = i;
    }
    vector<int> result;

    for (int i=0; i<nums.size(); i++){
        int complement = target-nums[i];

        if (indexStore.count(complement) && indexStore[complement]!= i){
            result.push_back(indexStore[complement]);
            result.push_back(i);
            
        }
    }
    return result;
}

int main(){

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);
    int target = 10;
    vector<int> output = twoSum(nums, target);
    cout<< output[0] << endl;
    cout<< output[1] << endl;
 

}

