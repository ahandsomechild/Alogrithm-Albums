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
		getchar(); // attention:���ջس���
		
		scanf("%[^\n]",pwd1); 
		//[^\n]��ʾһ���뻻���ַ��ͽ������롣�����scanf�������÷���
 //���Ƕ�֪��scanf���ܽ��տո����һ���ܵ��ո�ͽ������룬���Բ�����gets()�Ⱥ���һ������һ���ַ���������ʹ��%[^\n]�Ϳ���һֱ���飬ֱ��������\n���Ž�������
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