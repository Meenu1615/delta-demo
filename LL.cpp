#include <iostream>
#include<climits>
//@ www.bangloreComputerEducation.com
using namespace std;
class NODE {
    public: 
    int info;
    NODE *next=NULL;
    NODE(int value)
    {
        info=value;
    }
};

class LINKEDList
{
    public:
    void show(NODE *head)
    {
        if(head==NULL)
            {cout<<"List Is Empty...\n";
            return;
            }
            
        NODE *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<"  ";
            ptr=ptr->next;
        }
        
    }
    void showRec(NODE *ptr)
    {
        if(ptr==NULL)
            return;
        
        cout<<ptr->info<<"  ";
        showRec(ptr->next);
    }
    
   int showRecSum(NODE *ptr)
    {
        
    }
    NODE* insertNodeBefore(NODE *head,int wanted,int value)
    {
        NODE *nn=new NODE(value);
        if(head==NULL)
        {
            cout<<"Empty List";
            return NULL;
        }
        NODE *ptr=head;
        NODE *prev=NULL;
        
        if(head->info==wanted)
            {
                nn->next=head;
                return nn;
            }
        
        while(ptr!=NULL)
        {
            if(wanted==ptr->info)
                break;
            prev=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL)
            {
                cout<<"Element Not Found";
                return head;
            }
        
        nn->next=ptr;
        prev->next=nn;
        return head;
    }
};
int main()
{
    LINKEDList obj;
    
    NODE *head=NULL;
    
    obj.show(head);
   
   NODE n1(10);
   NODE n2(20);
   NODE n3(30);
   NODE n4(40);
   obj.insertNodeBefore(head,30,4);
   n1.next=&n2;
   n2.next=&n3;
   n3.next=&n4;
   
   head=&n1;
    //obj.show(head);
    obj.showRec(head);
    
    return 0;
}