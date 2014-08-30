#ifndef WALL_H
#define WALL_H

#include <MapSite.h>


class Wall : public MapSite
{
    public:
        Wall();
        virtual void enter();
};

#endif // WALL_H
