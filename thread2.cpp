#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void new_thread();

DWORD WINAPI thread_entry(LPVOID lpParameter)
{
    while (true)
    {
        new_thread();
    }
    return 0;
}

void new_thread()
{
    HANDLE hThread = CreateThread(NULL, 0, thread_entry, NULL, 0, NULL);
}

int main()
{
    thread_entry(NULL);
    return 0;
}
