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

int main() {
	string init = "";
	string* empty = &init;
	cout << "How many levels should the pyramid be?\n-->";
	int y;
	cin >> y;
	pyramid(empty, y);
	cout << *empty;
}