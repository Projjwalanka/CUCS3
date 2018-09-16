//Constructor Demo

#include<iostream>

using namespace std;

class Student{
	private:
		int roll;
		char name[30];
		int cls;
		char address[30];
	public:
		Student(){
			cout<<"Non parameterized constructor"<<endl;
		}

		Student(int roll){
			cout<<"Parameterized constructor"<<endl;
			cout<<"Address of formal parameter roll:"<<&roll<<endl;
			this->roll=roll;
		}

		Student(Student &s){
			cout<<"Copy constructor"<<endl;
			cout<<"Address of s:"<<&s<<endl;
			roll=s.roll;
		}
};

int main(){
	Student s1;
	int a=100;
	cout<<"Address of actual parameter a:"<<&a<<endl;
	Student s2(a);
	cout<<"Address of s2;"<<&s2<<endl;
	Student s3(s2);
}
