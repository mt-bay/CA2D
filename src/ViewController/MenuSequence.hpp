#pragma once

#include <vector>

#include "Sequence.hpp"

#include "../model/domain/Choice.hpp"

namespace seq
{


class MenuSequence : public sys::Sequence
{
    //// �����o�ϐ� ////
public:
    std::vector<model::domain::Choice> choices;

private:
    int selected;

public:
    virtual ~MenuSequence();

    //// ���C�t�T�C�N�� ////
public:
    virtual void OnDestroy();

    virtual void Update();

    virtual void UpdateAsync();

    virtual void Draw();

    //// ���̑����\�b�h ////
private:
	//// Update ////
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