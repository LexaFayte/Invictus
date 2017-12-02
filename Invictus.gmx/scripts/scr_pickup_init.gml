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
        break;
    case 2:
        weapon = weaponMissile;
        break;
    case 3:
        break;
    default:
        break;
}
