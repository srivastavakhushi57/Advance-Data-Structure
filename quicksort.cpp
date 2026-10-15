#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l,j=h;

    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);

        if(i<j){
            swap(&a[i],&a[j]);
        }
    }while(i<j);

    swap(&a[l],&a[j]);
    return j;
}

void quicksort(int a[],int l,int h){
    int j;

    if(l<h){
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

int main(){
    int a[]={2,5,3,6,7,1,8,9,INT_MAX},n=9;
    quicksort(a,0,n-1);
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}