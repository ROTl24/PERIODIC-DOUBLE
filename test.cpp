#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return { left, right };
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return vector<int>();
}

int main()
{
    vector<int> nums;
    int target, n;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> n;
        nums.push_back(n);
    }
    cin >> target;
    vector<int> result = twoSum(nums, target);
    if (result.empty()) {
        cout << "ц╩сп" << endl;
    }
    else {
        cout << "[" << result[0] << "," << result[1] << "]";
    }
    return 0;
}
