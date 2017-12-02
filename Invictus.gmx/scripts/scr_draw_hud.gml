///scr_draw_hud(flagOn, hp, weapon, credits, upgrade, gameLevel)

flagOn      = argument0;
hp          = argument1;
weapon      = argument2;
credits     = argument3;
upgrade     = argument4;
gameLevel   = argument5;

if (flagOn != 0)
{
    var xview = view_xview[0];
    var yview = view_yview[0];
    draw_set_font(fnt02);
    
            draw_set_alpha(0.5);
            draw_rectangle_color(xview+96, yview+672, xview+160, yview+736, c_lime, c_lime, c_lime, c_lime, true);
            draw_set_colour(c_red);
            draw_text(xview+(200), yview+(800), string(hp) )
            draw_rectangle_color(xview+224, yview+800, xview+228, yview+864, c_lime, c_lime, c_lime, c_lime, true);
            draw_set_alpha(1);
}
