//
// i-bar.hpp
//

#include <cstdlib>
#include <iostream>

#include "interface.hpp"
#include "typeof.hpp"

template<typename T>
interface IBar
{

public:
  
  virtual ~IBar ( ) {
    std::cout << "IBar<" << type_name<T>() << ">::~IBar ( ) { ... }" << std::endl;
  }
  virtual T getBarData ( ) const = 0;
  virtual void setBarData ( T nData ) = 0;

};


