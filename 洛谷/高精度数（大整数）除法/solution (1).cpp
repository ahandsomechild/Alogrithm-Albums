#include <iostream>
#include <cstring>
using namespace std;

//去除前导0
int delPreZero(int x[], int xLen) {
    int i = xLen;

    while (x[i - 1] == 0 && i > 1) {
        i--;
    }

    return i;
}

//逆序输出数组值 
void printArr(int x[], int xLen) {
    for (int i = xLen - 1; i >= 0; i--) {
        cout << x[i];
    }
    cout << endl;
}

//若x>=y返回true，否则返回false 
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

//若x>=y,则x的高位减去y（只减一次）,返回值为x的新长度
int sub(int x[], int y[], int z[], int xLen, int yLen) {
    int zLoc = xLen - yLen;    //商的位置 

    //若不够减，则商的位置后移一位 
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

    //当前被除数x的高位与除数y做一次减法运算 
    for (int i = zLoc, j = 0; i < xLen && j < yLen; i++, j++) {
        while (x[i] < y[j]) {
            x[i + 1]--;
            x[i] += 10;
        }

        x[i] -= y[j];
    }

    //商的相应位置加一 
    z[zLoc]++;

    //计算当前被除数x的真实长度 
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

    //输入 
    cin >> as >> bs;
    aLen = strlen(as);
    bLen = strlen(bs);

    //被除数和除数分别逆序存放 
    for (i = 0; i < aLen; i++) {
        a[i] = as[aLen - 1 - i] - '0';
    }

    for (i = 0; i < bLen; i++) {
        b[i] = bs[bLen - 1 - i] - '0';
    }

    //去除前导0
    aLen = delPreZero(a, aLen);
    bLen = delPreZero(b, bLen);

    //通过从高位开始连续减去除数，计算商和余数 
    cLen = aLen - bLen + 1;
    while (compare(a, b, aLen, bLen)) {
        aLen = sub(a, b, c, aLen, bLen);
    }

    //解决商的位数是0或负数的情况 
    if (cLen < 1) {
        cLen = 1;
    }

    //去除商的前导0 
    cLen = delPreZero(c, cLen);

    //输出商c 
    printArr(c, cLen);

    //输出余数a 
    printArr(a, aLen);

    return 0;
}