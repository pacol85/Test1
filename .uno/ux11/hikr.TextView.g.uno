namespace hikr
{
    [Uno.Compiler.UxGenerated]
    public partial class TextView: Fuse.Controls.TextView
    {
        static TextView()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextView()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Rectangle();
            this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            this.TextColor = Fuse.Drawing.Colors.White;
            this.CaretColor = Fuse.Drawing.Colors.White;
            this.Padding = float4(5f, 5f, 5f, 5f);
            temp.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp.Color = float4(1f, 1f, 1f, 0.1333333f);
            temp.Layer = Fuse.Layer.Background;
            this.Children.Add(temp);
        }
    }
}
