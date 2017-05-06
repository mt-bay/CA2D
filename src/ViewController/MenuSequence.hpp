#pragma once

#include <vector>

#include "Sequence.hpp"

#include "../model/domain/Choice.hpp"

namespace seq
{


class MenuSequence : public sys::Sequence
{
    //// メンバ変数 ////
public:
    std::vector<model::domain::Choice> choices;

private:
    int selected;

public:
    virtual ~MenuSequence();

    //// ライフサイクル ////
public:
    virtual void OnDestroy();

    virtual void Update();

    virtual void UpdateAsync();

    virtual void Draw();

    //// その他メソッド ////
private:
	//// Update ////
	virtual void Select();

	///<summary>
	///左を選択
	///</summary>
    virtual void SelectLeft();

	///<summary>
	///下を選択
	///</summary>
    virtual void SelectDown();
	///<summary>
	///上を選択
	///</summary>
    virtual void SelectUp();
	///<summary>
	///
	///</summary>
    virtual void SelectRight();


};


}