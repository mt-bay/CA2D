#pragma once

#include <vector>

#include "Sequence.hpp"

#include "../model/domain/Choice.hpp"
#include "../model/domain/UserAscInput.hpp"

namespace viewController
{


class MenuSequence : public Sequence
{
    //// �����o�ϐ� ////
public:
    std::vector<model::domain::Choice> choices;
    asc::Input input;

private:
    int selected;

public:
    MenuSequence(INIReader& reader);

    virtual ~MenuSequence();

    //// ���C�t�T�C�N�� ////
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

    //// ���̑����\�b�h ////
private:
	//// Update ////
    ///<summary>
    ///</summary>
	virtual void Select();

	///<summary>
	///����I��
	///</summary>
    virtual void SelectLeft();

	///<summary>
	///����I��
	///</summary>
    virtual void SelectDown();
	///<summary>
	///���I��
	///</summary>
    virtual void SelectUp();
	///<summary>
	///
	///</summary>
    virtual void SelectRight();


};


}