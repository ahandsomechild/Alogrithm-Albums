#include<stdio.h>

int main()
{
    int alphabet[127] = {0};
    char c;
    for(int i = 0; i < 2; i++){          //两个字符串，所以循环两次
        while((c = getchar()) != '\n'){  //用输入是否为'\n'来判断字符串输入是否结束
            if(alphabet[c] == 0){
                alphabet[c] = 1;
                printf("%c", c);
            }
        }
    }
    return 0;
}