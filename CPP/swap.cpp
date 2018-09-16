#include<iostream>

using namespace std;
class number{
	private:
		int a;
	public:
		void getData(){
			cout<<"Enter Number:= ";
			cin>>a;
		}
		void display(){
			cout<<"Given number= "<<a<<endl;
		}

		void swap(number &n2){
		    int temp;
		    temp=n2.a;
			n2.a=this->a;
		    this->a=temp;
		}
};
int main(){
	number n1,n2;
	n1.getData();
	n2.getData();
	n1.display();
	n2.display();
	n1.swap(n2);
	n1.display();
	n2.display();
	return 0;
}
