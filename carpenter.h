#include <iostream>
#include <string>

#ifndef carpenter_h
#define carpenter_h

using namespace std;

enum WoodType
{
    cherrywood,                 //choobe gilas
    walsawood,                 //choob walsa
    blackmaple,                //afraye sia
    walnut                     //choob gerdo
};

class Wood
{
    public : 
        Wood (WoodType woodtype, float length, float width, float height);  
        bool set_length (float l);
        bool set_width (float w);
        bool set_height (float h);
        float get_length () const;
        float get_width () const;
        float get_height () const;

    private :
        float length;                          
        float width;                           
        float height; 
        WoodType type;                       
};

class Tool
{
    public :
        string set_name(string n);
        bool set_type (int t);
        bool set_size (int s);
        int get_size () const;
        string get_name () const;
        int get_type () const;
        virtual void print() const;

    private :
        string name_tool;
        int type_tool;                         //electric or non-electric   (0 for non-electric, 1 for electric)
        int size_tool;                         //3 for big, 2 for medium, 1 for little

};

class Saw : public Tool
{
    public :
        int set_number_of_times_used();
        int get_number_of_times_used();
    private :
        int number_of_times_used;
};


class Drill : public Tool
{
    public :
        bool set_condition(int c);
        int get_condition() const;
        int set_number_of_times_used();
        int get_number_of_times_used();
    private :
        int condition;                          //on and off key (0 for off, 1 for on)
        int number_of_times_used;
};


#endif