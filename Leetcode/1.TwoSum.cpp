#include <vector>
using namespace std;

class Solution {
public:
    vector <int> twoSum(vector <int>& nums, int target) {
        int i,j;
        for (i = 0; i < nums.size() - 1 ; i++ ) {
            int y = 0;
            for(j = i + 1; j < nums.size(); j++) {
                if( nums[i] + nums[j] == target) {
                    y++;
                    break;}}
        if (y == 1) {break;}} 
        
    nums.clear();
    nums.push_back(i);
    nums.push_back(j);
    
    return nums;}
};