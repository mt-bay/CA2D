# include <Siv3D.hpp>

#include <vector>

#include "2D/line.hpp"
#include "2D/rect.hpp"
#include "tstring.hpp"

#include "tree/formula.hpp"


mt::tstring
formula_to_str
    (const mt::tree_t<mt::tstring>& _source,
     const size_t                   _tub_num = 0,
     const bool                     _is_back = false);


void Main()
{
	const Font font(30);

	while (System::Update())
	{
		font(L"ようこそ、Siv3D の世界へ！").draw();

		Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });
	}
}



mt::tstring
formula_to_str
    (const mt::tree_t<mt::tstring>& _source ,
     const size_t                   _tub_num,
     const bool                     _is_back)
{
    mt::tstring str;
    for(size_t s = 0; s < _tub_num; ++s)
    {
        if(s < _tub_num - 1)
        {
            str += _T("│");
        }
        else
        {
            str += (_is_back) ? _T("└") : _T("├");
        }
    }
    str += _source.m_data + _T("\n");

    for(auto it = _source.m_child.cbegin();
        it != _source.m_child.cend();
        ++it)
    {
        str += formula_to_str(*it, _tub_num + 1, it + 1 == _source.m_child.cend());
    }

    return str;
}