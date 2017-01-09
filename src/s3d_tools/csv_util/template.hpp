#pragma once

#include <Siv3D.hpp>


namespace mt
{


template<typename T>
int
find_first_of
    (CSVReader& _source       ,
     size_t     _column       ,
     T          _target       ,
     int        _first_row_num =
                             0)
{
    for(int i = (_first_row_num < 0 ? 0 : _first_row_num);
        i < (int)_source._get_rows();
        ++i)
    {
        if(_source.getOpt<T>(i, _column) == _target)
        {
            return i;
        }
    }

    return -1;
}


template<typename T>
bool
exist
    (CSVReader& _source       ,
     size_t     _column       ,
     T          _target       ,
     int        _first_row_num =
                             0)
{
    return find_first_of(_source, _column, _target, _first_row_num) != -1;
}


}