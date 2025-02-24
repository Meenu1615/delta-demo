#include<iostream>
using namespace std;

int cdigit(int N,int &count){
    if(N==0)
    return 0;
    count++;
    cdigit(N/10,count);
}

int main (){
    int N = 123456;
    int count = 0;
    cdigit(N,count);
    cout<<count;
}