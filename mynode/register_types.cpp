#include "register_types.h"
#include "core/class_db.h"
#include "mynode.h"

void register_mynode_types(){
    ClassDB::register_class<MyNode>();
}
void unregister_mynode_types(){

}