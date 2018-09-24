#include <iostream>

using namespace std;

class calculadora{
public:
	calculadora(){
	}
	int sumar(int a,int b){
		return a+b;	
	}
	int restar(int a,int b){
		return a-b;	
	}
	~calculadora(){
	}
};
