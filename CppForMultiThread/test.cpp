//#include <iostream>
//#include <fstream>
//#include <atomic>
//#include<thread>
//#include <vector>
//#include <algorithm>
//#include <utility>
//#include <functional>
//#include <string>
//using namespace std;
//atomic<bool> ready(false);
//atomic<bool> winner(false);
//
//atomic<int> foo(0);
//
//typedef int(*ptr)(int, int);
//ptr pon;
//void set_foo(int x)
//{
//	foo.store(x, memory_order_relaxed);
//}
//void print_foo()
//{
//	int x;
//	do {
//		x = foo.load(memory_order_relaxed);
//	} while (x == 0);
//	cout << "foo: " << x << '\n';
//
//}
//int compare(int a, int b)
//{
//	return a > b ? a : b;
//}
//int sum(int a, int b)
//{
//	return a + b;
//}
//void count1m(int id)
//{
//	while (!ready)
//	{
//
//	}
//	for (int i = 0; i < 100000000; i++)
//	{
//
//	}
//	if (!winner.exchange(true))
//	{
//		cout << "thread #" << id << " won!\n";
//	}
//}
//
//bool compare2(int a, int b)
//{
//	return a > b;
//}
//struct A
//{
//	int a[100];
//};
//struct B
//{
//	int x, y;
//};
//template<typename T>
//T compare3(T a, T b)
//{
//	return a > b ? a : b;
//}
//
////template<typename const T*>
////T* compare3(const T* a, const T* b)const 
////{
////	return a > b ? a : b;
////}
//int main()
//{
//	//ofstream outfile("test.txt");
//	//int n;
//	//for (n = 0; n < 100; n++)
//	//	outfile << n << flush;
//
//	//outfile.close();
//
//	/*ofstream outfile("test2.txt");
//
//	char ch;
//	cout << "Type some text (type a dot to finish):\n";
//	do {
//	ch = cin.get();
//	outfile.put(ch);
//	} while (ch != '.');*/
//
//	/*fstream fs("test.txt", fstream::in | fstream::out);
//
//	fs.close();*/
//
//	//thread first(print_foo);
//	//thread second(set_foo, 10);
//	//first.join();
//	//second.join();
//
//
//
//	//vector<int> iv{ 5,4,3,2,1 };
//	//int a = 2, b = 1;
//
//
//
//	/*for_each(iv.begin(), iv.end(), [b](int &x) {cout << (x + b) << endl; });*/
//
//	/*for_each(iv.begin(), iv.end(), [=](int &x) {return x *= (a + b); cout << x << endl; });*/
//
//	//for_each(iv.begin(), iv.end(), [=](int &x)->int {return x * (a + b); });
//
//
//
//
//	/*vector<thread> threads;
//	cout << "spawning 10 threads that count to 1 million...\n";
//	for (int i = 1; i <= 10; ++i)
//	threads.push_back(thread(count1m, i));
//	ready = true;
//	for (auto& th : threads)
//	th.join();*/
//
//	/*int p = 10;
//	printf_s("%d\n", &p);
//	p = 20;
//	printf_s("%d\n", &p);*/
//
//	//int a = 10;
//
//	/*int *p = &a;
//
//	*p = 20;
//
//	printf_s("%d\n", &a);
//	printf_s("%d\n", &p);*/
//
//
//	/*int &b = a;
//
//	printf_s("%d\n", b);
//	printf_s("%d\n", &b);
//	printf_s("%d\n", &a);
//	printf_s("%d\n", a);
//
//
//	a = 20;
//	printf_s("%d\n", b);
//
//	int *h = NULL;
//
//
//	int  c = 200;
//	h = &c;
//
//	printf_s("%d\n", *h);
//	*/
//
//
//
//
//
//
//	pon = sum;
//
//	printf("%d\n", pon(10, 20));
//
//
//	printf("%d\n", compare(10, 20));
//
//
//
//	function<int(int, int)> func(compare);
//
//
//	printf("%d\n", func(10, 20));
//
//
//
//
//	auto f = [](int a, int b) {return a > b ? a : b; };
//
//	printf("%d\n", f(10, 20));
//
//
//
//
//	int arr[] = { 1,3,33,24,76,189,100 };
//
//	vector<int> vec(arr, arr + 7);
//
//
//	//sort(vec.begin(), vec.end(), compare2);
//	sort(vec.begin(), vec.end());
//
//
//	for (auto v : vec)
//	{
//		cout << v << endl;
//	}
//
//	/*vector<int>::iterator iter;
//
//	for (iter = vec.begin(); iter != vec.end(); ++iter)
//	{
//	cout << *iter << endl;
//	}*/
//
//
//
//	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
//	{
//		cout << *iter << endl;
//	}
//
//	cout << compare3<int>(10, 20) << endl;
//	cout << compare3<char>('a', 'b') << endl;
//	cout << compare3<string>("abcd", "abc") << endl;
//
//
//
//
//	return 0;
//}