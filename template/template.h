#ifndef __TEMPLATE_H_
#define __TEMPLATE_H_

#include <iostream>
#include <cstring>

template<typename T>
T maxOf(const T &a, const T &b) {
        return (a > b ? a : b);
}

// template vaiable
template<typename T>
constexpr T pi = T(3.141592653589L);

template<typename T>
T areaOfCircle(const T &r) {

	return r * r * pi<T>;
}
#endif //__TEMPLATE_H_
