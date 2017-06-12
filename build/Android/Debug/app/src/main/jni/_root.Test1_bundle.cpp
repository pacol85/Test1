// This file was generated based on Test1.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Test1_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class Test1_bundle :0
// {
// static Test1_bundle() :0
static void Test1_bundle__cctor__fn(uType* __type)
{
    Test1_bundle::background15c09ed3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Test1"*/]))->GetFile(::STRINGS[1/*"background-...*/]);
    Test1_bundle::EditHikePage2aee5df8_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Test1"*/]))->GetFile(::STRINGS[2/*"edithikepag...*/]);
    Test1_bundle::HomePage054219fc_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Test1"*/]))->GetFile(::STRINGS[3/*"homepage-38...*/]);
    Test1_bundle::nature9a566850_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Test1"*/]))->GetFile(::STRINGS[4/*"nature-0061...*/]);
    Test1_bundle::SplashPageec5b678c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Test1"*/]))->GetFile(::STRINGS[5/*"splashpage-...*/]);
}

static void Test1_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Test1");
    ::STRINGS[1] = uString::Const("background-733d5658.jpg");
    ::STRINGS[2] = uString::Const("edithikepage-180ba1ef.js");
    ::STRINGS[3] = uString::Const("homepage-38a2b2eb.js");
    ::STRINGS[4] = uString::Const("nature-00619d65.mp4");
    ::STRINGS[5] = uString::Const("splashpage-ce1fc9d9.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Test1_bundle::background15c09ed3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Test1_bundle::EditHikePage2aee5df8_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Test1_bundle::HomePage054219fc_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Test1_bundle::nature9a566850_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Test1_bundle::SplashPageec5b678c_, uFieldFlagsStatic);
}

uClassType* Test1_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Test1_bundle", options);
    type->fp_build_ = Test1_bundle_build;
    type->fp_cctor_ = Test1_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Test1_bundle::background15c09ed3_;
uSStrong< ::g::Uno::IO::BundleFile*> Test1_bundle::EditHikePage2aee5df8_;
uSStrong< ::g::Uno::IO::BundleFile*> Test1_bundle::HomePage054219fc_;
uSStrong< ::g::Uno::IO::BundleFile*> Test1_bundle::nature9a566850_;
uSStrong< ::g::Uno::IO::BundleFile*> Test1_bundle::SplashPageec5b678c_;
// }

} // ::g
