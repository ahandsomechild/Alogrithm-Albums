#include<stdio.h>
#define N 1000
typedef struct mylist{   //创建结构体
    float a; //库存
    float b; //总利润
   float c;  //利润率 
}LIST;
int main(){
    LIST p[N],t;
    int i,j,n,d;
    float w=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%f",&p[i].a);   //每一种的库存
    }
    for(i=0;i<n;i++){
        scanf("%f",&p[i].b);   //每一种的总售价
    }
    for(i=0;i<n;i++){
        p[i].c=p[i].b/p[i].a;   //每一种的利润率
    }
    for(i=0;i<n-1;i++){   //冒泡排序
        for(j=i+1;j<n;j++){
            if(p[i].c<p[j].c){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        if(d>=p[i].a){   //如果库存大于利润率最大的月饼的库存
            w=w+p[i].b;   //利润率最大的月饼全卖光
            d=d-p[i].a;   //库存=原库存-利润率最大的月饼的库存
        }
        else if(d<p[i].a){   //如果库存小于利润率最大的月饼库存
            w=w+d*p[i].c;   //只卖库存的数量
            break;   //跳出循环
        }
    } 
    printf("%.2f",w);   //输出2位小数
    return 0;
}