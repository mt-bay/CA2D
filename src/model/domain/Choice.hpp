#pragma once

#include <Siv3D.hpp>

namespace mdl
{

enum ChoiceType;

class Choice
{
public:
    Texture waitGraphic;
    Texture activeGraphic;

    ChoiceType type;
};

};