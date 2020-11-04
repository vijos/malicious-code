#include <thread>

void new_thread()
{
    while (true)
    {
        std::thread *th = new std::thread(new_thread);
    }
}

int main()
{
    new_thread();
    return 0;
}
