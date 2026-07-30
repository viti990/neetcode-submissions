class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {

        std::size_t row {matrix.size()};
        std::size_t col {matrix[0].size()};
        std::size_t left = 0;
        std::size_t right = row*col - 1;
        if (right == left)
        {
            return matrix[0][0] == target;
        }
        while(left <= right)
        {
            std::size_t i{left + (right-left)/2};
            int val{matrix[i/col][i%col]};
            if (val == target)
                return true;

            if (val < target)
            {
                left = i + 1;
            }
            else if( i != 0)
            {
                right = i - 1;
            }
            else
            {
                break;
            }
        }

        return false;
    }
};
