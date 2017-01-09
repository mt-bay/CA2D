#include <Siv3D.hpp>

#include <fstream>

#include "kernel.hpp"

#include "../s3d_tools/csv_util.hpp"

namespace sys
{


kernel_t&
kernel_t::get_instance
    ()
{
    static kernel_t instance;
    return instance;
}


mt::xy_t<size_t>
kernel_t::get_window_size
    ()
    const
{
    return m_window_size;
}


void
kernel_t::set_window_size
    (const mt::xy_t<size_t>& _window_size)
{
    m_window_size = _window_size;
}


kernel_t::kernel_t
    ()
{
    m_window_size = mt::xy_t<size_t>(800, 600);
}


kernel_t::~kernel_t
    ()
{
}


bool
kernel_t::read_fixed_config
    ()
{
    CSVReader csv = CSVReader(M_FIXED_CONFIG_FILE_PATH);
    
    if(!csv)
    {
        LOG_ERROR(mt::tstring(_T("failed to open : ")) + 
                  M_FIXED_CONFIG_FILE_PATH             );
        return false;
    }

    mt::tstring target;
    size_t      row;

    target = _T("window_size");
    row    = mt::find_first_of(csv, 0, target);
    set_window_size
        (mt::xy_t<size_t>((row != -1 ? csv.get<size_t>(row, 1) : 800),
                          (row != -1 ? csv.get<size_t>(row, 2) : 800)));

    csv.close();
    return true;
}


bool
kernel_t::read_frexible_config
    ()
{
    CSVReader csv = CSVReader(M_FREXIBLE_CONFIG_FILE_PATH);
    
    if(!csv)
    {
        LOG_ERROR(mt::tstring(_T("failed to open : ")) + 
                  M_FREXIBLE_CONFIG_FILE_PATH          );
        return false;
    }

    csv.close();
    return true;
}


}