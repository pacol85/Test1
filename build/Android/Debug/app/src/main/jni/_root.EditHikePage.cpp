// This file was generated based on '.uno/ux11/EditHikePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EditHikePage.h>
#include <_root.Test1_bundle.h>
#include <_root.Test1_FuseContr-b6bb5fbc.h>
#include <_root.TitleText.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <hikr.Button.h>
#include <hikr.TextBox.h>
#include <hikr.TextView.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[19];
static uType* TYPES[5];

namespace g{

// public partial sealed class EditHikePage :2
// {
// static EditHikePage() :18
static void EditHikePage__cctor_5_fn(uType* __type)
{
    EditHikePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb0"*/], ::STRINGS[2/*"temp_eb1"*/]);
    EditHikePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
}

static void EditHikePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb0");
    ::STRINGS[2] = uString::Const("temp_eb1");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("save");
    ::STRINGS[5] = uString::Const("cancel");
    ::STRINGS[6] = uString::Const("name");
    ::STRINGS[7] = uString::Const("loc");
    ::STRINGS[8] = uString::Const("dist");
    ::STRINGS[9] = uString::Const("rating");
    ::STRINGS[10] = uString::Const("comments");
    ::STRINGS[11] = uString::Const("Pages/EditHikePage.ux");
    ::STRINGS[12] = uString::Const("Save");
    ::STRINGS[13] = uString::Const("Cancel");
    ::STRINGS[14] = uString::Const("Name:");
    ::STRINGS[15] = uString::Const("Location:");
    ::STRINGS[16] = uString::Const("Distance (Km):");
    ::STRINGS[17] = uString::Const("Rating:");
    ::STRINGS[18] = uString::Const("Comments:");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::EditHikePage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::EditHikePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::EditHikePage, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::EditHikePage, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::EditHikePage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::EditHikePage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::EditHikePage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::EditHikePage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::EditHikePage, temp4_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::EditHikePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EditHikePage::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* EditHikePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::hikr::Page_typeof();
    options.FieldCount = 117;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(EditHikePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("EditHikePage", options);
    type->fp_build_ = EditHikePage_build;
    type->fp_cctor_ = EditHikePage__cctor_5_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EditHikePage(Fuse.Navigation.Router router) :22
void EditHikePage__ctor_9_fn(EditHikePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :28
void EditHikePage__InitializeUX1_fn(EditHikePage* __this)
{
    __this->InitializeUX1();
}

// public EditHikePage New(Fuse.Navigation.Router router) :22
void EditHikePage__New6_fn(::g::Fuse::Navigation::Router* router1, EditHikePage** __retval)
{
    *__retval = EditHikePage::New6(router1);
}

uSStrong<uArray*> EditHikePage::__g_static_nametable1_;
::g::Uno::UX::Selector EditHikePage::__selector0_;

// public EditHikePage(Fuse.Navigation.Router router) [instance] :22
void EditHikePage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :28
void EditHikePage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, EditHikePage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"save"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"cancel"*/]);
    ::g::hikr::TextBox* temp = ::g::hikr::TextBox::New5();
    temp_Value_inst = ::g::Test1_FuseControlsTextInputControl_Value_Property::New1(temp, EditHikePage::__selector0());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"name"*/]);
    ::g::hikr::TextBox* temp1 = ::g::hikr::TextBox::New5();
    temp1_Value_inst = ::g::Test1_FuseControlsTextInputControl_Value_Property::New1(temp1, EditHikePage::__selector0());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"loc"*/]);
    ::g::hikr::TextBox* temp2 = ::g::hikr::TextBox::New5();
    temp2_Value_inst = ::g::Test1_FuseControlsTextInputControl_Value_Property::New1(temp2, EditHikePage::__selector0());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"dist"*/]);
    ::g::hikr::TextBox* temp3 = ::g::hikr::TextBox::New5();
    temp3_Value_inst = ::g::Test1_FuseControlsTextInputControl_Value_Property::New1(temp3, EditHikePage::__selector0());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"rating"*/]);
    ::g::hikr::TextView* temp4 = ::g::hikr::TextView::New4();
    temp4_Value_inst = ::g::Test1_FuseControlsTextInputControl_Value_Property::New1(temp4, EditHikePage::__selector0());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"comments"*/]);
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::hikr::Button* temp15 = ::g::hikr::Button::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5, __g_nametable1);
    ::g::hikr::Button* temp16 = ::g::hikr::Button::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp17 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleText* temp20 = ::g::TitleText::New5();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleText* temp23 = ::g::TitleText::New5();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleText* temp26 = ::g::TitleText::New5();
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleText* temp29 = ::g::TitleText::New5();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleText* temp32 = ::g::TitleText::New5();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp11, __g_nametable1, 3);
    temp12->LineNumber(4);
    temp12->FileName(::STRINGS[11/*"Pages/EditH...*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::Test1_bundle::EditHikePage2aee5df8()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp14->ColumnCount(2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Text(::STRINGS[12/*"Save"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp16->Text(::STRINGS[13/*"Cancel"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp16, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->ItemSpacing(10.0f);
    temp18->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp20->Value(::STRINGS[14/*"Name:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp23->Value(::STRINGS[15/*"Location:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp26->Value(::STRINGS[16/*"Distance (K...*/]);
    temp2->InputHint(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp29->Value(::STRINGS[17/*"Rating:"*/]);
    temp3->InputHint(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp32->Value(::STRINGS[18/*"Comments:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
}

// public EditHikePage New(Fuse.Navigation.Router router) [static] :22
EditHikePage* EditHikePage::New6(::g::Fuse::Navigation::Router* router1)
{
    EditHikePage* obj1 = (EditHikePage*)uNew(EditHikePage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

} // ::g
