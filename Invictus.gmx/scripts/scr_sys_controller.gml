/// scr_sys_controller()
// Handle controller I/O

// I/O for USB controller

        // Movement and Direction
        gp_up = -( gamepad_button_check(0, gp_padu))        //|| ((gamepad_axis_value(0,gp_axislv) < -0.2) );        // Negative value, because in GM:S, Y increases downward
        gp_left = -( gamepad_button_check(0, gp_padl))      //|| ((gamepad_axis_value(0,gp_axislh) < -(0.2)) );   // Negative value, because X increases rightward
        gp_down = ( gamepad_button_check(0, gp_padd))       //|| ((gamepad_axis_value(0,gp_axislv) > 0.2) );
        gp_right = ( gamepad_button_check(0, gp_padr))      //|| ((gamepad_axis_value(0,gp_axislh) > 0.2));
        gp_lshld = ( gamepad_button_check_pressed(0, gp_shoulderlb)) || ( gamepad_button_check_pressed(0, gp_shoulderl))
        gp_rshld = ( gamepad_button_check_pressed(0, gp_shoulderrb)) || ( gamepad_button_check_pressed(0, gp_shoulderr))
        
        
        gp_lvHp = ( gamepad_button_check_pressed(0, gp_face1))      // A on Xbox; when at level-up, increase HP at the cost of credits
        gp_lvAg = ( gamepad_button_check_pressed(0, gp_face2))      // B on Xbox; when at level-up, increase Speed at the cost of credits
        gp_shoot = (gamepad_button_check(0, gp_face3))              // X on Xbox; fire wepon
        gp_lvSc = ( gamepad_button_check_pressed(0, gp_face4))      // Y on Xbox; when at level-up, increase Scanners at the cost of credits

// I/O for keyboard
// PLACEHOLDER due to player movement override
// we can enable this later

        key_up = 0;
        key_left = 0;
        key_down = 0;
        key_right = 0;
        key_lvHp = keyboard_check_pressed(ord('1'));
        key_lvAg = keyboard_check_pressed(ord('2'));
        key_lvSc = keyboard_check_pressed(ord('3'));

// Gamepad Controls

// Set dir
if (gp_lshld)
{
    if(dir != -1)
    {
        dir = -1;
        image_xscale *= -1;
    }
}

if (gp_rshld)
{
    if(dir != 0)
    {
        dir = 0;
        image_xscale = 1;
    }
}


// Movement
    if (gp_up == -1)
    {
        y -= movespeed;
    }
    if (gp_left == -1)
    {
        x -= movespeed;
    }
    if (gp_down)
    {
        y += movespeed;
    }
    if (gp_right)
    {
        x += movespeed;
    }

        // Safety check to null movement if left and right are both pressed at same time
        /*
        move_h = gp_right + gp_left;
        move_v = gp_up + gp_down;
        
        if (move_h != 0) {
            dir = move_h;
            image_xscale = dir;
        }
        
        // move_h/v * movespeed equals 0 if no input or both buttons are input
        x += move_h * movespeed;
        y += move_v * movespeed;
        */

// Handle shooting

if (gp_shoot) {
    if (alarm[0] == -1) {
        alarm[0] = 3;
    }
}

// Handle level-up events
if (gp_lvHp) || (key_lvHp)
{
    scr_level_up(1);
} 
    else if(gp_lvAg) || (key_lvAg)
    {
        scr_level_up(2);
    } 
    else if(gp_lvSc) || (key_lvSc)
    {
        scr_level_up(3);
    }
