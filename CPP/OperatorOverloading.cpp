//Operator overloading

#include<iostream>

using namespace std;

class Complex{
	private:
		int real;
		int img;
	public:
		Complex(){
			real=0;
			img=0;
		}
		Complex(int real,int img){
			this->real=real;
			this->img=img;
		}

		void display(){
			cout<<real<<" + "<<img<<"i"<<endl;
		}

		Complex add(Complex c1){
			Complex c3;
			c3.real=real+c1.real;
			c3.img=img+c1.img;
			return c3;
		}

		/*Complex operator +(Complex c2){
			Complex c3;
			c3.real=real+c2.real;
			c3.img=img+c2.img;
			return c3;
		}*/
		void operator +(Complex c2)
		{
			real+=c2.real;
			img+=c2.img;
		}
		//Unary operator overloading
		void operator -(){
			real=-real;
			img=-img;
		}

		void operator ++(){
			real++;
			img++;
		}

		Complex operator +(int data){
			Complex c2;
			c2.real=real+data;
			c2.img=img+data;
			return c2;
		}
};

int main(){
	Complex c1(3,2),c2(4,5);
	c1.display();
	c2.display();
	//Complex c3=c1.add(c2);
	//Complex c3=c1+c2;
	//c3.display();
	//c1+c2;
	//c1.display();
	//-c1;
	//c1++;
	Complex c3=c1+5;
	c3=5+c1; // write function for this statement

	c3.display();
	return 0;
}
