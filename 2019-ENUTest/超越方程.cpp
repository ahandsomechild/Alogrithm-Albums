/*
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int t,k,p,m,a,b;

double calc(double x){//一定要用pow()函数，否则求出的幂次方不对
	double res,t1=1,t2=1;//t1用于计算x的p-1次方 ;t2用于计算m的x次方
	t1 = pow(x,p-1);//x的p-1次方
	t2 = pow(m,x);//计算m的x次方
	res = k * p * t1 -  log(m) * t2;
	return res;
}

int main(){
	cin >> t;
	while(t--){
		cin >> k >>  m >> p >> a >> b;
		double mid,left=a ,right = b,ans; //ans表示最后的结果
		double base = 0.00000001; //1e-8
		cout << base<<"\n";
		//二分法求零点
		//由题意知：导函数必单调，且必存在唯一零点
		double vm,vl,vr;//left value, right value
		while(left<=right){
		//	cout<<"left="<<left<<",right="<<right<<"\n";
			mid = (left + right) /2 ;//求终点
			vl = calc(left);
			vr = calc(right);
			vm = calc(mid);
		//	cout <<"vl=" <<vl << ", vm = "<<vm<<",vr="<<vr<<"\n";
			if(vl * vm <= 0){//点在left -> mid
				right = mid-base;
			}
			else{//点在mid-> right
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
//最大值求导数为0
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
		double mid, left = a, right = b, ans; //ans表示最后的结果
		//二分法求零点
		double vm, vl, vr;//left value, right value
		while (left <= right) {
			mid = (left + right) / 2;//求终点
			vl = func(left);
			vr = func(right);
			vm = func(mid);
			if (vl * vm <= 0) {//点在left -> mid
				right = mid - wuchai;
			}
			else {//点在mid-> right
				left = mid + wuchai;
			}
		}
		//cout << "left = "<<left <<",right="<<right<<"\n";
		ans = (left + right) / 2;
		printf("%.8lf\n", ans);
	}
	return 0;
}