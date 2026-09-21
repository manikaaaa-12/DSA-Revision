#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& nums){
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
}
int main(){
    vector<int> nums={1,2,3,4,5};
    reverseArray(nums);
    cout<<"Reversed Array:";

    for(int x: nums){
        cout<<x<<" ";
    }
    return 0;
}