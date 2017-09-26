//
//  compile_time_assertions.hpp
//  cppDesign
//
//  Created by Liangchuan Gu on 26/09/2017.
//  Copyright © 2017 Liangchuan Gu. All rights reserved.
//

#ifndef STATIC_CHECK_H_
#define STATIC_CHECK_H_

namespace RoboK {
    
template<bool> struct CompileTimeChecker
{
    CompileTimeChecker(...);
};
template<> struct CompileTimeChecker<true> {};

    
    ////////////////////////////////////////////////////////////////////////////////
    // macro STATIC_CHECK
    // Invocation: STATIC_CHECK(expr, id)
    // where:
    // expr is a compile-time integral or pointer expression
    // id is a C++ identifier that does not need to be defined
    // If expr is zero, id will appear in a compile-time error message.
    ////////////////////////////////////////////////////////////////////////////////
    
#define STATIC_CHECK(expr, msg) \
{ CompileTimeChecker<((expr) != 0)> ERROR_##msg; (void)ERROR_##msg; }

} // End of namespace RoboK


#endif // STATIC_CHECK_INC_
