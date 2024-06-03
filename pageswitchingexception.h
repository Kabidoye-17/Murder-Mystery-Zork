#ifndef PAGESWITCHINGEXCEPTION_H
#define PAGESWITCHINGEXCEPTION_H
using namespace std;
#include <exception>
#include <string>


class pageSwitchingException : public std::exception
{
private:
    int pn;
    string message;
public:
    pageSwitchingException(const int pn);
    virtual const char* what() const noexcept override;
};


#endif // PAGESWITCHINGEXCEPTION_H
