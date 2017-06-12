[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb3"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToHomePage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::Fuse.Controls.Video();
        var temp4 = new global::Fuse.Effects.Blur();
        var temp5 = new global::hikr.Text();
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::hikr.Text();
        var temp9 = new global::hikr.Text();
        var temp10 = new global::hikr.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/SplashPage.js"));
        temp2.ClipToBounds = true;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp6);
        temp3.IsLooping = true;
        temp3.AutoPlay = true;
        temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp3.Opacity = 0.5f;
        temp3.Layer = Fuse.Layer.Background;
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/nature.mp4"));
        temp3.Children.Add(temp4);
        temp4.Radius = 4.75f;
        temp5.Value = "original video by Graham Uhelski";
        temp5.FontSize = 12f;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp5.Margin = float4(10f, 10f, 10f, 10f);
        temp5.Opacity = 0.5f;
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        temp6.RowCount = 2;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp10);
        temp7.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp9);
        temp8.Value = "hikr";
        temp8.FontSize = 70f;
        temp8.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp9.Value = "get out there";
        temp9.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp9.Opacity = 0.5f;
        temp10.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp10.Margin = float4(50f, 0f, 50f, 0f);
        temp10.Text = "Get Started";
        temp10.FontSize = 18f;
        global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb3.OnEvent);
        temp10.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
