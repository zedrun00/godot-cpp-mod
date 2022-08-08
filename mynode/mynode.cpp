#include "mynode.h"
#include "core/engine.h"
#include "core/io/resource_loader.h"
void MyNode::_bind_methods(){

}
void MyNode::_notification(int what){
    switch(what){
        case NOTIFICATION_READY:{
            sprite=memnew(Sprite);
            add_child(sprite);

            RES res = ResourceLoader::load("res://icon.png");
            sprite->set_texture(res);

            if(!Engine::get_singleton()->is_editor_hint()){
                set_process(true);
            }
        }break;

        case NOTIFICATION_PROCESS:{
            //print_line("mynode process!!!!");
            float delta=get_process_delta_time();
            float rotation=sprite->get_rotation();
            sprite->set_rotation(rotation+Math::deg2rad(360.0f)*delta);
        }break;
    }
}