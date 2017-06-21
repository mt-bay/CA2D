#pragma once

#include <vector>

#include "Sequence.hpp"

#include "../model/domain/Choice.hpp"
#include "../model/domain/UserAscInput.hpp"

namespace viewController
{


class MenuSequence : public Sequence
{
    //// メンバ変数 ////
public:
    std::vector<model::domain::Choice> choices;
    asc::Input input;

private:
    int selected;

public:
    MenuSequence(INIReader& reader);

    virtual ~MenuSequence();

    //// ライフサイクル ////
public:
    ///<summary>
    ///</summary>
    virtual void OnDestroy();

    ///<summary>
    ///</summary>
    virtual void Update();

    ///<summary>
    ///</summary>
    virtual void UpdateAsync();

    ///<summary>
    ///</summary>
    virtual void Draw();

    //// その他メソッド ////
private:
	//// Update ////
    ///<summary>
    ///</summary>
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