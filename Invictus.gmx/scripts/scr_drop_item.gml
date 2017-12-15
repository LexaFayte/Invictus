// scr_drop_item(maxRange, isCargo)

// Invoke script on death of calling object
// Later versions should accept arguments for drop modifiers

maxRange = argument0;
isCargo = argument1;

var dropchance = random_range(0,maxRange);

if (isCargo == 0)
{
    if (dropchance >= 0 && dropchance <= 3)
    {
        instance_create(x, y, pickupHealth);
    }
    
    if (dropchance >= 4 && dropchance <= 5)
    {
        instance_create(x, y, pickupCash);
    }
    
    if (dropchance >= 4 && dropchance <= 5)
    {
        instance_create(x, y, pickupCash);
    }
} else if (isCargo >= 1)
{
    if (dropchance >= 0 && dropchance <= 1)
    {
        instance_create(x, y, pickupHealth);
    }
    
    if (dropchance >= 2 && dropchance <= 3)
    {
        instance_create(x, y, objPickupWeaponMissile);
    }
    
    if (dropchance >= 4 && dropchance <= 5)
    {
        instance_create(x, y, objPickupWeaponIon);
    }
    if (dropchance >= 6 && dropchance <= 7)
    {
        instance_create(x, y, pickupShield);
    }
}

//drop = pickupHealth;
//instance_create(x, y, drop);
