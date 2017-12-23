///SetAIPath(spawnLeft)
spawnLeft = argument0;
var pathIndex;

if(spawnLeft)
{
    pathIndex = random_range(0,4);
}
else
{
    pathIndex = random_range(4,7);
}
path_start(pathIndex, movespeed, path_action_restart, false);
