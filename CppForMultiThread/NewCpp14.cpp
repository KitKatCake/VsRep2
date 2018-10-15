//#include <iostream>
//#include <numeric>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	vector<int> ivec = { 1,2,3,4 };
//	vector<string> svec = { "red","green","blue" };
//	auto adder = [](auto op1, auto op2) {return op1 + op2; };
//	//auto adder2 = [](auto op1, auto op2)->int {return op1 + op2; };
//
//
//	//cout << "int result : " << accumulate(ivec.begin(), ivec.end(), 0, adder2) << "\n";
//	cout << "int result : " << accumulate(ivec.begin(), ivec.end(), 0, adder) << "\n";
//
//	cout << "string result : " << accumulate(svec.begin(), svec.end(), string(""), adder) << "\n";
//
//
//
//
//	return 0;
//}