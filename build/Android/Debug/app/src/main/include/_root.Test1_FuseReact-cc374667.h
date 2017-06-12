// This file was generated based on '.uno/ux11/Test1.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Test1_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class Test1_FuseReactiveEach_Items_Property :47
// {
::g::Uno::UX::Property1_type* Test1_FuseReactiveEach_Items_Property_typeof();
void Test1_FuseReactiveEach_Items_Property__ctor_3_fn(Test1_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void Test1_FuseReactiveEach_Items_Property__Get1_fn(Test1_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Test1_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, Test1_FuseReactiveEach_Items_Property** __retval);
void Test1_FuseReactiveEach_Items_Property__get_Object_fn(Test1_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Test1_FuseReactiveEach_Items_Property__Set1_fn(Test1_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct Test1_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static Test1_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
