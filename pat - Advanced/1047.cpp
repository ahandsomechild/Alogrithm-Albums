#include<bits/stdc++.h>
using namespace std;
vector<string>course[50002];

int main(){

    int n,k;
    scanf("%d %d",&n,&k);

    for(int i=1;i<=n;++i){
        int c,x;
        string s;
        cin>>s>>c;
        //选的课程
        for(int i=1;i<=c;++i){
            scanf("%d",&x);
            course[x].push_back(s);
        }
    }
    for(int i=1;i<=k;++i){
        printf("%d %d\n",i,course[i].size());
        sort(course[i].begin(),course[i].end());
        for(int j=0;j<course[i].size();++j)
            printf("%s\n",course[i][j].c_str());
            //cout<<course[i][j]<<endl;
    }
    return 0;
}