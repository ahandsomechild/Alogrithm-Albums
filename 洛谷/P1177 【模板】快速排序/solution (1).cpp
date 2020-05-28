#include<iostream>
#include<cstdlib> 
using namespace std;
const int maxn = 100001;
int a[maxn];
int Partition(int left, int right) {
	int p = rand() % (right - left + 1) + left;
	int temp = a[p];
	a[p] = a[left];
	a[left] = temp;
	temp = a[left];
	while (left < right) {
		while (left<right && a[right]>temp) {
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= temp) {
			left++;
		}
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

void QuickSort(int left, int right) {
	if (left < right) {
		int f = Partition(left, right);
		QuickSort(left, f - 1);
		QuickSort(f + 1, right);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	QuickSort(0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i < n - 1) {
			cout << " ";
		}
	}
	return 0;
}