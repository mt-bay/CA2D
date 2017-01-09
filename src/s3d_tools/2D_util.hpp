#pragma once

#include <Siv3D.hpp>


#include <2D.hpp>

namespace mt
{


mt::xy_t<double>
Vec2_to_xy_t
    (const Vec2& _origin);


template<typename T>
Vec2&
xy_t_to_Vec2
    (const xy_t<T>& _origin)
{
    return Vec2((double)_origin.x, (double)_origin.y);
}


}