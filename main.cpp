#include <iostream>
#include <cstdlib> // для використання функції exit()
#include <fstream>

using namespace std;
 
int main()
{
	ofstream outf("SomeText.txt");
	outf << "See line #1!" << endl;
	outf << "See line #2!" << endl;
	outf.close(); // явно закриваємо файл
 
	// Упс, ми дещо забули зробити
	outf.open("SomeText.txt", ios::app);
	outf << "See line #3!" << endl;
	outf.close();
 
	return 0;
}
