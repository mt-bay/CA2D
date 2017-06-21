/** ���[�`���Ǘ��p�N���X�錾�t�@�C�� */
#pragma once


#include <vector>
#include <queue>

#include "../model/domain/Input.hpp"
#include "../ViewController/Sequence.hpp"

#include "../lib/asc/Input.hpp"

namespace sys
{


///Kernel
///��ԊǗ��p�N���X
class Kernel final
{
	////�����o�ϐ�////
public:

private:
    ///sequence���X�^�b�N��ɕۑ�����vector
    std::vector<viewController::Sequence*> sequenceStack;
    ///�J�����g�Ƃ��ď����E�`�悷��index
    int currentIndex;
    
    std::queue<s3d::INIReader> loadRequests;

public:
    Kernel();

    void MainProcess();

    void SequenceEnqueue(s3d::String sequenceIniFile);
private:
    ///
    void Update();

    void Draw();

    void DeleteSequence();

    void GenerateSequence();

    int GetNewSequenceIndex();
};


};
