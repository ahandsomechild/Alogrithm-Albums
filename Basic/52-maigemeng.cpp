#include<iostream>

using namespace std;

int get_emoj(char p[][5]){
	char c, i=0, j=0;
	while( (c = getchar()) !='\n' ){
		if( c == '[' ){
			while((c = getchar()) != ']'){
				if(c != '\n'){
					p[i][j] = c;
					j++;
				}
			}
			p[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	return i;
}

int main(){
	char hand[10][5], eye[10][5], mouse[10][5];

	int hand_count,eye_count,mouse_count;
	int n,i;
	hand_count = get_emoj(hand);
	eye_count = get_emoj(eye);
	mouse_count = get_emoj(mouse);
	cin >> n;
	int a,b,c,d,e;
	for(i=0;i<n;i++){
		cin >> a >> b >> c >> d >> e;
		if(a>hand_count || e>hand_count || b>eye_count || d>eye_count || c>mouse_count){
			cout << "Are you kidding me? @\\/@" << endl;
		}else if(a<1 || b<1 || c<1 || d<1 || e<1){
			cout << "Are you kidding me? @\\/@" << endl;
		}else{
			cout << hand[a-1] << "(" << eye[b-1] << mouse[c-1] << eye[d-1] << ")" << hand[e-1] << endl;
		}
	}
	
	return 0;
}