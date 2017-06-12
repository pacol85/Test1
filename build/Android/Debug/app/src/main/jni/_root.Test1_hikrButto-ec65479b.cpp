// This file was generated based on '.uno/ux11/Test1.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Test1_hikrButto-ec65479b.h>
#include <hikr.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Test1_hikrButton_Text_Property :55
// {
static void Test1_hikrButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::hikr::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*hikr.Button*/], offsetof(::g::Test1_hikrButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Test1_hikrButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Test1_hikrButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Test1_hikrButton_Text_Property", options);
    type->fp_build_ = Test1_hikrButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Test1_hikrButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Test1_hikrButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Test1_hikrButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Test1_hikrButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Test1_hikrButton_Text_Property(hikr.Button obj, Uno.UX.Selector name) :58
void Test1_hikrButton_Text_Property__ctor_3_fn(Test1_hikrButton_Text_Property* __this, ::g::hikr::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :60
void Test1_hikrButton_Text_Property__Get1_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->Text(), void();
}

// public Test1_hikrButton_Text_Property New(hikr.Button obj, Uno.UX.Selector name) :58
void Test1_hikrButton_Text_Property__New1_fn(::g::hikr::Button* obj, ::g::Uno::UX::Selector* name, Test1_hikrButton_Text_Property** __retval)
{
    *__retval = Test1_hikrButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void Test1_hikrButton_Text_Property__get_Object_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :61
void Test1_hikrButton_Text_Property__Set1_fn(Test1_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :62
void Test1_hikrButton_Text_Property__get_SupportsOriginSetter_fn(Test1_hikrButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Test1_hikrButton_Text_Property(hikr.Button obj, Uno.UX.Selector name) [instance] :58
void Test1_hikrButton_Text_Property::ctor_3(::g::hikr::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Test1_hikrButton_Text_Property New(hikr.Button obj, Uno.UX.Selector name) [static] :58
Test1_hikrButton_Text_Property* Test1_hikrButton_Text_Property::New1(::g::hikr::Button* obj, ::g::Uno::UX::Selector name)
{
    Test1_hikrButton_Text_Property* obj1 = (Test1_hikrButton_Text_Property*)uNew(Test1_hikrButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
