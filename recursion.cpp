#include<iostream>
#include<vector>
using namespace std;
int bsearch(vector<int>arry,int wanted)
{
    int beg=0;
    int end=arry.size()-1;
   
    while(beg<=end){
   int mid=(beg+end)/2;
    if(wanted==arry[mid])
    return mid;
    else if(wanted<arry[mid])
    end=mid-1;
    else
    beg=mid+1;

}
}
int main()
{
    vector<int>arry={2,3,4,5,6,14};
    int wanted;
    cout<<"enter wanted element:";
    cin>>wanted;
    int rcv=bsearch(arry,wanted);
    cout<<rcv;
    return 0;
}