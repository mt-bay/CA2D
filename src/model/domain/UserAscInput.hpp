#pragma once

#include "../../lib/asc/Input.hpp"

#include "Input.hpp"


namespace model
{


namespace domain
{


class UserAscInput : public Input
{
    //// �����o�ϐ� ////
protected:
    asc::Input asc;

    //// ���\�b�h ////
public:
    
    ///<summary>
    /// ���͏�Ԃ̎擾�E�X�V
    ///</summary>
    [[deprecated]] virtual void Update();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Left() const;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Down() const;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Up() const;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Right() const;

    /// <summary>
    /// ���肪���͂���Ă��邩
    /// </summary>
    virtual bool Confirm() const;

    /// <summary>
    /// �L�����Z�������͂���Ă��邩
    /// </summary>
    virtual bool Cancel() const;

protected:
    enum Direction
    {
        LEFT  = 2u,
        DOWN  = 3u,
        UP    = 1u,
        RIGHT = 0u
    };

    inline bool DirectionCheck(const Direction direction) const;

    
};


}


}