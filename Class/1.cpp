#include <iostream>
#include <windows.h>
using namespace std;

class Hello {
  
  private : 
	char name[80];

  public:
	int var1, var2;

	void	HelloWorld () {

		cout << "What is your name? " << endl;
		cin >> name ;
		cout << "Hello World, " << name <<  endl;
	}

};



int main () {
  Hello test;
  test.HelloWorld();

  system("pause");
  return 0;
}