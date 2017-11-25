/// scr_sys_controller()
// Handle controller I/O

// I/O for USB controller
gp_up = -(gamepad_button_check(0, gp_padu));     // Negative value, because in GM:S, Y increases downward
gp_left = -(gamepad_button_check(0, gp_padl));   // Negative value, because X increases rightward
gp_down = (gamepad_button_check(0, gp_padd));
gp_right = (gamepad_button_check(0, gp_padr));

// I/O for keyboard
// PLACEHOLDER due to player movement override
// we can enable this later
key_up = 0;
key_left = 0;
key_down = 0;
key_right = 0;

// Safety check to null movement if left and right are both pressed at same time


move_h = sign(gp_right + gp_left);
move_v = gp_up + gp_down;

if (move_h != 0) {
    dir = move_h;
    image_xscale = dir;
}

// move_h/v * movespeed equals 0 if no input or both buttons are input
x += move_h * movespeed;
y += move_v * movespeed;

// Handle shooting

if (gamepad_button_check(0, gp_face3)) {
    if (alarm[0] == -1) {
        alarm = 3;
    }
}
