//
// a-foo.hpp
//

#include <cstdlib>
#include <iostream>

#include "typeof.hpp"

template<typename T>
class AFoo
{
  
public:
  
  // Construction & Destruction
  AFoo ( T x ) {
    std::cout << "AFoo<" << type_name<T>() << ">::AFoo( " << type_name<decltype(x)>() << " x ) { ... }" << std::endl;
  }

};

