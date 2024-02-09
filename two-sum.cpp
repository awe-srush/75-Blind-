#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (auto i = nums.begin(); i < nums.end(); i++) {
        for (auto j = i + 1; j != nums.end(); j++) {
            if (*i + *j == target) {
                int index_i = std::distance(nums.begin(), i);
                int index_j = std::distance(nums.begin(), j);
                return {index_i, index_j};
            }
        }
    }
    return {};
}

int main(){
    vector<int> nums = {2,7,11,5};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (auto i : result){
        cout << "Element :" << i << endl;
    }
}