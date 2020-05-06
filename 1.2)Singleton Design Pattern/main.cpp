#include <iostream>

class Singleton {
public:
    Singleton(const Singleton&) = delete;
    static Singleton& Get() {
        return s_instance;
    }
private:
    Singleton(){}
    static  Singleton s_instance;

};

 Singleton Singleton::s_instance;


int main()
{
    Singleton& s = Singleton::Get();
    return 0;
}
