#pragma once
#ifdef DEBUG
#include <iostream>
#define INFO(x) std::cout << x << ", in file: " << __FILE__ << ", line: " << __LINE__ << std::endl;
#else
#define INFO(x)
#endif
