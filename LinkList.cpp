#include<bits/stdc++.h>
using namespace std;

//_________class Listelement
class Listelement
{
private:
    int i;
public:
    void setvalue(int x)
    {
        i=x;
    }
    int getvalue()
    {
        return i;
    }
    Listelement *nextelement;
};
//_________________end of Listelement

//class List---------
class List
{
private:
    Listelement *headelement;
    Listelement *tailelement;
    Listelement *newelement;
public:
    List(){headelement=tailelement=newelement=NULL;}
    //-------Member function addelement()

    //start addelement()------
    void addelement(int item)
    {
        newelement=new Listelement;
        newelement->setvalue(item);
        newelement->nextelement=NULL;

        if(headelement != NULL)
            tailelement->nextelement=newelement;
        else
            headelement=newelement;
        tailelement=newelement;
    }

    //end of addelement----------

    //start of displayelement---------

    void displayelement()
    {
        Listelement *currentelement;
        currentelement = headelement;
        cout<< "    Head->";
        while(currentelement != NULL)
        {
            cout<<currentelement->getvalue()<< "->";
        }
        cout<< "NULL" <<endl<<endl;
    }

    //----------------end of displayelement()

    //----------------start of findelement()

    int findelement(int value)
    {
        Listelement *currentelement;
        bool found;
        found=false;
        currentelement = headelement;
        while(currentelement != NULL)
        {
            if(currentelement->getvalue() == value)
            {
                found = true;
                break;
            }
            currentelement = currentelement->nextelement;
        }
        return found;
    }
    //-----------------end of findelement()

    //-----------------start of addordered()

    void addordered(int item)
    {
        Listelement *current,*oldcurrent,*previous,*next;
        newelement->setvalue(item);
        newelement->nextelement = NULL;
        if(headelement == NULL){
            headelement = newelement;
    }
    else
    {
        current=headelement;
        while(current != NULL)
        {
            if(item <= current->getvalue())
            {
                previous=current;
                next = current->nextelement;
                break;
            }
            else
            {
                previous = current;
                next=current->nextelement;
            }
            oldcurrent=current;
            current=current->nextelement;
        }
        if(previous == headelement)
        {
            newelement->nextelement=headelement;
            headelement = newelement;
        }
        else
        {
            if(current == NULL)
            {
                previous->nextelement = newelement;
                newelement->nextelement= next;
            }
            else
            {
                newelement->nextelement = previous;
                oldcurrent->nextelement = newelement;
            }
        }
    }
    current=headelement;
    while(current!=NULL)
    {
        tailelement = current;
        current = current->nextelement;
    }
    }
    //-------------end of addordered()

    //start of deletelement()

    void deleteelement(int item)
    {
        Listelement *current,*foundat,*oldcurrent;
        bool found;
        found=false;
        current=headelement;
        while(current!=NULL)
        {
            if(current->getvalue()==item)
            {
                found=true;
                foundat=current;
                break;
            }
            oldcurrent=current;
            current=current->nextelement;
        }
        if(found)
        {
            if(headelement==foundat)
            {
                headelement=foundat->nextelement;
                foundat->nextelement=NULL;
            }
            else
                {
                    if(foundat->nextelement==NULL)
                        oldcurrent->nextelement=NULL;
                    else
                    {
                        oldcurrent->nextelement=foundat->nextelement;
                        foundat->nextelement=NULL;
                    }
                }
                current=headelement;
                while(current!=NULL)
                {
                    tailelement=current;
                    current=current->nextelement;
                }
        }
    }

    //------------end of Listclass()
    ~List(){delete newelement;}
};


//end of Listclass-----------------

//-----------main() starts here

int main()
{
    List le;
    le.addordered(425);
    le.addordered(225);
    le.addordered(325);
    le.addordered(125);

    cout<< "After adding 4 elements...." <<endl<<endl;
    le.displayelement();

    cout<< "After deleting 325..." <<endl;
    le.deleteelement(325);
    le.displayelement();

    cout<< "After deleting 125...."<<endl;
    le.deleteelement(125);
    le.displayelement();

    cout<< "After deleting 225...."<<endl;
    le.deleteelement(225);
    le.displayelement();
}

