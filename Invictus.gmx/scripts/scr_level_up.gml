///scr_level_up(attribute)

/*
check if player presses a level-up key/button
check if credits are equal to level threshold
if sufficient, deduct credits and give bonus
if not, do nothing*/

attribute = argument0;

if (credits >= levelThreshold[level])
{
    credits -= levelThreshold[level];
    level += 1;
    nextLevel = levelThreshold[level];
    if (attribute == 1)
    {
        hp_max += 3;
        hp = hp_max;
        invulnerability_timer += 1
    }
        else if (attribute == 2)
        {
            movespeed += 5;
        }
        else if (attribute == 3)
        {
            // Implement player-influenced RNG
        }
}

