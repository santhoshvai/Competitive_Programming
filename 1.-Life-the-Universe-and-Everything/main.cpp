#include <iostream>
using namespace std;

int GetInput() {
  int units;
  if (!(cin >> units)) {
    cout << "Enter Numbers only" << endl;
    return 0;
  } else {
    return units;
  }
}

int main() {
	int number = 0;
	while (true){
		number = GetInput();
		if (number != 42) { cout << number << endl;}
		else {break;}
	
	}
	return 0;
}
