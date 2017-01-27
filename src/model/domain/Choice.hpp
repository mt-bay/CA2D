#pragma once

#include <Siv3D.hpp>

namespace mdl
{

namespace domain
{


enum ChoiceType;

class Choice
{
public:
	s3d::Texture waitGraphic;
	s3d::Texture activeGraphic;

	ChoiceType type;
};


}


};