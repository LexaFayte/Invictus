///scr_draw_hud(flagOn, hp, weapon, credits, upgrade, gameLevel)

flagOn      = argument0;
hp          = argument1;
weapon      = argument2;
credits     = argument3;
upgrade     = argument4;
gameLevel   = argument5;

if (weapon != -1) 
{
    switch (weapon)
    {
        case weaponBulletP:
            weapon_sprite = 0;
            break;
        case weaponMissile:
            weapon_sprite = 2;
            break;
    }
} else
{
    weapon_sprite = 0;
}

if (flagOn != 0)
{
    var xview = view_xview[0];
    var yview = view_yview[0];
    draw_set_font(fnt02);
    
            draw_set_alpha(1);
            draw_rectangle_color(xview+96, yview+672, xview+160, yview+736, c_gray, c_gray, c_gray, c_gray, false);
            draw_set_colour(c_green);
            draw_text(xview+(108), yview+(666), "HP:" )
            draw_text(xview+(108), yview+(690), string(hp) )
            
            draw_rectangle_color(xview+224, yview+672, xview+254, yview+702, c_gray, c_gray, c_gray, c_gray, false);
            draw_sprite(sprWeaponIcons, weapon_sprite, xview+(224), yview+(672))

            draw_rectangle_color(xview+300, yview+672, xview+382, yview+736, c_gray, c_gray, c_gray, c_gray, false);
            draw_set_colour(c_blue);
            draw_text(xview+(300), yview+(666), "Cred:" )
            draw_text(xview+(300), yview+(690), string(credits) )
            
            draw_set_alpha(1);
            
            draw_set_colour(c_red);
            draw_text(xview+(500), yview+(666), "NMEs:" )
            if (instance_exists(parentEnemyShip)) draw_text(xview+(500), yview+(700), string(parentEnemyShip.instance_count) )
}
