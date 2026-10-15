#include<iostream>
using namespace std;
void printName(int n){
    if(n==0)return;
    cout<<"Manika"<<endl;
    printName(n-1);
}
int main(){
    int n=5;
    printName(n);
    return 0;
}