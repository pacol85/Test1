// This file was generated based on '.uno/ux11/hikr.TextView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace hikr{struct TextView;}}

namespace g{
namespace hikr{

// public partial sealed class TextView :4
// {
::g::Fuse::Controls::TextInputControl_type* TextView_typeof();
void TextView__ctor_8_fn(TextView* __this);
void TextView__InitializeUX_fn(TextView* __this);
void TextView__New4_fn(TextView** __retval);

struct TextView : ::g::Fuse::Controls::TextView
{
    void ctor_8();
    void InitializeUX();
    static TextView* New4();
};
// }

}} // ::g::hikr
