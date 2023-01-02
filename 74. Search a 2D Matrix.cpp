class Solution
{
public:
    int binarySearch(vector<vector<int>> &matrix, int target)
    {
        int l1 = 0, r1 = matrix.size() - 1;
        int n = matrix[0].size();
        int mid1;
        while (l1 <= r1)
        {
            mid1 = (l1 + r1) / 2;
            if (matrix[mid1][0] > target)
            {
                r1 = mid1 - 1;
            }
            if (matrix[mid1][n - 1] < target)
            {
                l1 = mid1 + 1;
            }
            if (matrix[mid1][0] <= target && matrix[mid1][n - 1] >= target)
            {
                break;
            }
        }
        int l2 = 0, r2 = n - 1;
        int mid2;
        while (l2 <= r2)
        {
            mid2 = (l2 + r2) / 2;
            if (matrix[mid1][mid2] > target)
            {
                r2 = mid2 - 1;
            }
            if (matrix[mid1][mid2] < target)
            {
                l2 = mid2 + 1;
            }
            if (matrix[mid1][mid2] == target)
            {
                break;
            }
        }
        if (matrix[mid1][mid2] == target)
        {
            return 1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (binarySearch(matrix, target) == 1)
        {
            return true;
        }
        if (binarySearch(matrix, target) == -1)
        {
            return false;
        }
        return true;
    }
};