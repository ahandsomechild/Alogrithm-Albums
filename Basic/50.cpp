/*
VS2019堆栈溢出---定义了过大的数组，运行程序弹出chkstk.asm的解决方法
用new定义数组

98-0-0 95-0-1 93-0-2
42-1-0 37-1-1 81-1-2
53-2-0 20-2-1 76-2-2
58-3-0 60-3-1 76-3-2

*/

#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	int num, i,j,k;
	int m, n;

	cin >> num;
	//new一个number数组
	int* arr = new int[num];
	
	for (i = 0; i < num; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + num); // 降序排列
	//获得m,n行列
	n = abs(sqrt(num));
	
	while (num % n != 0) {
		n--;
	}
	m = num / n;
	/*
	m=3,n=2
	边界值：top=0,down=3,left=0,right=2
	i=0  j = 0 1 2  top =1
	j=2  i = 1 2 3 right = 1
	i=3  j = 1 0   down = 2
	j=0  i = 2 1   left = 1
	i=1  j = 1
	*/
	//new一个二维数组
	int **a;
	a = new int *[m];
	for (i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	k = num - 1;
	int size = num;
	int top = 0, left = -1, right = n, down = m;
	int r = 1, l = 0, up = 0, d = 0; // 光标左右上下
	i = 0, j = 0;
	int flag = 1, sum = 0;
	while (flag) {
		
		if (r) {
			if (sum == num) {
				flag = 0; break;
			}
			//0 1 2
			if (j < right) {
				a[i][j++] = arr[k--];
				sum++;
			}
			if (j == right) {
				i++; right--; j = right;
				r = 0; d = 1;
			}
		}
		if (d) {
			if (sum == num) {
				flag = 0; break;
			}
			if (i < down) {
				a[i++][j] = arr[k--];
				sum++;
			}
			if (i == down) {
				j--; down--; i = down;
				l = 1; d = 0;
			}
		}
		if (l) {
			if (sum == num) {
				flag = 0; break;
			}
			if (j > left) {
				a[i][j--] = arr[k--];
				sum++;
			}
			if (j == left) { 
				i--; left++; j = left;
				up = 1; l = 0;
			}
		}
		if (up) {
			if (sum == num) {
				flag = 0; break;
			}
			if (i > top) {
				a[i--][j] = arr[k--];
				sum++;
			}
			if (i == top) {
				j++; top++; i = top;
				up = 0; r = 1;
			}
		}
		
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j];
			if (j < n - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}