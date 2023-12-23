#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(){

}

bool containsDuplicate(vector<int>& nums) {
    map<int,int> elementCount;

    for (int n: nums){
        if (elementCount.count(n)){
            return true;
        }

        else{
            elementCount[n] = 1;
        }
    }
    return false;
}