#include <iostream>

#define print(x) std::cout << x << std::endl;
#define START   \
    void main() \
    {
#define end \
    return; \
    }       \
    }
#define then {

START
if (1 == 1)
then
    print("hello")
        end
