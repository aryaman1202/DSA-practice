class Solution
{
public:
    int first(vector<int> &nums, int low, int high, int x)
    {
        int res = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] > x)
                high = mid - 1;
            else if (nums[mid] < x)
                low = mid + 1;
            else
            {
                res = mid;
                high = mid - 1;
            }
        }
        return res;
    }
    int last(vector<int> &nums, int low, int high, int x)
    {
        int res = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] > x)
                high = mid - 1;
            else if (nums[mid] < x)
                low = mid + 1;
            else
            {
                res = mid;
                low = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v;
        int n = nums.size();
        int ct = count(nums.begin(), nums.end(), target);
        if (ct == 0)
        {
            v = {-1, -1};
            return v;
        }
        int a = first(nums, 0, n - 1, target);
        v.push_back(a);
        int b = last(nums, 0, n - 1, target);
        v.push_back(b);
        return v;
    }
};