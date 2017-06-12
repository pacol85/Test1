// This file was generated based on '.uno/ux11/Test1.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace hikr{struct Button;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Test1_hikrButton_Text_Property;}

namespace g{

// internal sealed class Test1_hikrButton_Text_Property :55
// {
::g::Uno::UX::Property1_type* Test1_hikrButton_Text_Property_typeof();
void Test1_hikrButton_Text_Property__ctor_3_fn(Test1_hikrButton_Text_Property* __this, ::g::hikr::Button* obj, ::g::Uno::UX::Selector* name);
void Test1_hikrButton_Text_Property__Get1_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Test1_hikrButton_Text_Property__New1_fn(::g::hikr::Button* obj, ::g::Uno::UX::Selector* name, Test1_hikrButton_Text_Property** __retval);
void Test1_hikrButton_Text_Property__get_Object_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Test1_hikrButton_Text_Property__Set1_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void Test1_hikrButton_Text_Property__get_SupportsOriginSetter_fn(Test1_hikrButton_Text_Property* __this, bool* __retval);

struct Test1_hikrButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::hikr::Button*> _obj;

    void ctor_3(::g::hikr::Button* obj, ::g::Uno::UX::Selector name);
    static Test1_hikrButton_Text_Property* New1(::g::hikr::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
