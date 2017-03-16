#pragma once


#include "Input.hpp"


namespace mdl
{


namespace domain
{


class UserInput : public Input
{
protected:



public:
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
};


}


}