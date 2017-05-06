#pragma once

#include <Siv3D.hpp>

namespace model
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

    ///<summary>
    ///
    ///</summary>
    Choice();

    ///<summary>
    ///
    ///</summary>
    Choice(const Choice& original);

    ///<summary>
    ///
    ///</summary>
    Choice& operator=(const Choice& original);

    void Execute();
};


}


};