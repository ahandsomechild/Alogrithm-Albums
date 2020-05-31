#include<stdio.h>
#include<string.h>

int main(){
	char pwd[100];
	char pwd1[10000];
	int n;
	int sum = 0; // try-times
	int locked = 0,right = 0;
	scanf("%s %d",pwd,&n);
	
	while(1){
		getchar(); // attention:吸收回车键
		
		scanf("%[^\n]",pwd1); 
		//[^\n]表示一读入换行字符就结束读入。这个是scanf的正则用法。
 //我们都知道scanf不能接收空格符，一接受到空格就结束读入，所以不能像gets()等函数一样接受一行字符串，但是使用%[^\n]就可以一直读书，直到碰到’\n’才结束读入
		if(pwd1[0] == '#' && pwd1[1] == '\0'){
			break;
		}
		sum++;
		if(strcmp(pwd,pwd1) == 0){
				printf("Welcome in\n");
				break;
		}else{
			printf("Wrong password: %s\n",pwd1);
			if(sum == n){
				printf("Account locked\n");
				break;
			}
		}
		
	
	}
	
	
	return 0;
}