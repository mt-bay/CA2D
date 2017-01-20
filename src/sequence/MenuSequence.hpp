#pragma once

#include <vector>

#include "../Sequence.hpp"

#include "../Loader/SequenceLoader.hpp"

#include "../model/Choice.hpp"

namespace seq
{


class MenuSequence : public sys::Sequence
{
private:
    friend sys::SequenceLoader;

public:
    std::vector<mdl::Choice> choices;

    virtual void OnDestroy();

    virtual void Update();

    virtual void UpdateAsync();

    virtual void Draw();
};


}