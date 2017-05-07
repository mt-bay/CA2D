#pragma once


namespace model
{


namespace domain
{


///<summary>
///Sequence‚Ìó‘Ô‚ğ•\‚·—ñ‹“Œ^
///</summary>
enum SequenceState
{
    ///<summary>ì¬’†</summary>
    Creating,
    ///<summary>“Ç‚İ‚İ’†</summary>
    Loading,
    ///<summary>ˆ—‰Â”\</summary>
    Ready,
    ///<summary>Sequence”pŠüˆ—’†</summary>
    DestroyProcessing,
    ///<summary>”pŠü€”õŠ®—¹</summary>
    ReadyToDestroy
};


}


}