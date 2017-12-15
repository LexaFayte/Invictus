/// scr_pickup_init(hp, cash, weapon, shield)
// Initialize the pickup. use '0' for inapplicable fields when invoking

hp          = argument0;
cashStash   = argument1;
weapon      = argument2;
shield      = argument3;

switch (weapon)
{
    case 0:
        break;
    case 1:
        weapon = weaponTorpedoE;
        weaponDelay = 6;
        break;
    case 2:
        weapon = weaponMissile;
        weaponDelay = 9;
        break;
    case 3:
        weapon = weaponIon;
        weaponDelay = 12;
        break;
    default:
        break;
}
