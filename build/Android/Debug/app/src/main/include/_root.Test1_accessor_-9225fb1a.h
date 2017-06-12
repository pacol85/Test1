// This file was generated based on '.uno/ux11/Test1.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Test1_accessor_hikr_Button_Text;}

namespace g{

// internal sealed class Test1_accessor_hikr_Button_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* Test1_accessor_hikr_Button_Text_typeof();
void Test1_accessor_hikr_Button_Text__ctor_1_fn(Test1_accessor_hikr_Button_Text* __this);
void Test1_accessor_hikr_Button_Text__GetAsObject_fn(Test1_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Test1_accessor_hikr_Button_Text__get_Name_fn(Test1_accessor_hikr_Button_Text* __this, ::g::Uno::UX::Selector* __retval);
void Test1_accessor_hikr_Button_Text__New1_fn(Test1_accessor_hikr_Button_Text** __retval);
void Test1_accessor_hikr_Button_Text__get_PropertyType_fn(Test1_accessor_hikr_Button_Text* __this, uType** __retval);
void Test1_accessor_hikr_Button_Text__SetAsObject_fn(Test1_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void Test1_accessor_hikr_Button_Text__get_SupportsOriginSetter_fn(Test1_accessor_hikr_Button_Text* __this, bool* __retval);

struct Test1_accessor_hikr_Button_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return Test1_accessor_hikr_Button_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Test1_accessor_hikr_Button_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static Test1_accessor_hikr_Button_Text* New1();
};
// }

} // ::g
