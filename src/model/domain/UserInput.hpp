#pragma once


#include "Input.hpp"


namespace mdl
{


namespace domain
{


class UserInput : public Input
{
    //// �����o�ϐ� ////
protected:
    size_t leftPressingFrames;
    size_t downPressingFrames;
    size_t upPressingFrames;
    size_t rightPressingFrames;

    bool confirm;
    bool cancel;

    //// ���\�b�h ////
public:
    
    ///<summary>
    /// ���͏�Ԃ̎擾�E�X�V
    ///</summary>
    [[deprecated]] virtual void Update();

    //// �ėp ////
	/// <summary>
	/// �����A���œ��͂��ꑱ���Ă���t���[����
	/// </summary>
	virtual size_t LeftPressingFrames();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool IsLeftPressed();

	/// <summary>
	/// �����A���œ��͂��ꑱ���Ă���t���[����
	/// </summary>
	virtual size_t DownPressingFrames();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool IsDownPressed();

	/// <summary>
	/// �����A���œ��͂��ꑱ���Ă���t���[����
	/// </summary>
	virtual size_t UpPressingFrames();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool IsUpPressed();

	/// <summary>
	/// �����A���œ��͂��ꑱ���Ă���t���[����
	/// </summary>
	virtual size_t RightPressingFrames();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool IsRightPressed();

    /// <summary>
    /// ���肪���͂���Ă��邩
    /// </summary>
    virtual bool IsConfirm();

    /// <summary>
    /// �L�����Z�������͂���Ă��邩
    /// </summary>
    virtual bool IsCancel();

protected:
    inline bool IsPressed(size_t _target);
};


}


}