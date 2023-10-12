	#include<iostream>
	#include<vector>
	using namespace std;
void bonAppetit(vector<int> bill, int k, int b) {
	int sum = 0;
	for (int i = 0; i < bill.size(); i++) {
		if (i != k)
			sum += bill[i];
	}
	int actual = sum / 2;
	if (actual == b)
		cout << "Bon Appetit";
	else
		cout << abs(actual - b);
}
int main() {
	vector<int> bill{ 3,10,2,9 };
	bonAppetit(bill, 1, 12);
}