#include <iostream>
 
using namespace std;
 
int main()
{
    int g1,s1,k1,g2,s2,k2;
    char x='.';    //cin����д��cin>>".">>s1; �������ܽ������
    int P,A,money;
    cin>>g1>>x>>s1>>x>>k1;
    cin>>g2>>x>>s2>>x>>k2;
    P=g1*17*29+s1*29+k1;
    A=g2*17*29+s2*29+k2;
    money=A-P;  //ȫ����������˵Ļ���
    if(money<0)
    {
        money=-money;
        cout<<"-"<<money/17/29<<"."<<money%(17*29)/29<<"."<<money%29<<endl;  //ת���ظ�����ң���������������
    }else
    {
        cout<<money/17/29<<"."<<money%(17*29)/29<<"."<<money%29<<endl;
    }return 0;
}
