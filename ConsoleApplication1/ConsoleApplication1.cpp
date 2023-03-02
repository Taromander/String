#include <iostream>
#include <string>
using namespace std;

int main()
{
	//字串的初始方式
	string str0(10, '*');
	cout << "str0 =" << str0 << endl;

	string str1 = "Hello";
	auto str2 = "World";

	string str3 = str1 + " " + str2 + "!";
	string str3a = "\"Hello \\ World!\"";
	string str3b = R"("Hello \ World!")";
	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "str3=" << str3 << endl;
	cout << "str3a=" << str3a << endl;
	cout << "str3b=" << str3b << endl;

	cout << "str3 capacity =" << str3.capacity() << endl;
	cout << "str3 length(size) =" << str3.size() << endl;
	cout << "str3 max_size =" << str3.max_size() << endl;
	cout << "is str3 empty? =" << boolalpha << str3.empty() << endl;
	cout << "str3[0] =" << str3[0] << endl;
	cout << "str3.at(4) =" << str3.at(4) << endl;
	cout << "str3.front() =" << str3.front() << endl;
}

