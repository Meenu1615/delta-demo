#include <iostream>
#include<vector>
using namespace std;
int getMinLoc(vector<int> ary,int beg)
{
    int min=ary[beg],loc=beg;
    for(int i=beg;i<ary.size();i++)
    {
        if(min>ary[i])
            {
                min=ary[i];
                loc=i;
            }
    }
    return loc;
}
void doSelectionSort(vector<int> &ary)
{
    for(int j=0;j<ary.size()-1;j++)
    {
        int loc=getMinLoc(ary,j);
            swap(ary[j],ary[loc]);
    }
}
int main()
{
    vector<int> ary={9,7,5,2};
    doSelectionSort(ary);
    
    for(auto val:ary)
    {
        cout<<val<<"  ";
    }

    return 0;
}