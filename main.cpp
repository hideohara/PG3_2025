#include <stdio.h>
#include <thread>

// using namespace std;


void Thread1() {
	printf("THREAD1\n");
}

void Thread2(int a) {
	printf("THREAD2\n");
	printf("%d\n", a);
}


int main(int argc, char const* argv[]) {

	std::thread thread1(Thread1);
	thread1.join();
	std::thread thread2(Thread2, 3);
	thread2.join();


	return 0;
}