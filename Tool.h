#ifndef classTool
#define classTool

#include <iostream>
#include <vector>
#include "Wood.h"

class Tool
{
    public :
        using Id = std::string;
        using Name = std::string;
        using Type = enum{electric, non_electric};
        using Size = enum{little, medium, big};

        Name set_name(Name n);
        bool set_type (Type t);
        bool set_size (Size s);
        Size get_size () const;
        Name get_name () const;
        Type get_type () const;
        Id getId() const;
        virtual void print() const;
        virtual ~Tool() = 0;

    private :
        Name name_tool;
        Type type_tool;
        Size size_tool;
        Id id;
};
#endif
