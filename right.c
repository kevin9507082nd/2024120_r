#include<stdio.h>
int lower(int l,int r,int k,int ary[]){
    while(l<r){
        int m=(l+r)/2;
        if(ary[m]<=k){
            l=m+1;
        }else{
            r=m;
        }
    }
    return l;
}
int upper(int l,int r,int k,int ary[]){
    while(l<r){
        int m=(l+r)/2;
        if(ary[m]<k){
            l=m+1;
        }else{
            r=m;
        }
    }
    return r;
}
int main(){
    int n,x,y;
    scanf("%d",&n);
    int r[n];
    for(int k=0;k<n;k++){
        scanf("%d",&r[k]);
    }
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
        x=lower(0,n,i,r);
        y=upper(0,n,j,r);
        printf("%d\n",y-x);
    }
}
