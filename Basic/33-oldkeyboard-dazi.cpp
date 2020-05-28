#include<iostream>

using namespace std;

int main(){
//	char error[100];
	char c;
	int i,j;
	int word[26] = {0};
	int number[10] = {0};
	int dang[4] = {0};
	int tag = 0; //ÉÏµµ¼üÊÇ·ñ»µµô
	int space = 0; // ¿Õ¸ñ¼üÊÇ·ñ»µµô
	char str[100001];
	int all = 0;
	int len = 0;

	while((c = getchar()) !='\n'){
		len++;
		if(c == ',' || c == '.' || c == '-' || c == '+'){
			
			if(c == ','){
				dang[0] = 1;
			}else if(c == '.'){
				dang[1] = 1;
			}else if(c == '-'){
				dang[2] = 1;
			}else if(c == '+'){
				dang[3] = 1;
				tag = 1;
			}
		}
		if(c == '_'){
			space = 1;
		}
		if(c >= 'a' && c <= 'z'){
			i = c - 'a';
			word[i] = 1;
		}
		if(c >= 'A' && c <= 'Z'){
			i = c - 'A';
			word[i] = 1;
		}
		if(c >= '0' && c <= '9'){
			i = c - '0'; 
			number[i] = 1;
		}
	}
	
	cin.get(str,100001);
	i = 0;
/*	if(len == 0){
		while(str[i]!='\0'){
			cout << str[i];
		}
		i++;
	}*/
	while(str[i] != '\0'){
		
		if(str[i] >= '0' && str[i] <= '9'){
			j = str[i] - '0'; 
			if(number[j] != 1){
				cout << str[i];
				all = 1;
			}
		}
		if(str[i] >= 'a' && str[i] <= 'z'){
			j = str[i] - 'a';
			if(word[j] != 1){
				cout << str[i];
				all = 1;
			}
		}
		if(str[i] >= 'A' && str[i] <= 'Z'){
			j = str[i] - 'A';
			if(word[j] != 1 && tag == 0){
				cout << str[i];
				all = 1;
			}
		}
		if(str[i] == ',' && dang[0] == 0){
			cout << str[i];
			all = 1;
		}
		if(str[i] == '.' && dang[1] == 0){
			cout << str[i];
			all = 1;
		}
		if(str[i] == '-' && dang[2] == 0){
			cout << str[i];
			all = 1;
		}
		if(str[i] == '+' && dang[3] == 0){
			cout << str[i];
			all = 1;
		}
		if(str[i] == '_' && space == 0){
			cout << "_";
			all = 1;
		}
		i++;
	}

	if(all == 0){
		cout << endl;
	}
	
	return 0;
}