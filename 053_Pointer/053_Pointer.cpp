#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //Deklarasi method
};

void mahasiswa::showNim() { //Implementasi method di luar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };			//Object mhs
	mhs.showNim();				//Member Access Operator


}