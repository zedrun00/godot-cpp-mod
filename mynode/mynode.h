#pragma once

#include "scene/2d/node_2d.h"
#include "scene/2d/sprite.h"

class MyNode: public Node2D{
    GDCLASS(MyNode, Node2D)

public:
    
private:
    Sprite *sprite;

protected:
    static void _bind_methods();
    void _notification(int what);
};