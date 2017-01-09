#include "../2D_util.hpp"


namespace mt
{


mt::xy_t<double>
Vec2_to_xy_t
	(const Vec2& _origin)
{
    return xy_t<double>(_origin.x, _origin.y);
}





}