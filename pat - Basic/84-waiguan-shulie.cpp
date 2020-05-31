/*
1
11
12
1121
122111
112213
12221131
1123123111
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    while(--n){
        string ans;
        int cnt = 0; 
        char pre = s[0];
        for(int i = 0; i < s.length(); i++){
            if(s[i] == pre) cnt++;
            else{
                ans += pre;
                ans += cnt + '0';
                pre = s[i];
                cnt = 1;
            }            
        }
        if(cnt > 0) {
            ans += pre;
            ans += cnt + '0';
        }
        s = ans;
    }
    cout << s;
    return 0;
}