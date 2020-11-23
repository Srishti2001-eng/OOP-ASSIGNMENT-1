// 4.
#include<iostream> 
using namespace std;
class vector{
	int size;
	int *cord;
	public:
		vector();
		void modify();
		void mult();
		void multiply();
		void divide();
		void add();
		void display();
		~vector()
		{
			delete cord;
		}
};
int main()
{
	vector p;
	int ch,i=1;
	cout<<"\nEnter"<<endl<<"1.Modify the value of given axis"<<endl<<"2.Multiply by scalar value for a given axis"<<
	endl<<"3.Multiply by scalar value for all axes"<<endl<<"4.Display the vector in the form P(10,20,30)"<<endl<<
	"5.Divide by scalar value for all axes"<<endl<<"6.Add by scalar value for all axes"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			p.modify();
			p.display();
			break;
		case 2:
			p.mult();
			p.display();
			break;
		case 3:
			p.multiply();
			p.display();
			break;
		case 4:
			p.display();
			break;
		case 5:
			p.divide();
			p.display();
			break;
		case 6:
			p.add();
			p.display();
			break;
		default:
			cout<<"Wrong choice"<<endl;
			break;
	}

	return 0;
}
vector::vector()
{
	cout<<"Enter the number of co-ordinates:"<<endl;
	cin>>size;
	cord=new int[size];
	cout<<"Enter "<<size<<" co-ordinates:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>cord[i];
		cout<<" "<<endl;
	}

}
void vector::modify()
{
	int i,num;
	cout<<"Enter which co-ordinate which is to be modified:"<<endl;
	cout<<"1 for X-Axis"<<endl<<"2 for Y-Axis"<<endl<<"3 for Z-Axis"<<endl;
	cin>>i;
	cout<<"Enter new value:"<<endl;
	cin>>num;
	cord[i]=num;
	cout<<endl;
}
void vector::mult()
{
	int num,i;
	cout<<"Enter the number to multiply:"<<endl;
	cin>>num;
	cout<<"Enter axis to be multiplied"<<endl;
	cout<<"1 for X-Axis"<<endl<<"2 for Y-Axis"<<endl<<"3 for Z-Axis"<<endl;
	cin>>i;
	cord[i]=cord[i]*num;
}
void vector::multiply()
{
	int num,i;
	cout<<"Enter the number to multiply:"<<endl;
	cin>>num;
    for(i=0;i<size;i++)
    {
       cord[i]=cord[i]*num;
	}
}
void vector::display()
{
	cout<<" Vector : P(";
    for(int i=0;i<size;i++)
    {
        cout<<cord[i];
        if(i!=size-1)
        cout<<",";
    }
    cout<<")"<<endl;
}
void vector::divide()
{
	int num,i;
	cout<<"Enter the number to divide:"<<endl;
	cin>>num;
    for(i=0;i<size;i++)
    {
       cord[i]=cord[i]/num;
	}	
}
void vector::add()
{
	int num,i;
	cout<<"Enter the number to add:"<<endl;
	cin>>num;
    for(i=0;i<size;i++)
    {
       cord[i]=cord[i]+num;
	}
}