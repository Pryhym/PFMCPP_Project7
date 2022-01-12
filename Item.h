#pragma once

#include <string>

struct Character;
struct Item
{
    Item(const std::string& name_, int effect );
    virtual void use(Character*) = 0;
    virtual ~Item();
    inline int getBoost() const { return boost; }
    inline const std::string& getName() { return name; }
private:
    std::string name;
    int boost;
};

