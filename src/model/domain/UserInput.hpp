#pragma once


#include "Input.hpp"


namespace mdl
{


namespace domain
{


class UserInput : public Input
{
public:
    //// ”Ä—p ////
    /// <summary>
    /// ©‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isLeft();

    /// <summary>
    /// «‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isDown();

    /// <summary>
    /// ª‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isUp();

    /// <summary>
    /// ¨‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isRight();

    /// <summary>
    /// Œˆ’è‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isConfirm();

    /// <summary>
    /// ƒLƒƒƒ“ƒZƒ‹‚ª“ü—Í‚³‚ê‚Ä‚¢‚é‚©
    /// </summary>
    virtual bool isCancel();
};


}


}