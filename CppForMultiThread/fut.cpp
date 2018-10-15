//#include <iostream>
//#include <thread>
//#include <future>
//#include <string>
//using namespace std;
//void print_int(future<int> &fut)
//{
//	int x = fut.get();
//
//	cout << "values: " << x << endl;
//}
//
//
//struct Univ {
//	string name;
//	int rank;
//	string city = "unknown";
//};
//
//void t1()
//{
//	Univ u = { "Columbia",10 };
//	cout << u.name << ' ' << u.rank << ' ' << u.city << '\n';
//}
//bool is_prime(int x)
//{
//	cout << "Calculating. Please, wait...\n";
//	int i;
//	for (i = 2; i < x; i++)
//
//		if (x%i == 0)
//			return false;
//		else
//			return true;
//	
//}
//int main()
//{
//	/*promise<int> prom;
//	future<int> fut = prom.get_future();
//
//	thread th1(print_int, ref(fut));
//
//	prom.set_value(10);
//
//	th1.join();*/
//
//	//t1();
//
//
//
//	//future<bool> fut = async(is_prime, 313222313);
//	//cout << "Checking whether 313222313 is prime.\n";
//	//bool ret = fut.get();
//
//	//if (ret)
//	//{
//	//	cout << "It is prime!\n";
//	//}
//	//else
//	//	cout << "It is not prime.\n";
//
//	promise<int> prom;
//	try {
//		prom.get_future();
//		prom.get_future();
//	}
//	catch (future_error &e)
//	{
//		/*if (e.code().category() == future_category())
//		{
//			cerr << "future_error of the future category thrown\n";
//		}*/
//
//		//cout << "future_error caught: " << e.code().message() << '\n';
//		cout << "future_error caught: " << e.what() << '\n';
//	}
//
//
//	return 0;
//}