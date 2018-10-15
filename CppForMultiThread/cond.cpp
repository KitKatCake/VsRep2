//#include <iostream>
//#include <condition_variable>
//#include <mutex>
//#include <thread>
//#include <chrono>
//#include <cstdlib>
//using namespace std;
//
//mutex mtx;
//condition_variable cv;
//bool ready = false;
//void print_id(int id)
//{
//	unique_lock<mutex> lck(mtx);
//	while (!ready)
//		cv.wait(lck);
//	cout << "thread " << id << '\n';
//}
//int value;
//void go()
//{
//	unique_lock<mutex> lck(mtx);
//	ready = true;
//	cv.notify_all();
//}
//
//void read_value()
//{
//	cin >> value;
//	cv.notify_one();
//}
//int main()
//{
//
//	thread threads[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		threads[i] = thread(print_id, i);
//	cout << "10 threads ready to race...\n";
//	go();                      
//
//	for (auto& th : threads) 
//		th.join();
//
//  /*  cout << "Please, enter an integer (I'll be printing dots): \n";
//	thread th(read_value);
//
//	unique_lock<mutex> lck(mtx);
//	while (cv.wait_for(lck,chrono::seconds(1)) == cv_status::timeout)
//	{
//		cout << '.' << endl;
//
//	}
//
//
//	cout << "You entered: " << value << '\n';
//
//	th.join();*/
//
//
//
//
//	return 0;
//}