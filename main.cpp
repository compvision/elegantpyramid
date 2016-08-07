#include <iostream>
using namespace std;

void pyramid(string* out, int levels) {
	int asterisks = 1;
	string output;
	for (int y = levels; y > 0; --y, asterisks += 2)
	{
		
	    for (int s = y - 1; s >= 0; --s)
	        output = output + " ";

	    for (int a = 0; a < asterisks; ++a)
	        output = output + "*";

	    output = output + "\n";
	}
	*out = output;	
}

int main(int argc, char* argv[]) {
	string init = "";
	string* empty = &init;
	int y;
	if (argc !=2) {
		cout << "How many levels should the pyramid be?\n--> ";
		cin >> y;
	}
	else {
		int val = atoi(argv[1]);
		y = val;
	}
	pyramid(empty, y);
	cout << *empty;
}