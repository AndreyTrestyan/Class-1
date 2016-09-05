#include <iostream>
#include <windows.h>
using namespace std;

class Hello {
  
  private : 
	char name[80];
	int age;

  public:
	int var1, var2;

	void	HelloWorld () {

		cout << "What is your name? " << endl;
		cin >> name ;
		cout << "Hello World, " << name <<  endl;
	}

	void Age(){
		cout << "What is your age?" << endl;
		cin >> age;
		cout << "Hmm , " << age << "........" << endl;

	}

};



int main () {
  Hello test;
  test.HelloWorld();
  test.Age();

  system("pause");
  return 0;
}