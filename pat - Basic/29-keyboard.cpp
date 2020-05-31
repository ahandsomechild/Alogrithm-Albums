#include<iostream>
#include<string>
using namespace std;
 
int main()
{
  int c[37]={0};  //保证坏键只输出一次的标记
  string a,b;
  cin>>a>>b;
  int j=0;
  for(int i=0;i<a.length();i++){
    if(a[i]==b[j]) {
      j++;
      continue;
    }
    else{
      if((a[i]>='A')&&(a[i]<='Z')&&(c[a[i]-'A']!=1)){
        c[a[i]-'A']=1;
        cout<<a[i];
      }
      if((a[i]>='a')&&(a[i]<='z')&&(c[a[i]-'a']!=1)){
        c[a[i]-'a']=1;
        
        cout<<char(a[i]-'a'+'A');    
      }
      if((a[i]>='0')&&(a[i]<='9')&&(c[a[i]-'0'+26]!=1)){
        c[a[i]-'0'+26]=1;
        cout<<a[i];
      }
      if((a[i]=='_')&&(c[36]!=1)){
        c[36]=1;
        cout<<a[i];
      }
      
    }
  }
  
  return 0;
}
