#include <iostream>
#include <vector>

using namespace std;

vector<string> fizzbuzz(int n) {
	vector<string> result;
	for (int i = 1; i <= n; i++) {
		string str = "";
		if (i % 3 == 0) {
			str += "Fizz";
		}
		if (i % 5 == 0) {
			str += "Buzz";
		}
		if (str == "") {
			str += to_string(i);
		}
		result.push_back(str);
	}
	return result;
}

int main() {
	vector<string> result = fizzbuzz(15);
	for(auto s: result) {
		cout << s << endl;
	}
}