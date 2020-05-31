#include <iostream>
#include <string>
using namespace std;
int main()
{
    string radix, num1, num2;
	int i;
    cin >> radix >> num1 >> num2;
    //��num1��num2�ĳ���תΪ��ͬ
    if (num1.length() > num2.length()) {
        string temp = "";
        for (int i = 0; i < num1.length() - num2.length(); i++) {
            temp += "0";
        }
        num2 = temp + num2;
    }
    if (num2.length() > num1.length()) {
        string temp = "";
        for (int i = 0; i < num2.length() - num1.length(); i++) {
            temp += "0";
        }
        num1 = temp + num1;
    }
    int temp = radix.length() - 1;
    int carry = 0;
    string result = "";
    //�Ը���λ��������
    for ( i = num1.length() - 1; i >= 0; i--) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        int r = radix[temp] - '0';
        temp--;
        if (r == 0) {
            r = 10;
        }
        carry = sum / r;
        result = (char)(sum % r + '0') + result ;
    }
    //�н�λ�һ��н���
    while (carry != 0 && temp >= 0) {
        int sum = carry;
        int r = radix[temp] - '0';
        temp--;
        if (r == 0) {
            r = 10;
        }
        carry = sum / r;
        result = (char)(sum % r + '0') + result ;
    }
    //�н�λ��û���ƣ���ֻ��һ��
    if (carry != 0) {
        result = (char)(carry + '0') + result ;
    }
    int tag = 0;
    for ( i = 0; i < result.length(); i++) {
        if (tag == 1) {
            cout << result[i];
            continue;
        }
        if (result[i] != '0') {
            if (tag == 0) {
                tag = 1;
            }
            cout << result[i];
        }
    }
    if (tag == 0) {//���һ�����Ե㣬���Ǻ����ⲻ���ϰ�������˵�������������أ���
        cout << 0;
    }
}
