//
// Foo.hpp
//

#include "a-foo.hpp"
#include "i-bar.hpp"
#include "typeof.hpp"

template<typename T>
class Foo : public AFoo<T>, implements IBar<T>
{
  
public:
  
  // Construction & Destruction
  Foo( T x = 0 ) : AFoo<T> ( x ) {
    std::cout << type_name<T>() << " Foo<" << type_name<T>() << ">::Foo(" << type_name<decltype(x)>() << " x = 0) { ... }" << std::endl;
  }

  // IBar implementation
  virtual T getBarData ( ) const
  {
    std::cout << "virtual " << type_name<T>() << " Foo<" << type_name<T>() << ">::GetBarData() const { .. }" << std::endl;
  }

  virtual void setBarData ( T nData )
  {
    std::cout << "virtual void Foo<" << type_name<T>() << ">::SetBarData(" << type_name<decltype(nData)>() << " nData) { .. }" << std::endl;
  }
};



