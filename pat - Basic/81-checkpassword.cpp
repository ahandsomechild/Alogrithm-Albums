/*
dot 3
ע�⣺

������˵�Ƿǿ��ַ��������ǲ�û��˵�����в�������ո���Ȼ����Ҳ�Ǵ�ġ�
���ԾͲ�����ƽʱ��char���飬��Ϊ����%sֱ�������ַ���ʱ���Կո���Ϊ���������ַ����ı�־����ʱ����Ҫ�õ�getline(cin,psw)������������Ϳ��԰����ո��Իس���Ϊ��������ı�־������������֮ǰ����getchar()��������N֮��Ļس����Ҿ��Ǵ��ڴ˴����������˵Ĳ��Ͳ�����������Ϸ�����ܡ�����Ҳ���Ͱ�������

*/

#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j,len;
	int num_count = 0, word_count = 0 , dot_count = 0, other_count = 0;
	char pwd[81],c;

	scanf("%d",&n);
	getchar(); ////���ȥ������ô����Ϊ���������ֺ������enterΪ��һ�����룬����Ϊ������enter
	for(i=0;i<n;i++){
		gets(pwd);
		len = strlen(pwd);
		if(len < 6){
			printf("Your password is tai duan le.\n");
		}else{
			word_count = 0;
			num_count = 0;
			dot_count = 0;
			other_count = 0;
			for(j=0;j<len;j++){
				if((pwd[j] >= 'a' && pwd[j] <= 'z') || (pwd[j] >= 'A' && pwd[j] <= 'Z')){
					word_count++;
				}else if(pwd[j]>='0' && pwd[j]<='9'){
					num_count++;
				}else if(pwd[j] == '.'){
					dot_count++;
				}else{
					other_count++;
				}
				
			}
			if(other_count){
				printf("Your password is tai luan le.\n");
			}else if(num_count == 0){
				printf("Your password needs shu zi.\n");
			}else if(word_count == 0){
				printf("Your password needs zi mu.\n");
			}else{
				printf("Your password is wan mei.\n");
			}
		}
	}
	return 0;
}