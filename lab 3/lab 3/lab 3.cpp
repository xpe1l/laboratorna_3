// дослідження операторів
#include <iostream>

using namespace std;
int main() {
	int password = 1234, numbers;
	cout << "enter password" << endl;
	cin >> numbers;

	if (numbers == password) {
		cout << "the password is correct";
	}
	else if (numbers > password || numbers < password)
		cout << "you entered an incorrect password";

	return 0;
}
