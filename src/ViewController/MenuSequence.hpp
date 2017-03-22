#pragma once

#include <vector>

#include "../Sequence.hpp"

#include "../Loader/SequenceLoader.hpp"

#include "../model/domain/Choice.hpp"

namespace seq
{


class MenuSequence : public sys::Sequence
{
private:
    friend sys::SequenceLoader;

    //// �����o�ϐ� ////
public:
    std::vector<mdl::domain::Choice> choices;

private:
    int selected;

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