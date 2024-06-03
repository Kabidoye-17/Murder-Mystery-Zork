#include "pageswitchingexception.h"

pageSwitchingException::pageSwitchingException(const int pn) : pn(pn) {
    message = to_string(pn) + " is an invalid page number. You cannot go here";
}

const char* pageSwitchingException::what() const noexcept {
    return message.c_str();
}
