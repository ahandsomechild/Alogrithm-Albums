#include<stdio.h>
#define N 1000
typedef struct mylist{   //�����ṹ��
    float a; //���
    float b; //������
   float c;  //������ 
}LIST;
int main(){
    LIST p[N],t;
    int i,j,n,d;
    float w=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%f",&p[i].a);   //ÿһ�ֵĿ��
    }
    for(i=0;i<n;i++){
        scanf("%f",&p[i].b);   //ÿһ�ֵ����ۼ�
    }
    for(i=0;i<n;i++){
        p[i].c=p[i].b/p[i].a;   //ÿһ�ֵ�������
    }
    for(i=0;i<n-1;i++){   //ð������
        for(j=i+1;j<n;j++){
            if(p[i].c<p[j].c){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        if(d>=p[i].a){   //��������������������±��Ŀ��
            w=w+p[i].b;   //�����������±�ȫ����
            d=d-p[i].a;   //���=ԭ���-�����������±��Ŀ��
        }
        else if(d<p[i].a){   //������С�������������±����
            w=w+d*p[i].c;   //ֻ����������
            break;   //����ѭ��
        }
    } 
    printf("%.2f",w);   //���2λС��
    return 0;
}