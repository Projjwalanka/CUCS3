// Inheritance demo

#include<iostream>

using namespace std;

class Sahpe{
	protected:
		double area;
	public:
		void displayArea(){
			cout<<"Area:"<<area<<endl;
		}
		virtual void calculateArea(){
		}
};

class Rectangle: public Sahpe{
	private:
		double len;
		double bre;
	public:
		Rectangle(double l, double b){
			len=l;
			bre=b;
		}
		/*Rectangle(){
		}*/
		void calculateArea(){
			area=len*bre;
		}
};

class CRect:public Rectangle{
	//public:
		/*CRect(){
			area=100;
		}*/
};

class Circle: public Sahpe{
	private:
		double rad;
	public:
		Circle(double r){
			rad=r;
		}
		void calculateArea(){
			area=3.14*rad*rad;
		}
};

class Triangle: public Sahpe{
	private:
		double hight;
		double bre;
	public:
		Triangle(double h, double b){
			hight=h;
			bre=b;
		}

		void calculateArea(){
			area=0.5*(hight*bre);
		}
};

class Sphere: public Sahpe{
	private:
		double rad;
	public:
		Sphere(double r){
			rad=r;
		}
		void calculateArea(){
			area=4*3.14*rad*rad;
		}
};

int main(){
	Rectangle r1(3,6);
	//r1.calculateArea();
	cout<<"Area of the rectangle:\t"<<endl;
	r1.displayArea();
	/*CRect cr;
	cr.displayArea();*/
	Circle c1(3);
	//c1.calculateArea();
	cout<<"Area of the circle:\t"<<endl;
	c1.displayArea();
	Triangle t1(4,5);
	//t1.calculateArea();
	cout<<"Area of the triangle:\t"<<endl;
	t1.displayArea();
	Sphere s1(4);
	s1.calculateArea();
	cout<<"Area of the sphere:\t"<<endl;
	s1.displayArea();

	//Late binding
	Sahpe *s;
	s=&r1;
	s->calculateArea();
	s->displayArea();
	s=&c1;
	s->calculateArea();
	s->displayArea();
	s=&t1;
	s->calculateArea();
	s->displayArea();



}
