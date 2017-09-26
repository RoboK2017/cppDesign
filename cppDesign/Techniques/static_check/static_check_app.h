//
//  static_check_app.hpp
//  cppDesign
//
//  Created by Liangchuan Gu on 26/09/2017.
//  Copyright © 2017 Liangchuan Gu. All rights reserved.
//

#ifndef STATIC_CHECK_APP_H_
#define STATIC_CHECK_APP_H_

#include "static_check.h"

namespace RoboK {
    

template <class To, class From>
To safe_reinterpret_cast(From from)
{
    STATIC_CHECK(sizeof(From) <= sizeof(To),
                 Destination_Type_Too_Narrow);
    return reinterpret_cast<To>(from);
}

} // End of namespace RoboK

#endif /* STATIC_CHECK_APP_H_ */
