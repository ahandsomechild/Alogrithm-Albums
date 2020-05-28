/*
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int t,k,p,m,a,b;

double calc(double x){//һ��Ҫ��pow()����������������ݴη�����
	double res,t1=1,t2=1;//t1���ڼ���x��p-1�η� ;t2���ڼ���m��x�η�
	t1 = pow(x,p-1);//x��p-1�η�
	t2 = pow(m,x);//����m��x�η�
	res = k * p * t1 -  log(m) * t2;
	return res;
}

int main(){
	cin >> t;
	while(t--){
		cin >> k >>  m >> p >> a >> b;
		double mid,left=a ,right = b,ans; //ans��ʾ���Ľ��
		double base = 0.00000001; //1e-8
		cout << base<<"\n";
		//���ַ������
		//������֪���������ص������ұش���Ψһ���
		double vm,vl,vr;//left value, right value
		while(left<=right){
		//	cout<<"left="<<left<<",right="<<right<<"\n";
			mid = (left + right) /2 ;//���յ�
			vl = calc(left);
			vr = calc(right);
			vm = calc(mid);
		//	cout <<"vl=" <<vl << ", vm = "<<vm<<",vr="<<vr<<"\n";
			if(vl * vm <= 0){//����left -> mid
				right = mid-base;
			}
			else{//����mid-> right
				left = mid+base;
			}
		}
		//cout << "left = "<<left <<",right="<<right<<"\n";
		ans = (left+right)/2;
		printf("%.8lf\n",ans);

	}
}

*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#define wuchai 0.00000001

using namespace std;
int k, m, p;
double a, b;
//���ֵ����Ϊ0
double func(double x) {
	double t1 = k * p * pow(x, p - 1);
	double t2 = pow(m, x);
	return t1 - log(m) * t2;
}

int main() {
	int t;
	double ans,i;
	int j;
	cin >> t;
	while (t--) {
		cin >> k >> m >> p >> a >> b;
		double mid, left = a, right = b, ans; //ans��ʾ���Ľ��
		//���ַ������
		double vm, vl, vr;//left value, right value
		while (left <= right) {
			mid = (left + right) / 2;//���յ�
			vl = func(left);
			vr = func(right);
			vm = func(mid);
			if (vl * vm <= 0) {//����left -> mid
				right = mid - wuchai;
			}
			else {//����mid-> right
				left = mid + wuchai;
			}
		}
		//cout << "left = "<<left <<",right="<<right<<"\n";
		ans = (left + right) / 2;
		printf("%.8lf\n", ans);
	}
	return 0;
}