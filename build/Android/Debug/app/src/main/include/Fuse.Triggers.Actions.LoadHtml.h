// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Triggers.Actions-e0dcfc3.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadHtml :739
// {
struct LoadHtml_type : ::g::Fuse::Triggers::Actions::WebViewNavAction_type
{
    ::g::Fuse::Controls::ISourceReceiver interface0;
};

LoadHtml_type* LoadHtml_typeof();
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value);
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview);
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value);

struct LoadHtml : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _BaseUrl;
    uStrong<uString*> _Source;

    uString* BaseUrl();
    void BaseUrl(uString* value);
    uString* Source();
    void Source(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
