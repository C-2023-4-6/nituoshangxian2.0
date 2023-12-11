
#include<iostream>
#include<string>
using namespace std;
int num[26];
int main() {
	string data;
	char x;
	int index = -1;
	cout << "请输入数据：" << endl;
	cin >> data;
	for (int i = 0;i <data.size();i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			index = data[i] - 'a';
		}
		else if (data[i] >= 'A' && data[i] <= 'Z')
		{
			index = data[i] - 'A';
		}
		if (index != -1)
			num[index]++;
		index = -1;
	}
	for (int j = 0;j < 26;j++)
	{
		if (num[j] != 0)
		{
				x = j + 'a';
		cout << 'x' << "的个数为" << num[j]<<endl;
}
	}
	return 0;
}
