// less_functor.h
// Name: JACOB JOLLY
// Class: CSCI 2312

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <cstring>

namespace CS2312 {

    template <typename T>
    class less {
    public:
        bool operator() (const T &a, const T &b) { return (a < b); }
    };

    template <>
    class less<std::string> {
    public:
        bool operator() (const std::string &a, const std::string &b) { return (a < b); }
    };

    template <>
    class less<const char *> {
    public:
        bool operator() (const char * a, const char * b) {
            int boolean = strcmp(a, b);

            return (boolean < 0);
        }
    };

}


#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
