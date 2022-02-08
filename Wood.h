#ifndef classWood
#define classWood


#include <iostream>
#include <vector>

class Saw;
class Drill;

class Wood
{
    friend class Saw;
    friend class Drill;

    public :
        using Id = std::string;
        using Length = float;
        using Width = float;
        using Height = float;
        using Type = enum{cherrywood,walsawood,blackmaple,walnut};

        Wood (Type woodtype, float length, float width, float height);
        void set_length (float l);
        void set_width (float w);
        void set_height (float h);
        void set_type(Type type);
        Type get_type();
        Length get_length () const;
        Width get_width () const;
        Height get_height () const;
        Id getId();


    private :
        Length length;
        Width width;
        Height height;
        Type type;
        Id id;
};
#endif
