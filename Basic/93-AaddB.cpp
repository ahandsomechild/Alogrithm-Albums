#include<stdio.h>

int main()
{
    int alphabet[127] = {0};
    char c;
    for(int i = 0; i < 2; i++){          //�����ַ���������ѭ������
        while((c = getchar()) != '\n'){  //�������Ƿ�Ϊ'\n'���ж��ַ��������Ƿ����
            if(alphabet[c] == 0){
                alphabet[c] = 1;
                printf("%c", c);
            }
        }
    }
    return 0;
}