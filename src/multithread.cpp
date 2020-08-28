#include <iostream>
#include <thread>

using namespace std;
static const uint8_t n = 10;
void thread_func(int id)
{
    cout << "Here is the thread function: " << id << endl;
}

int main(void)
{
    thread t[n];
    for (int i = 0; i < n; i++) {
        t[i] = thread(thread_func, i);
    }
    cout << "Main function is running\n";
    for (int i = 0; i < n; i++) {
        t[i].join();
    }
    getchar();
    return 0;
}