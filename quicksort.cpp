#include <bits/stdc++.h> 
using namespace std;

int getPivotPos(vector<int> &ary,int s,int e)
{
    int pvt=ary[s];
    int left=s;
    int right=e;
    while(left<=right)
        {
            while(left<=e && ary[left]<=pvt)
                left++;
                
            while(right>=0 && ary[right]>pvt)
                right--;

            if(left<right)
                swap(ary[left],ary[right]);

        }

    swap(ary[s],ary[right]);
    return right;
}
void doQSort(vector<int> &ary,int s,int e)
{
    if(s>=e)
        return;
    int ppos=getPivotPos(ary,s,e);//b1
        doQSort(ary,s,ppos-1);//b2x
        doQSort(ary, ppos+1,e);//b2y
}


vector<int> quickSort(vector<int> arr)
{
    doQSort(arr,0,arr.size()-1);
    return arr;
}

int main()
{
    //dataset
    //55,26,93,17,77,31,44,55,20
    
    vector<int> arr={55,26,93,17,77,31,44,55,20};
    
    vector<int> arr2=quickSort(arr);
    for(auto val : arr2)
        cout<<val<<" ";


}