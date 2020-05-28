#include <stdio.h>
#include <string.h>

int main()
{
    char a[13][5] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
    char b[13][4] = {"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
//    printf("%s",a[12]);
    int i,j,k,l,n,tmp,m,sum = 0;
    char c[100];
    char d[8];
    scanf("%d",&n);
    getchar();
    for(i = 0;i < n;i++)
    {
        gets(c); 
        if(c[0] <= '9')
        {
            switch(strlen(c))
            {
                case 1:tmp = c[0]-48;break;
                case 2:tmp = (c[0]-48)*10+c[1]-48;break;
                case 3:tmp = (c[0]-48)*100+(c[1]-48)*10+c[2]-48;break;
            }
            if(tmp < 13)
            {
                printf("%s\n",a[tmp]);
            }
            else
            {
                m = tmp/13;
                tmp %= 13;
                if(tmp%13 == 0)
                {
                    printf("%s\n",b[m]);
                    continue;
                }
                printf("%s %s\n",b[m],a[tmp]);
            }
        }
        else
        {
            if(strlen(c) == 3)
            {
                for(j = 0;j < 13;j++)
                {
                    if(a[j][0] == c[0]&&a[j][1] == c[1]&&a[j][2] == c[2])
                    {
                        printf("%d\n",j);
                    }
                    else if(b[j][0] == c[0]&&b[j][1] == c[1]&&b[j][2] == c[2])
                    {
                        printf("%d\n",j*13);
                    }
                }
            }
            else if(strlen(c) != 3)
            {
                for(k = 1;k < 13;k++)
                {
                    if(b[k][0] == c[0]&&b[k][1] == c[1]&&b[k][2] == c[2])
                    {
                        sum += k*13;
                    }
                }
                for(l = 0;l < 13;l++)
                {
                    if(a[l][0] == c[4]&&a[l][1] == c[5]&&a[l][2] == c[6])
                    {
                        sum += l;
                    }
                }
                printf("%d\n",sum);
                sum = 0;
            }    
        }
    }
    
    return 0;
}