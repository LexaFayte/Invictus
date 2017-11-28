/// scr_draw_debug_player(flagOn, stats, input)

flagOn = argument0;
stats = argument1;
input = argument2;

if (flagOn != 0)
{
    var xview = view_xview[0];
    var yview = view_yview[0];
    
    if (stats != 0)
    {
    draw_text(xview+30, yview+10, "dir :: " + string(dir));
    draw_text(xview+30, yview+30, "hp :: " + string(hp));
    draw_text(xview+30, yview+50, "movespeed :: " + string(movespeed));
    draw_text(xview+30, yview+70, "credits :: " + string(credits));
    }
    
    if (input != 0)
    {
    if (debug_controller != 0)

    
}
