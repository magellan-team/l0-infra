#ifndef SFLJSFA_CLJKSWOR_DASOIWU_47561_CBASDUYW
#define SFLJSFA_CLJKSWOR_DASOIWU_47561_CBASDUYW

#include <l0-infra/std/TypeString.h>
#include <sstream>

STDEXT_NS_BEGIN

///////////////////////////////////////////////////////
std::string toBufferString(void* buf, size_t size);
std::string toPointerString(void* buf);

///////////////////////////////////////////////////////
template <typename T>
std::string toString(const T& val)
{
    return toBufferString((void*)&val, sizeof(val));
}

///////////////////////////////////////////////////////
template <typename T>
std::string toString(T* p)
{
    return toPointerString((void*)p);
}

///////////////////////////////////////////////////////
template <typename T>
std::string toString(const T* s)
{
    return toPointerString((void*)s);
}

///////////////////////////////////////////////////////
std::string toString(const std::string& s);
std::string toString(const std::nullptr_t& p);
std::string toString(char* s);
std::string toString(const char* s);
std::string toString(float f);
std::string toString(double d);
std::string toString(long double d);
std::string toString(bool b);
std::string toString(char c);
std::string toString(signed char c);
std::string toString(unsigned char c);
std::string toString(short s);
std::string toString(unsigned short s);
std::string toString(int i);
std::string toString(unsigned int i);
std::string toString(long l);
std::string toString(unsigned long l);

#if (HAMCREST_SUPPORT_LONG_LONG == 1)
std::string toString(long long ll);
std::string toString(unsigned long long ll);
#endif

///////////////////////////////////////////////////////
template <typename T>
std::string toTypeAndValueString(const T& val)
{
    std::stringstream oss;
    oss << "(" << TypeString<T>::value() << ")" 
        << toString(val);
    return oss.str();
}

STDEXT_NS_END

#endif
