#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<vector<int>> vc;
	vc.push_back(vector<int>());
	vc[0].push_back(1);
	cout << vc[0][0] << endl;
}