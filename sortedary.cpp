#include<iostream>
using namespace std;

bool Isort(int ary,int N){
    if(N==-1){
    return (true);
    }

    if(!(ary[N]<ary[N-1])){
    return (false);
    }
}
int main()
{
bool rcv = Isort(ary,N-1);
return (rcv);
}
