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
            draw_rectangle_color(xview+32, yview+672, xview+160, yview+736, c_gray, c_gray, c_gray, c_gray, false);
            draw_set_colour(c_green);
            draw_text(xview+(32), yview+(666), "LV:" )
            draw_text(xview+(32), yview+(690), string(level) )
            draw_text(xview+(108), yview+(666), "HP:" )
            draw_text(xview+(108), yview+(690), string(hp) )
            
            draw_rectangle_color(xview+224, yview+672, xview+254, yview+702, c_gray, c_gray, c_gray, c_gray, false);
            draw_sprite(sprWeaponIcons, weapon_sprite, xview+(224), yview+(672))
            //draw_set_colour(c_gray)
            //draw_text(xview+(224), yview+(710), "WeapCharj: " + string(alarm[0]) )
            
            draw_rectangle_color(xview+300, yview+672, xview+382, yview+736, c_gray, c_gray, c_gray, c_gray, false);
            draw_set_colour(c_blue);
            draw_text(xview+(300), yview+(666), "Cred:" )
            draw_text(xview+(300), yview+(690), string(credits) )
            draw_rectangle_color(xview+400, yview+672, xview+492, yview+736, c_gray, c_gray, c_gray, c_gray, false);
            draw_text(xview+(410), yview+(666), "Cost:" )
            draw_text(xview+(410), yview+(690), string(nextLevel) )
            
            draw_set_alpha(1);
            
            draw_set_colour(c_red);
            draw_text(xview+(500), yview+(666), "NMEs:" )
            if (instance_exists(parentEnemyShip)) draw_text(xview+(500), yview+(700), string(instance_number(parentEnemyShip)) )
            
            if (credits >= levelThreshold[level])
            {
                var v_spr_lvHP = draw_sprite(sprLevelIcons, 1, xview+(700), yview+(672))
                v_spr_lvHP.image_xscale = 2;
                v_spr_lvHP.image_yscale = 2;
                draw_sprite(sprLevelIcons, 2, xview+(750), yview+(672))
                draw_sprite(sprLevelIcons, 3, xview+(800), yview+(672))
            }
            
            
}
