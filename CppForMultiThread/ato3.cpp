//#include <iostream>
//#include <atomic>
//#include <Windows.h>
//#include <condition_variable>
//#include <thread>
//#include <future>
//#include <chrono>
//using namespace std;
//mutex mtx;
//condition_variable cv;
//bool ready = false;
//void print_id(int id)
//{
//	unique_lock<mutex> lck(mtx);
//	while (!ready)
//		cv.wait(lck);
//	cout << "thread " << id << '\n';
//
//}
//void go()
//{
//	unique_lock<mutex> lck(mtx);
//	notify_all_at_thread_exit(cv, move(lck));
//	ready = true;
//}
//void function_1()
//{
//	cout << "work function_1" << endl;
//}
//int triple(int x)
//{
//	return x * 3;
//}
//int countdown(int from, int to)
//{
//	int i;
//	for (i = from; i != to; --i)
//	{
//		cout << i << endl;
//		this_thread::sleep_for(chrono::seconds(1));
//	}
//	cout << "Lift off!\n";
//	return from - to;
//
//}
//void mythread()
//{
//
//}
//int main()
//{
//	/*thread threads[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		threads[i] = thread(print_id, i);
//	cout << "10 threads ready to race...\n";
//	thread(go).detach();
//	for (auto& th : threads) 
//		th.join();*/
//
//	//thread t1(function_1);
//
//
//	//Sleep(1000);
//	//t1.detach();
//
//	//t1.join();
//
//
//
//	/*thread foo;
//	thread bar(mythread);
//	cout << "Joinable after construction:\n" << boolalpha;
//    cout << "foo: " << foo.joinable() << '\n';
//	cout << "bar: " << bar.joinable() << '\n';
//
//	if (foo.joinable()) foo.join();
//	if (bar.joinable()) bar.join();
//
//	cout << "Joinable after joining:\n" << boolalpha;
//	cout << "foo: " << foo.joinable() << '\n';
//	cout << "bar: " << bar.joinable() << '\n';*/
//
//
//
//
//	/*packaged_task<int(int, int)> tsk(countdown);
//
//	future<int> ret = tsk.get_future();
//
//	thread th(move(tsk), 10, 0);
//
//	int value = ret.get();
//
//	cout << "The countdown lasted for " << value << " seconds.\n";
//
//	th.join();*/
//
//
//
//
//
//	//packaged_task<int(int)> foo;
//	//packaged_task<int(int)> bar([](int x) {return x * 2; });
//
//	//foo = move(bar);
//
//	//future<int> ret = foo.get_future();
//
//	//thread(move(foo), 10).detach();
//	//
//	//int value = ret.get();
//
//	//cout << "The double of 10 is " << value << ".\n";
//
//
//
//
//	packaged_task<int(int)> tsk(triple);
//
//	future<int> fut = tsk.get_future();
//
//	//thread(move(tsk), 33).detach();
//    tsk(33);
//
//	/*int value = fut.get();
//
//	cout << "The double of 33 is " << value << ".\n";*/
//
//	cout << "The triple of 33 is " << fut.get() << ".\n";
//
//
//	tsk.reset();
//
//	fut = tsk.get_future();
//
//	thread(move(tsk), 99).detach();
//
//	cout << "Thre triple of 99 is " << fut.get() << ".\n";
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}