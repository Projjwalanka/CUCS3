//Function template
#include<iostream>

using namespace std;

template<class T>
void swap1(T a, T b){
	T c;
	c=a;
	a=b;
	b=c;
	cout<<"After swap a="<<a<<"\tb="<<b<<endl;
}

int main(){
	int a=10,b=20;
	swap1(a,b);
	float c= 10.5,d=20.5;
	swap1(c,d);
	char f='P',g='Q';
	swap1(f,g);

	return 0;
}
