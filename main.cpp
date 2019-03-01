#include <vector>
#include <iostream>
#include <string>
#include <assert.h>
#include "helper.h"

using namespace std;

void printMessage(const string message) {
	cout << message << endl;
}

auto AddFive(int *z) -> void {
	*z += 5;
}
 
int main() {
	
	int z = 47;
	
	for (auto sentence : mystrings) {
		printMessage(sentence.first);
		printMessage(sentence.second);
	}

	cout << "Encrypted version:" << endl;
	listOfPairs_t encryptedMessages = encrypt();
	
	assert(10 == 10);

	cout << "enter a number between 0 and 100" << endl;
	int numberchoice;
	cin >> numberchoice;
	for (int i = 0; i < numberchoice; i++) {
		AddFive(&z);
	}
	cout << z << endl;

	system("pause");
	return 0;
}



