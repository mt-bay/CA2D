#pragma once


namespace model
{


namespace domain
{


///<summary>
///SequenceÌóÔð\·ñ^
///</summary>
enum SequenceState
{
    ///<summary>ì¬</summary>
    Creating,
    ///<summary>ÇÝÝ</summary>
    Loading,
    ///<summary>Â\</summary>
    Ready,
    ///<summary>Sequencepü</summary>
    DestroyProcessing,
    ///<summary>püõ®¹</summary>
    ReadyToDestroy
};


}


}