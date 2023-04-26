#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>nums;//输入一个数组
	int target;//求和
	int size;//元素个数
	int n;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> n;
		nums.push_back(n);
	}
	cin >> target;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (nums[i] + nums[j] == target) {
				cout << "[" << i << "," << j << "]" << endl;
			}
		}
	}
	return 0;
}