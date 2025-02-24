#include <iostream>
#include<vector>
using namespace std;

//www.bangloreComputerEducation.com
class MergeSort
{
    public:
    void mergeSort(vector<int> &ary,int s,int e)
    {
        if(s==e)
            return;
        
        int mid=s+(e-s)/2;
        mergeSort(ary,s,mid);
        mergeSort(ary,mid+1,e);
        
        doMerge(ary,s,mid,mid+1,e);
        
    }
    //                                 0       2        3      5
    void doMerge(vector<int> &ary,int sfp,int efp,int  ssp,int esp)
    {
        int l;
        vector<int> temp;
        int i=sfp,j=ssp;
        int m=efp,n=esp;
        
        while(i<=m &&  j<=n)
            {
                if(ary[i]<ary[j])
                    temp.push_back(ary[i++]);
                else
                    temp.push_back(ary[j++]);
            }
            
            for( l=i;l<=m;l++)
                temp.push_back(ary[l]);
            
            for( l=j;l<=n;l++)
                temp.push_back(ary[l]);
            
            /*for(int k=0;k<temp.size();k++)
            {
                ary[sfp+k]=temp[k];
            }
            */
            int k=0;
            for(int l=sfp;l<=esp;l++)
            {
                ary[l]=temp[k]; k++;
            }
     temp.clear();//making the vector empty   
    }
    void show(vector<int> &ary)
    {
        cout<<"\nSorted Array:\n";
        for(auto val : ary)
            cout<<val<<" ";
    }
};

int main()
    {
        vector<int> ary={70,60,40,20,10,5};
        
        MergeSort obj;
        
        obj.mergeSort(ary,0,ary.size()-1);
        obj.show(ary);
        
    }