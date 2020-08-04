Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Follow up:

A rather straight forward solution is a two-pass algorithm using counting sort.
First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
Could you come up with a one-pass algorithm using only constant space?





class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0, ones=0, twos=0;

        for(auto x: nums){
            if(x==0) zeros++;
            else if(x==1) ones++;
        }

        twos=nums.size()-zeros-ones;

        for(int i=0;i<zeros;i++) nums[i]=0;
        for(int i=zeros;i<zeros+ones;i++) nums[i]=1;
        for(int i=zeros+ones;i<zeros+ones+twos;i++) nums[i]=2;
    }
};





// Dutch national Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0, mid=0, high=n-1;
        while(mid<=high){
            if(nums[mid]==0){    // Step 1
                swap(nums[low], nums[mid]);
                low++; mid++;
            } else if(nums[mid]==1) mid++;    // Step 2
            else {
                swap(nums[mid], nums[high]);    // Step 3
                high--;
            }
        }
    }
};
