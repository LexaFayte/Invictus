/// scr_draw_debug_player(flagOn, stats, input)

flagOn = argument0;
stats = argument1;
input = argument2;

if (flagOn != 0)
{
    var xview = view_xview[0];
    var yview = view_yview[0];
    draw_set_font(fnt01);
    
    if (stats != 0)
    {
        draw_text(xview+30, yview+10, "dir :: " + string(dir));
        draw_text(xview+30, yview+30, "hp :: " + string(hp));
        draw_text(xview+30, yview+50, "movespeed :: " + string(movespeed));
        draw_text(xview+30, yview+70, "credits :: " + string(credits));
    }
    

    if (input != 0)
    {

        // This should really check for the index of which controller is being used...
        i = 0;

        draw_text(xview+300, yview+10, "Gamepad Slot :: " + string(i));
        //draw_text(10, 20, "Gamepad Type :: " + string(gamepad_get_description(i)));
        draw_text(xview+300, yview+40, "Left H Axis :: " + string(gamepad_axis_value(i, gp_axislh)));
        draw_text(xview+300, yview+60, "Left V Axis :: " + string(gamepad_axis_value(i, gp_axislv)));
        draw_text(xview+300, yview+80, "Right H Axis :: " + string(gamepad_axis_value(i, gp_axisrh)));
        draw_text(xview+300, yview+100, "Right V Axis :: " + string(gamepad_axis_value(i, gp_axisrv)));   
        draw_text(xview+300, yview+120, "Fire Rate :: " + string(gamepad_button_value(i, gp_shoulderrb)));
        draw_text(xview+300, yview+140, "GP_UP :: " + string(gp_up));
        draw_text(xview+300, yview+160, "GP_DOWN :: " + string(gp_down));
    }
}
