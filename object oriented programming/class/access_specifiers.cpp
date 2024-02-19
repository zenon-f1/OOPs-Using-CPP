#include <iostream>
using namespace std;

class Computer
{
private:
    int password;

public:
    int get_password()
    {
        return password;
    }
    void set_password(int password)
    {
        this->password = password;
    }
};
int main()
{
    Computer acer;
    acer.set_password(384484894);
    cout << "Password: " << acer.get_password() << endl;
    return 0;
}