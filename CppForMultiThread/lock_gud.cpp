//#include <iostream>
//#include <mutex>
//#include <thread>
//using namespace std; 
//mutex mtx;
//mutex foo, bar;
//void task_a()
//{
//	lock(foo, bar);
//	cout << "task a\n";
//	foo.unlock();
//	bar.unlock();
//}
//
//void task_b()
//{
//
//	int x = try_lock(bar, foo);
//	if (x == -1)
//	{
//		cout << "task b\n";
//		bar.unlock();
//		foo.unlock();
//	}
//	else
//		cout << "[task b failed: mutex " << (x ? "foo" : "bar") << " locked]\n";
//	/*lock(bar, foo);
//	cout << "task b\n";
//	bar.unlock();
//	foo.unlock();*/
//}
//void print_even(int x)
//{
//	if (x % 2 == 0)
//		cout << x << " is even\n";
//	else
//		throw(logic_error("not even"));
//}
//void print_thread_id(int id)
//{
//	try {
//		lock_guard<mutex> lck(mtx);
//		print_even(id);
//	}
//	catch(logic_error &)
//	{
//		cout << "[exception caught]\n";
//	}
//}
//int main()
//{
//	
//	/*thread threads[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		threads[i] = thread(print_thread_id, i+1);
//
//	for (auto &th : threads)
//	{
//		th.join();
//	}*/
//
//	thread th1(task_a);
//	thread th2(task_b);
//
//	th1.join();
//	th2.join();
//
//
//
//	return 0;
//}