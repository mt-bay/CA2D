#pragma once


#include <Siv3D.hpp>


namespace model
{


namespace domain
{

struct SequenceInfo
{
public:
    SequenceInfo(s3d::String& filePath);

    s3d::String type;
    s3d::INIReader reader;
};


}


}