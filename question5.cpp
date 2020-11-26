/*5. WAP using classes, objects and constructors to represent the class student with following specification 
 Private members 
 Roll no 
 Name 
 6 subjects mark
 Total 
 Public members function to
ASSIGNMENT Accept values from input device to calculate the grand total and display grade. Calculate the total marks*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
    int roll,ns;
    char name[20];
    float total;
    float percentage;
    int *m;

    public:
    student(int r,char *n,int nos)
    {
        roll=r;
        strcpy(name,n);
        ns=nos;
        m=new int[ns];
    }

    void get();
    void cal();
    void display();
};


void student :: get()
{
    for (int i=0;i<ns;i++)
    {
        cout<<"enter the number of subject"<<i+1 <<" marks";
        cin>>m[i];
    }
}

void student ::cal()
{
    total=0;
    for(int i=0;i<ns;i++)
    {
      total=total+m[i];
    }
    percentage=total/ns;
}
    

void  student :: display()
{
        cal();
        cout<<" name"<<name<<endl;
        cout<<"roll no."<<roll<<endl;
        for(int i=0;i<ns;i++)
        {
           cout<<" marks of "<<i+1 <<"subject "<<m[i]<<endl;
        }
        cout<<"total"<<total;
        cout<<"percentage"<<percentage<<endl;

}


int main()
{
    int r,nos;
    char n[20];
    cout<<"enter roll no name and no of subject"<<endl;
    cin>>r>>n>>nos;
    student st(r,n,nos);
    st.get();
    st.display();

}