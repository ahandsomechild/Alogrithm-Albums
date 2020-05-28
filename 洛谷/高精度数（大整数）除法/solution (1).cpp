#include <iostream>
#include <cstring>
using namespace std;

//ȥ��ǰ��0
int delPreZero(int x[], int xLen) {
    int i = xLen;

    while (x[i - 1] == 0 && i > 1) {
        i--;
    }

    return i;
}

//�����������ֵ 
void printArr(int x[], int xLen) {
    for (int i = xLen - 1; i >= 0; i--) {
        cout << x[i];
    }
    cout << endl;
}

//��x>=y����true�����򷵻�false 
bool compare(int x[], int y[], int xLen, int yLen) {
    if (xLen < yLen) {
        return false;
    }


    if (xLen == yLen) {
        for (int i = xLen - 1; i >= 0; i--) {
            if (x[i] > y[i]) {
                return true;
            }
            if (x[i] < y[i]) {
                return false;
            }
        }
        return true;
    }
    return true;
}

//��x>=y,��x�ĸ�λ��ȥy��ֻ��һ�Σ�,����ֵΪx���³���
int sub(int x[], int y[], int z[], int xLen, int yLen) {
    int zLoc = xLen - yLen;    //�̵�λ�� 

    //�������������̵�λ�ú���һλ 
    for (int i = 1; i <= yLen; i++) {
        if (x[xLen - i] > y[yLen - i])
            break;

        if (x[xLen - i] < y[yLen - i]) {
            zLoc--;
            break;
        }
    }

    if (zLoc < 0)
        return xLen;

    //��ǰ������x�ĸ�λ�����y��һ�μ������� 
    for (int i = zLoc, j = 0; i < xLen && j < yLen; i++, j++) {
        while (x[i] < y[j]) {
            x[i + 1]--;
            x[i] += 10;
        }

        x[i] -= y[j];
    }

    //�̵���Ӧλ�ü�һ 
    z[zLoc]++;

    //���㵱ǰ������x����ʵ���� 
    while (x[xLen - 1] == 0)
        xLen--;

    if (xLen <= 0)
        xLen = 1;

    return xLen;
}

int main() {
    char as[301], bs[301];

    int a[301] = { 0 }, b[301] = { 0 }, c[301] = { 0 };
    int aLen = 0, bLen = 0, cLen = 1, maxLen = 0;
    int i;

    //���� 
    cin >> as >> bs;
    aLen = strlen(as);
    bLen = strlen(bs);

    //�������ͳ����ֱ������� 
    for (i = 0; i < aLen; i++) {
        a[i] = as[aLen - 1 - i] - '0';
    }

    for (i = 0; i < bLen; i++) {
        b[i] = bs[bLen - 1 - i] - '0';
    }

    //ȥ��ǰ��0
    aLen = delPreZero(a, aLen);
    bLen = delPreZero(b, bLen);

    //ͨ���Ӹ�λ��ʼ������ȥ�����������̺����� 
    cLen = aLen - bLen + 1;
    while (compare(a, b, aLen, bLen)) {
        aLen = sub(a, b, c, aLen, bLen);
    }

    //����̵�λ����0��������� 
    if (cLen < 1) {
        cLen = 1;
    }

    //ȥ���̵�ǰ��0 
    cLen = delPreZero(c, cLen);

    //�����c 
    printArr(c, cLen);

    //�������a 
    printArr(a, aLen);

    return 0;
}