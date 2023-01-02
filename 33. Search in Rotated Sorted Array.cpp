class Solution
{
public:
    int binarySearch(vector<int> &nums, int l, int r, int target)
    {
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] > target)
            {
                r = mid - 1;
            }
            if (nums[mid] < target)
            {
                l = mid + 1;
            }
            if (nums[mid] == target)
            {
                return mid;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int>::iterator it1 = max_element(nums.begin(), nums.end());
        vector<int>::iterator it2 = --nums.end();
        int a = it2 - it1;
        int x1 = binarySearch(nums, 0, n - a - 1, target);
        int x2 = binarySearch(nums, n - a, n - 1, target);
        if (x1 != -1)
        {
            return x1;
        }
        if (x2 != -1)
        {
            return x2;
        }
        return -1;
    }
};