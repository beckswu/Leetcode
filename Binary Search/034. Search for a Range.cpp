
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        vector<int>res = {-1,-1};
        if(r==l-1) return res;
        while(l<=r && (nums[l]!=target|| nums[r]!=target)){
            int mid = l+(r-l)/2;
            if(nums[mid]<target) l = mid+1;
            else if(nums[mid]>target) r = mid-1;
            else{
                if(nums[l]!=target) l++;
                else if(nums[r]!=target) r--;
            }
        }
        if(nums[l]==target && nums[r]==target) res = {l,r};
        return res;
    }   
};


class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        auto ub = upper_bound(nums.begin(), nums.end(), target);
        if (distance(lb, ub) == 0) {
            ans.push_back(-1);
            ans.push_back(-1);
        } else {
            ans.push_back(lb - nums.begin());
            ub--;
            ans.push_back(ub - nums.begin());
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(),nums.end(),target);
        auto it2 = upper_bound(nums.begin(),nums.end(),target);
        if (distance(it, it2) == 0) return {-1,-1};
        else return {it-nums.begin(), --it2 - nums.begin()};
    }   
};







class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        const int begin = lower_bound(nums, target);
        const int end = upper_bound(nums, target);

        if (begin < nums.size() && nums[begin] == target) {
            return {begin, end - 1};
        }

        return {-1, -1};
    }

private:
    int lower_bound(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size();
        // Find min left s.t. A[left] >= target.
        while (left < right) {
            const auto mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int upper_bound(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size();
        // Find min left s.t. A[left] > target.
        while (left < right) {
            const auto mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};




class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        const int begin = lower_bound(nums, target);
        const int end = upper_bound(nums, target);

        if (begin < nums.size() && nums[begin] == target) {
            return {begin, end - 1};
        }

        return {-1, -1};
    }

private:
    int lower_bound(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        // Find min left s.t. A[left] >= target.
        while (left <= right) {
            const auto mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int upper_bound(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        // Find min left s.t. A[left] > target.
        while (left <= right) {
            const auto mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};


vector<int> searchRange(vector<int>& nums, int target) {
    auto bounds = equal_range(nums.begin(), nums.end(), target);
    if (bounds.first == bounds.second)
        return {-1, -1};
    return {bounds.first - nums.begin(), bounds.second - nums.begin() - 1};
}
