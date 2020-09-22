#include<iostream>
using namespace std;
class Calc{
	int a,b;
	public:
		void add(){
			cout<<"Enter the a value\n";
			cin>>a;
			cout<<"Enter the b value\n";
			cin>>b;
			cout<<"Sum of "<<a<<" and "<<b<<" is "<<(a+b);
			
		}
		void sub(){
			cout<<"Enter the a value\n";
			cin>>a;
			cout<<"Enter the b value\n";
			cin>>b;
			cout<<"Difference of "<<a<<" and "<<b<<" is "<<(a-b);
			
		}
		void mul(){
			cout<<"Enter the a value\n";
			cin>>a;
			cout<<"Enter the b value\n";
			cin>>b;
			cout<<"Mul of "<<a<<" and "<<b<<" is "<<(a*b);
			
		}
		void div(){
			cout<<"Enter the a value\n";
			cin>>a;
			cout<<"Enter the b value\n";
			cin>>b;
			cout<<"Div of "<<a<<" and "<<b<<" is "<<(a/b);
			
		}
	~Calc(){
		cout<<"Destructor called!!!\n";
	}	
};
void fun(){
	Calc c;
	char ch,ans;
	cout<<"\nEnter your choice +,-,*,/ :";
	cin>> ch;
	switch(ch){
		case '+': c.add();
				cout<<"\nEnter if you want to perform another opeartion type Y else type N?(Y/N):";
				cin>>ans;
				if(ans=='Y'){
					return fun();
				}
				break;		
		case '-':c.sub();
				cout<<"\nEnter if you want to perform another opeartion type Y else type N?(Y/N):";
				cin>>ans;
				if(ans=='Y'){
					return fun();
				}
				break;
		case '*':c.mul();
				cout<<"\nEnter if you want to perform another opeartion type Y else type N?(Y/N):";
				cin>>ans;
				if(ans=='Y'){
					return fun();
				}
				break;
		case '/':c.div();
				cout<<"\nEnter if you want to perform another opeartion type Y else type N?(Y/N):";
				cin>>ans;
				if(ans=='Y'){
					return fun();
				}
				break;
		default:exit(0);
			
	}
}
int main(){
	fun();
	return 0;
}

