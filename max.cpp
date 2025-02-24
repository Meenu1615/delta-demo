#include<iostream>
#include<vector>
using namespace std;

int Domax(int ary, &max,int N)
{
    if(N==-1)
    return N ;
    
    if(max<ary[N])
    max=ary[N];
    Domax(ary,max,N-1);
}

int main ()
{
    vector<int>ary={4,8,1,7};
    int max = ary[0];
    
    Domax(ary,max,ary.size());
    
    cout<<max;
}