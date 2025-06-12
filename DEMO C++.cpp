#include<iostream>
#include<iomanip>
using namespace std;

class TravelPackage
{ public:
 char package;
 int noAdult, noChild;
 float adultPrice, childPrice, discount, totalPrice;
};

int main()
{
	TravelPackage T;
	
	cout<<"Select travel package <A,B,C> :";
	cin>>T.package;
	
	do
	{
		if(T.package!='A' && T.package!='B' && T.package!='C')
		{
			cout<<"\nInvalid selection"<<endl;
			cout<<"Select travel package <A,B,C> :";
	cin>>T.package;
		}
		
		
	}while(T.package!='A' && T.package!='B' && T.package!='C');
	
		switch(T.package)
		{
			case 'A':
				T.adultPrice=1000.00;
				T.childPrice=500.00;
				break;
				
			case 'B':
				T.adultPrice=800.00;
				T.childPrice=600.00;
				break;
			
			case 'C':
				T.adultPrice=500.00;
				T.childPrice=300.00;
				break;
						
		}
		
	
	
	cout<<"\nEnter no of adult :";
	cin>>T.noAdult;
	cout<<"Enter no of children :";
	cin>>T.noChild;
	
	T.totalPrice=(T.adultPrice*T.noAdult)+(T.childPrice*T.noChild);
	
	if(T.totalPrice>3000)
	{
		T.discount=T.totalPrice*0.20;
		T.totalPrice-=T.discount;
	}
	
	cout<<fixed<<setprecision(2)<<"\nTotal price :RM "<<T.totalPrice;
	cout<<fixed<<setprecision(2)<<"\nTotal price :RM "<<T.totalPrice;
	
	
}






