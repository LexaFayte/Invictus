/// scr_enemy_spawn(level, spawnCap)

level = argument0;
cap = argument1;

switch level
{
    case 99:
        if (instance_exists (parentEnemyShip))
        {
            if (parentEnemyShip.instance_count > (cap-1))
            {
                // Stop the respawn countdown
                spawn_on = false;
            }
            if !(parentEnemyShip.instance_count > (cap-1)) 
            {
                // Resume the respawn countdown
                spawn_on = true;
            }
        }
        break;
}
