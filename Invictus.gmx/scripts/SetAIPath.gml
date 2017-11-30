///SetAIPath(spawnLeft)
spawnLeft = argument0;
var pathIndex;

if(spawnLeft)
{
    pathIndex = irandom_range(0,4);
}
else
{
    pathIndex = irandom_range(4,7);
}
path_start(pathIndex, 5, path_action_restart, true);
