class Solution {
public:
int findleft(vector<int>&nums,int target,int n)
{
    int start =0;
    int end=n;
    int first =-1;
    while(start<=end)
    {
        int mid = start + (end- start)/2;
        if(nums[mid]==target)
        {
            first = mid;
            end = mid-1;
        }
        else if(nums[mid]>target)
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
    }
    return first;
}
int findright(vector<int>&nums,int target,int n)
{
    int start = 0;
    int end  =n;
    int right= -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
            right = mid;
            start = mid+1;
        }
        else if(nums[mid]<target)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
    }
    return right;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size()-1;
        int left_most= findleft(nums,target,n);
        int right_most= findright(nums,target,n);
        return {left_most,right_most};
    }
};