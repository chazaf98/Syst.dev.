#include <iostream>
#include<cmath>
#include <fstream>


using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("C:\\Users\\User\\OneDrive\\Desktop\\syst.dev..txt");
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}
	int x;
	int i = 0;
	int a;
	int b;
	int c;
	int d;
	double y;
	while (inFile >> x) {
		cout << x;
		if (i == 0)
			a = x;
		else if (i == 1)
			b = x;
		else if (i == 2)
			c = x;
		else if (i == 3)
			d = x;
		i++;

	}
	inFile.close();

	
	y = ((((exp(a) + (3 * (log(c))) / sqrt(b ^ c)) * abs(atan(d)))));

	cout << "y=" << y << endl;
	return 0;
}