#pragma once


namespace model
{


namespace domain
{


///<summary>
///Sequence�̏�Ԃ�\���񋓌^
///</summary>
enum SequenceState
{
    ///<summary>�쐬��</summary>
    Creating,
    ///<summary>�ǂݍ��ݒ�</summary>
    Loading,
    ///<summary>�����\</summary>
    Ready,
    ///<summary>Sequence�p��������</summary>
    DestroyProcessing,
    ///<summary>�p����������</summary>
    ReadyToDestroy
};


}


}