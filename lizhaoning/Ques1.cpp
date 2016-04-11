#include<bits/stdc++.h>
using namespace std;

int main(){
    //n*m
    int n,m,pool[10000],water,num,level,x;
    float ans;
    num=0;
    cin>>n>>m;
    x = n*m;
    while(n!=0 &&m!=0){
        num++;
        pool[0]=0;
        for(int i=1;i<=n*m;i++){
            cin>>pool[i];
        }
        cin>>water;
        cout<<"Region "<<num<<endl;
        sort(pool,pool+n*m);
        level = 1;
        while(level <= x){
            ans = pool[level];
            water -= pool[level]*100;
            if(water<0){
                float temp = water + pool[level]*100;
                ans += temp/level;
                break;
            }
            level++;
        }
        cout<<"Water level is "<<ans<<"meters."<<endl;
        cout<<(float)level/x<<"percent of the region is under water."<<endl;
        cin>>n>>m;
    }


    return 0;
}
