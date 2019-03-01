#include "helper.h"

const listOfPairs_t mystrings{
	{"villain a", "Welcome to your"},
	{"villain 2", "DEATH"},
	{"popup", "press x to continue"}
};

listOfPairs_t encrypt() {
	listOfPairs_t encryptedList;
	 
	for (auto wordPair : mystrings) {
		pair<string, string> msg = {"",""};
		for (auto letter : wordPair.first) {
			int l = static_cast<int>(letter);
			l += 21;
			msg.first += static_cast<char>(l);
		}
		std::cout << msg.first << std::endl;
		for (auto letter : wordPair.second) {
			int l = static_cast<int>(letter);
			l += 21;
			msg.second += static_cast<char>(l);
		}
		std::cout << msg.second << std::endl;
		
		encryptedList.push_back(static_cast<pair<string, string>>(msg));
	}
	
	return encryptedList;
};