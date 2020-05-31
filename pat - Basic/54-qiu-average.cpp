#include<stdio.h>
#include<string.h>

int main(){
    int N,legnum=0;
    double sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        char temp[100],temp3[100];
        scanf("%s",temp);
        double temp2;
        sscanf(temp,"%lf",&temp2);
        sprintf(temp3,"%.2lf",temp2);
        int flag=0;
        for(int j=0;j<strlen(temp);j++)
            if(temp[j]!=temp3[j]) flag=1;
        if(flag|| temp2 < -1000||temp2>1000){
            printf("ERROR: %s is not a legal number\n",temp);
        }else{
            sum+=temp2;legnum++;
        }
    }
    if(legnum==1)
        printf("The average of 1 number is %.2lf",sum);//numberµ¥Êı
    else if(legnum>1)
        printf("The average of %d numbers is %.2lf",legnum,sum/legnum);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}