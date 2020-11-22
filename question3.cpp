/* question 3.WAP that reads records of n students and sort them in descending order of their mark.*/
#include<iostream>
using namespace std;

class students
{
    int roll;
    int age;
    char name[50];
    float marks;

    public:
    void getdata()
    {
        cout<<"enter the roll no:";
        cin>>roll;
        cout<<"enter the age: ";
        cin>>age;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the marks:";
        cin>>marks;
    }

    void display()
    {
        cout<<"ROLL NO :"<<roll<<endl;
        cout<<"AGE:"<<age<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"MARKS:"<<marks<<endl;
    }

    void sort(students s[],int n)
   {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                if(s[j].marks<s[j+1].marks)
                {
                    students temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
        

    }


};

int main()
{
    int i,n;
    cout<<"enter the number of students:"<<endl;
    cin>>n;
    students s[n];
    for(i=0;i<n;i++)
    {
        s[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    cout<<"after sorting:"<<endl;
    s[0].sort(s,n);
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
   
    

}