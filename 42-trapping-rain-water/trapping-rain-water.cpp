class Solution {
public:
vector<int>getleftmax(vector<int>& height,int &n)
{
    vector<int>arr1(n);
    arr1[0]=height[0];
    for(int i =1;i<n;i++)
    {
        arr1[i]= max(arr1[i-1],height[i]);
    }
    return arr1;
}
vector<int>getrightmax(vector<int>& height,int &n)
{
    vector<int>arr2(n);
    arr2[n-1]=height[n-1];
    for(int i=n-2;i>-1;i--)
    {
        arr2[i]=max(arr2[i+1],height[i]);
    }
    return arr2;
}
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>leftmax = getleftmax(height,n);
        vector<int>rightmax = getrightmax(height,n);
        int sum =0;
        for(int i=0;i<n;i++)
        {
            int h = min(leftmax[i],rightmax[i])-height[i];
            sum += h;
        }
        return sum;
    }
};