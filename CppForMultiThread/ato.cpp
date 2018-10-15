//#include <atomic>
//#include <iostream>
//#include <thread>
//#include <vector>
//using namespace std;
//atomic<bool> ready(false);
//atomic_flag winner = ATOMIC_FLAG_INIT;
//thread::id main_thread_id = this_thread::get_id();
//void is_main_thread()
//{
//	if (main_thread_id == this_thread::get_id())
//	{
//		cout << "This is the main thread.\n";
//	}
//	else
//		cout << "This is not the main thread.\n";
//}
//void count1m(int id)
//{
//	while(!ready)
//	{
//		this_thread::yield();
//	}
//	for (volatile int i = 0; i < 1000000; i++)
//	{ }
//
//	if (!winner.test_and_set())
//	{
//		cout << "thread #" << id << " won!\n";
//	}
//	//cout << id;
//}
//int main()
//{
//	/*thread threads[10];
//	cout << "race of 10 threads that count to 1 million:\n";
//	for (int i = 0; i<10; ++i) threads[i] = thread(count1m, i);
//	ready = true;               
//	for (auto& th : threads) 
//		th.join();
//	cout << '\n';*/
//
//	/*is_main_thread();
//
//	thread th(is_main_thread);
//	th.join();*/
//
//	vector<thread> threads;
//	cout << "spawning 10 threads that count to 1 million...\n";
//	for (int i = 1; i <= 10; ++i) 
//		threads.push_back(thread(count1m, i));
//	ready = true;
//	for (auto& th : threads) 
//		th.join();
//
//
//
//
//	return 0;
//}
//
//
