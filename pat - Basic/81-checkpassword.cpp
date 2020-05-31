/*
dot 3
注意：

题中虽说是非空字符串，但是并没有说密码中不能输入空格，虽然输入也是错的。
所以就不能用平时的char数组，因为它以%s直接输入字符串时是以空格作为结束输入字符串的标志，此时就需要用到getline(cin,psw)这个函数，它就可以包含空格，以回车作为输入结束的标志，但是在输入之前先用getchar()吸收输入N之后的回车。我就是错在此处，借阅他人的博客才明白文字游戏的秘密。你们也加油啊！！！

*/

#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j,len;
	int num_count = 0, word_count = 0 , dot_count = 0, other_count = 0;
	char pwd[81],c;

	scanf("%d",&n);
	getchar(); ////如果去掉，那么会认为你输入数字后输入的enter为第一个密码，这里为了消除enter
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