#include <iostream>
#include <cstdlib>
using namespace std;
int reused = 42;
int main()
{
    int ival = 1024;
    int cval = 0;
    int *p = &ival;
    void *p1 = &cval;
    int **ppi = &p;
    p1 = p;
    std::cout << *p << ival << p1 << std::endl;
    std::cout << *ppi << "\n" << ppi << "\n" << **ppi << std::endl;
    // // std::cout << p << std::endl;
    // if (p)
    // std::cout << *p << ival << std::endl;
    // *p = cval;
    // if (*p)
    // std::cout << *p << cval << std::endl;
    // int &refVal = ival;
    // refVal = 2;
    // int ii = refVal;
    std::cout << *p << std::endl;
    bool a = -1;
    int b = 42U, c = 10L;
    int i = 017;
    int __Ini{0};
    // std::cout << reused << std::endl;
    int reused = 0;
    // std::cout << reused << std::endl;
    // std::cout << ::reused << std::endl;
    // std::cout << "Hi \x4dO\115!\n" << std::endl;
    // std::cout << _Ini << std::endl;
    return 0;
}