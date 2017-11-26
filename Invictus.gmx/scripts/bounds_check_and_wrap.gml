/*
=======================
    bounds checking
=======================    
*/
var offsetY = abs(sprite_height)/2 + 5;
var offsetX =  abs(sprite_width)/2 + 5;

//horizontal wrapping
if(x >= room_width)
{
    view_xview[0] = 0;
    x = offsetX;   
}
else if(x <= 0)
{
    view_xview[0] = view_wview[0] * 1.5;
    x = room_width - offsetX;
}

//vertical bounds
if( room_height - offsetY < y)
{
    y =  room_height - offsetY;
}

if(y - offsetY < 0)
{
    y = offsetY;
}
