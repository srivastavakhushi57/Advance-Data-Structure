#include <iostream>
using namespace std;

void merge(int a[],int l,int m,int h){
    int t[100],i=l,j=m+1,k=0;

    while(i<=m && j<=h){
        t[k++]=(a[i]<a[j])?a[i++]:a[j++];
    }
    while(i<=m)t[k++]=a[i++];
    while(j<=h)t[k++]=a[j++];

    for(i=0;i<k;i++){
        a[l+i]=t[i];
    }
}

void mergesort(int a[],int l, int h){
    if(l<h){
        int m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}

int main(){
    int a[]={2,5,6,7,3,1,8,9,4},n=9;
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}