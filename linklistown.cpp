#include<bits/stdc++.h>
using namespace std;
class data
{
    int i;
public:
    void getval(int x)
    {
        i=x;
    }
    int retval(void)
    {
        return i;
    }
    data *nextelement;
};

class List
{
    data *head,*tail,*newelement;
public:
    List(){head=tail=newelement=NULL;}
    void add(int item)
    {
        newelement=new data;
        newelement->getval(item);
        newelement->nextelement;
        if(head==NULL)
            head=newelement;
        else
            tail->nextelement=newelement;
        tail=newelement;
    }

    void display()
    {
        data *next;
        next=head;
        while(next!=NULL)
        {
            cout<<"Element's are : "<<next->retval()<<endl;
            next=next->nextelement;
        }
    }

    void khujo(int obj)
    {
        bool found=false;
        data *elem;
        elem=head;
        while(elem!=NULL)
        {
            if((elem->retval())==obj)
                found=true;
                elem=elem->nextelement;
        }
            if(found==true)
            cout<<obj<< " Found in this list...."<<endl;
            else
            cout<<obj<< " Not Found"<<endl;
    }

    void del(int ob)
    {
        data *previous,*nextt,*follow;
        follow=head;
        while((follow->retval())!=ob)
        {
            previous=follow;
            follow=follow->nextelement;
            nextt=follow->nextelement;
        }
        if(follow==head)
        {
            head=head->nextelement;
        }
        else
        {
            previous->nextelement=nextt;
        }
    }
    ~List()
    {
        delete newelement;
    }
};

int main()
{
    List le;
    le.add(10);
    le.add(20);
    le.add(30);
    le.add(40);
    le.add(50);
    cout<<"Displaying all inserted data :- "<<endl;
    le.display();
    cout<<endl<<endl<<endl;
    cout<< "Finding data 10"<<endl;
    cout<<endl;
    le.khujo(10);
    cout<<endl<<endl<<endl;
    cout<< "Deleting data 30"<<endl;
    cout<<endl;
    cout<< "After Deleting 30 ->"<<endl;
    le.del(30);
    le.display();
    cout<<endl<<endl<<endl;
    cout<< "Deleting data 40"<<endl;
    cout<<endl;
    cout<< "After Deleting 40 ->"<<endl;
    le.del(40);
    le.display();
    cout<<endl<<endl<<endl;
    cout<<"Inserting new data 60"<<endl;
    le.add(60);
    cout<<">>>>>>>>>>>>>>"<<endl;
    cout<<endl<<endl<<endl;
    cout<< "Deleting data 10"<<endl;
    cout<<endl;
    cout<< "After Deleting 60 ->"<<endl;
    le.del(60);
    le.display();
}
