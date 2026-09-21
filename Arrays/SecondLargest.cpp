#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int SecondLargest(vector<int>& nums){
    int largest=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            second=largest;
            largest=nums[i];
        }
        else if(nums[i]>second && nums[i]!=largest){
            second=nums[i];
        }
    }
    return second;
}
int main(){
    vector<int> nums={3,2,1,4,5};
    cout<<"Second Largest="<<SecondLargest(nums);
    return 0;
}