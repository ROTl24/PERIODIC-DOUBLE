#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>nums;//����һ������
	int target;//���
	int size;//Ԫ�ظ���
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