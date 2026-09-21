#include<iostream>
#include<vector>
using namespace std;
int smallestElement(vector<int>& nums){
    int smallest=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    return smallest;
}
int main(){
    vector<int> nums={12,5,20,2,8};
    cout<<"Smallest Element="<<smallestElement(nums);
    return 0;
}