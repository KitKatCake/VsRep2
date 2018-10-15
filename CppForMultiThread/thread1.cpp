//#include <thread>
//#include <iostream>
//#include <chrono>
//#include <cstdlib>
//#include <mutex>
//#include <future>
//using namespace std;
//mutex mtx;
//void pause_thread(int n)
//{
//	this_thread::sleep_for(chrono::seconds(n));
//	cout << "pause of " << n << " seconds ended\n";
//}
//void print_block(int n, char c)
//{
//	//mtx.lock();
//	unique_lock<mutex> lck(mtx);
//	for (int i = 0; i < n; ++i)
//	{
//		cout << c;
//	}
//	cout << endl;
//	//mtx.unlock();
//}
//
//bool is_prime(int x)
//{
//	for (int i = 2; i < x; i++)
//		if (x%i == 0)
//			return false;
//		else
//			return true;
//}
//int main()
//{
//	/*cout << "Spawning 3 threads...\n";
//
//	thread t1(pause_thread, 1);
//	thread t2(pause_thread, 2);
//	thread t3(pause_thread, 3);
//
//	cout << "Done spawning threads. Now waiting for them to join:\n";
//	t1.join();
//	t2.join();
//	t3.join();
//	cout << "All threads joined!\n";*/
//
//
//	/*cout << "countdown:\n";
//	for (int i = 10; i>0; --i) {
//		cout << i << endl;
//		this_thread::sleep_for(chrono::seconds(1));
//	}
//	cout << "Lift off!\n";*/
//
//
//	/*thread(pause_thread, 1).detach();
//	thread(pause_thread, 2).detach();
//	thread(pause_thread, 3).detach();
//
//	cout << "Done spawning threads.\n";
//	cout << "(the main thread will now pause for 5 seconds)\n";
//
//	pause_thread(5);*/
//
//
//
//	//thread th1(print_block, 50, '*');
//	//thread th2(print_block, 50, '$');
//
//	//th1.join();
//	//th2.join();
//
//	future<bool> fut = async(is_prime, 44444444443);
//	cout << "checking, please wait";
//	chrono::milliseconds span(100);
//	while (fut.wait_for(span) == future_status::timeout)
//		cout << '.' << flush;
//
//	bool x = fut.get();    
//
//	cout << "\n444444443 " << (x ? "is" : "is not") << " prime.\n";
//
//
//
//
//	system("pause");
//
//	return 0;
//}