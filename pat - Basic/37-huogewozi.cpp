#include <iostream>
 
using namespace std;
 
int main()
{
    int g1,s1,k1,g2,s2,k2;
    char x='.';    //cin不能写成cin>>".">>s1; 这样就能解决问题
    int P,A,money;
    cin>>g1>>x>>s1>>x>>k1;
    cin>>g2>>x>>s2>>x>>k2;
    P=g1*17*29+s1*29+k1;
    A=g2*17*29+s2*29+k2;
    money=A-P;  //全部换成最便宜的货币
    if(money<0)
    {
        money=-money;
        cout<<"-"<<money/17/29<<"."<<money%(17*29)/29<<"."<<money%29<<endl;  //转换回各类货币，并解决负数的情况
    }else
    {
        cout<<money/17/29<<"."<<money%(17*29)/29<<"."<<money%29<<endl;
    }return 0;
}
