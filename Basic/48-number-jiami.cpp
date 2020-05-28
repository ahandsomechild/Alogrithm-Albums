#include<stdio.h>
#include<string.h>

char oddReturn(int a,int b){
	int temp;
	temp  = (a + b) % 13;
	if(temp < 10){
		return '0' + temp;
	}else if( temp == 10 ){
		return 'J';
	}else if( temp == 11 ){
		return 'Q';
	}else{
		return 'K';
	}
}

int main(){
	char a[101],b[101];
	char result[101];
	int odd = 1;  //±êÖ¾ÆæÅ¼Î»
	int l1,l2,l,i;
	int temp1,temp2;
	scanf("%s %s",a,b);
	
	l1 = strlen(a);
	l2 = strlen(b);
	l = l2 > l1? l2 : l1;
	int m = l;
	while(l>=0){
		l--;
		l1--;
		l2--;
		if(l1>=0){
			temp1 = a[l1] - '0';	
		}else{
			temp1 = 0;
		}
		if(l2>=0){
			temp2 = b[l2] - '0';	
		}else{
			temp2 = 0;
		}
		//printf("temp1 -- %d temp2-- %d\n",temp1,temp2);
		if(odd % 2 == 1){
			result[l] = oddReturn(temp1,temp2);
		}else{
			if( temp2 - temp1 < 0 ){
				result[l] = temp2 - temp1 + 10 + '0';
			}else{
				result[l] = '0' + temp2 - temp1;
			}
		}
		odd++;
	//	printf("%c\n",result[l]);
		
	}

	for(i=0;i<m;i++){
		printf("%c",result[i]);
	}
	printf("\n");
	return 0;
}