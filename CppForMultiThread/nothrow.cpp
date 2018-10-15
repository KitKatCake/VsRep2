//#include <iostream>
//#include <new>
//#include <cstdlib>
//#include <exception>
//using namespace std;
//void no_memory()
//{
//	cout << "Failed to allocate memory!\n";
//	exit(1);
//}
//int main()
//{
//	//cout << "Attempting to allocate 1 MiB... ";
//	//char *p = new(nothrow) char[1024 * 1024 * 1024];
//	
//	//char *p = new(nothrow) char[1024 * 1024 * 1024 * 1024];
//	/*if (!p)
//	{
//		cout << "Failed!\n";
//	}
//	else
//		cout << "Succeeded!\n";
//	delete[] p;*/
//
//	/*set_new_handler(no_memory);
//
//	cout << "Attempting to allocate 1 GiB...";
//	char* p = new char[1024 * 1024 * 1024];
//	cout << "Ok\n";
//	delete[] p;*/
//
//
//	//try {
//	//	int* p = new int[10000000];
//	//}
//	//catch (bad_array_new_length& e) {
//	//	cerr << "bad_array_new_length caught: " << e.what() << '\n';
//	//}
//	//catch (exception& e) {   // older compilers may throw other exceptions:
//	//	cerr << "some other standard exception caught: " << e.what() << '\n';
//	//}
//
//	try
//	{
//		int* myarray = new int[10000];
//	}
//	catch (bad_alloc& ba)
//	{
//		cerr << "bad_alloc caught: " << ba.what() << '\n';
//	}
//
//
//	
//
//
//	return 0;
//}