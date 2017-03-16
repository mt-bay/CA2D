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
    //// 汎用 ////
	/// <summary>
	/// ←が連続で入力され続けているフレーム数
	/// </summary>
	virtual size_t LeftPressingFrames();

    /// <summary>
    /// ←が入力されているか
    /// </summary>
    virtual bool IsLeftPressed();

	/// <summary>
	/// ↓が連続で入力され続けているフレーム数
	/// </summary>
	virtual size_t DownPressingFrames();

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool IsDownPressed();

	/// <summary>
	/// ↑が連続で入力され続けているフレーム数
	/// </summary>
	virtual size_t UpPressingFrames();

    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool IsUpPressed();

	/// <summary>
	/// ↑が連続で入力され続けているフレーム数
	/// </summary>
	virtual size_t RightPressingFrames();

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool IsRightPressed();

    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool IsConfirm();

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool IsCancel();
};


}


}