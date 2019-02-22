#include <vector>
#include <iostream>
#include <string>
#include "helper.h"

using namespace std;

void printMessage(const string message) {
	cout << message << endl;
}

int main() {
	for (auto sentence : mystrings) {
		printMessage(sentence.first);
		printMessage(sentence.second);
	}

	cout << "Encrypted version:" << endl;
	listOfPairs_t encryptedMessages = encrypt();
	system("pause");
	return 0;
}

