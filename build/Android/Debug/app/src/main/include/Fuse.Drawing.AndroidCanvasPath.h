// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.SurfacePath.h>
namespace g{namespace Fuse{namespace Drawing{struct AndroidCanvasPath;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class AndroidCanvasPath :16
// {
uType* AndroidCanvasPath_typeof();
void AndroidCanvasPath__ctor_1_fn(AndroidCanvasPath* __this);
void AndroidCanvasPath__New1_fn(AndroidCanvasPath** __retval);

struct AndroidCanvasPath : ::g::Fuse::Drawing::SurfacePath
{
    int FillRule;
    uStrong< ::g::Java::Object*> Path;

    void ctor_1();
    static AndroidCanvasPath* New1();
};
// }

}}} // ::g::Fuse::Drawing
