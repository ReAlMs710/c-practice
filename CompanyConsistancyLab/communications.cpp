#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string greeting(const string& name) {
    return "Hello " + name + ", welcome to the Industry Company Inc!";
}

void streetFormat(string& address) {
    transform(address.begin(), address.end(), address.begin(), ::toupper);
}

string closing(const string& prodName) {
	  return "We hope you enjoy the " + prodName + "!";
}
