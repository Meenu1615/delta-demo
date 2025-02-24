#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int>arry,int wanted,int beg ,int end)
{
    //int beg=0;
    //int end=arry.size()-1;
    if(beg>end)
    return -1;
    int mid = (beg+end)/2;
    if(arry[mid]==wanted)
    return mid;
    int rcv;
    if(wanted<arry[mid])
    rcv=BS(arry,wanted,beg,mid-1);
    else 

    BS(arry,wanted,end,mid+1);
    return rcv;
}
int main()
{   int wanted;
    vector<int> arry={4,6,8,10,12,14};
    cout<<"Enter wanted element :";
    BS(arry,wanted);
}