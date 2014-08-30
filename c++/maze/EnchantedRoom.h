#ifndef ENCHANTEDROOM_H
#define ENCHANTEDROOM_H

#include "Room.h"


class EnchantedRoom : public Room
{
    public:
        EnchantedRoom(int n = 0, Spell* sp = NULL): Room(n), _spell(sp) {}
    protected:
    private:
        Spell* _spell;
};

#endif // ENCHANTEDROOM_H
