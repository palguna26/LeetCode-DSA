class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n - 1;

        // Start from second last index and move backward
        for (int i = n - 2; i >= 0; i--) {
            // If this position can reach or cross the goal
            if (i + nums[i] >= goal) {
                goal = i;  // Move the goalpost backward
            }
        }

        // If goal reaches 0, we can reach the last index
        return goal == 0;
    }
};
