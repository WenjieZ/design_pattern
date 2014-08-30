#ifndef DOORNEEDINGSPELL_H
#define DOORNEEDINGSPELL_H

#include "Door.h"
#include "Spell.h"


class DoorNeedingSpell : public Door
{
    public:
        DoorNeedingSpell(Room* r1 = NULL, Room* r2 = NULL) : Door(r1,r2) {}
    protected:
    private:
};

#endif // DOORNEEDINGSPELL_H
