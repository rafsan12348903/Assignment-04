#include<iostream>
using namespace std;

template<typename M>
M myEquality(M s, M t)
{
	return (s!=t)?s:(t=0);
}
class Toll
{
	public:
		int cars_crossed;
		int count;
		void get()
		{
			cout<<"The no of cars that have already crossed : \n";
			cin>>cars_crossed;
			count=cars_crossed;
		}
		
		Toll operator ++ (int)
		{
			count++;
		}
};
class X
{
	public :
		int g;
		void get()
		{
			cin>>g;
		}
		
};

class Y
{
	public:
		int h;
		void get()
		{
			cin>>h;
		}
};

class Z : public X, public Y
{
	public:
		int temp;
		void swap()
		{
			temp=g;
			g=h;
			h=temp;
			
			cout<<"After swapping g = "<<g<<" & h = "<<h<<endl;
		}
};

class Wealth
{
	public :
		void show()
		{
			cout<<"The father works hard for his whole life to ensure that his family is being well provided!"<<endl;
		}
		virtual void display()
		{
			cout<<"The father expresses his emotions the least but still has a smile on his face."<<endl;
		}
};

class Son : public Wealth
{
	public:
		void show()
		{
			cout<<"One should be immensely grateful to his/her family. "<<endl;
		}
		void display()
		{
			cout<<"As a son, one should make sure that he pays back well to the living gods, because of whom he stands firm at his destination."<<endl;
		}
};

class Simplification
{
	int a1,a2,a3;
	public :
		void getdata()
		{
			cout<<"Enter value of a1 :"<<endl;
			cin>>a1;
			cout<<"Enter value of a2 :"<<endl;
			cin>>a2;
			cout<<"Enter value of a3 :"<<endl;
			cin>>a3;
		}
		friend int cal(Simplification S)
		{
			return ((S.a1+S.a2)*(S.a3-S.a1));	
		}
};
int main()
{
	cout<<"A program based on various c++ concepts !";
	int k;
	Z z;
	Wealth *O;
	Son p;
	do
	{
		cout<< "Main Menu "<<endl;
		cout<< "1. Concept of template ."<<endl;
		cout<< "2. Concept of Operator Overloading ."<<endl;
		cout<< "3. Multiple Inheritance."<<endl;
		cout<< "4. Virtual Function. "<<endl;
		cout<< "5. Friend Function ."<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>k;
		switch(k)
		{
			case 1 :
				cout<<"The output of the template function is : \n";
				cout<< myEquality<int>(5,5)<<endl;
				break;
			
			case 2:		
				Toll A;
				A.get();
				int l;
				cout<<"--> 1 for entering the toll plaza"<<endl;
				cout<<"--> Any other numeric value to denote avoiding of toll."<<endl;
				cout<<"enter your choice : "<<endl;
				cin>>l;
				do
				{
					if(l==1)
					{
						A++;
					}
					else 
					{
						cout<<"This vehicle(@ present) follows an alternative road. \n";
					}
					cout<<"enter your choice : "<<endl;
					cin>>l;
				}while(l<=1);
				
				cout<<"This vehicle(@ present) follows an alternative road. \n";
				cout<<"The no of vehicles crossed the Toll at present : \n"<<A.count<<endl;
				break;
				
			case 3:
				cout<<"An example to show the concept of multiple inheritance : \n";
				z.X::get();
				z.Y::get();
				z.swap();
				break;
				
			case 4:
				cout<<"This is to explain the use of the virtual function ."<<endl;
				O=&p;
				O->display();
				O->show();
				break;
				
			case 5:
				cout<<"This demonstrates the use of freind function. "<<endl;
				Simplification M;
				M.getdata();
				cout<<"The value of the simplification is : "<<cal(M)<<endl;
				break;
		}
		cout<<"Enter your choice : "<<endl;
		cin>>k;		
	}while(k!=6);
	
	return 0;
	
}