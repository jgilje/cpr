#ifndef CPR_XFERFUNCTION_H
#define CPR_XFERFUNCTION_H

#include <functional>

namespace cpr {

class XferFunction {
  public:
    XferFunction(std::function<bool (long dltotal, long dlnow, long ultotal, long ulnow)> fn) 
      : fn(fn) {}

    std::function<bool (long dltotal, long dlnow, long ultotal, long ulnow)> fn;
};

} // namespace cpr

#endif
