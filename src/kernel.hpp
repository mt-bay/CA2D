/** ���[�`���Ǘ��p�N���X�錾�t�@�C�� */
#pragma once


#include <vector>

#include <2D.hpp>
#include <tstring.hpp>

#include "./Sequence.hpp"

namespace sys
{


///Kernel
///��ԊǗ��p�N���X
class Kernel
{
	//�����o�ϐ�
public:
    ///sequence���X�^�b�N��ɕۑ�����vector
    std::vector<Sequence*> sequenceStack;
    ///�J�����g�Ƃ��ď����E�`�悷��index
    int currentIndex;
    ///
    
};


};
