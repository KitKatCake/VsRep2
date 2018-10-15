//#include <iostream>
//#include <atomic>
//#include <thread>
//#include <sstream>
//#include <vector>
//using namespace std;
//atomic_flag lock_stream = ATOMIC_FLAG_INIT;
//stringstream ss;
//void append_number(int x)
//{
//	while (lock_stream.test_and_set())
//	{
//
//	}
//	ss << "thread #" << x << '\n';
//	lock_stream.clear();
//}
//int main()
//{
//	vector<thread> threads;
//	for (int i = 1; i <= 10; ++i)
//		threads.push_back(thread(append_number, i));
//	for (auto& th : threads) 
//		th.join();
//
//    cout << ss.str();
//
//
//	return 0;
//}
//
//
//
