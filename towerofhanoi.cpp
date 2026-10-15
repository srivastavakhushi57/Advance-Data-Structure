#include <iostream>
using namespace std;

void hanoi(int n,char s,char a,char d){
    if(n==0)
    return;

    hanoi(n-1,s,d,a);
    cout<<s<<"->"<<d<<endl;
    hanoi(n-1,a,s,d);
}

int main(){
    hanoi(3,'a','b','c');
}