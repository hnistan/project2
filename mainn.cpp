#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <iomanip>
#include "carpenter.h"
                                                     
using namespace std;

void Menu ()
{
    puts(" ");
    cout << "To add wood      [wood]" << endl;
    cout << "To add tool      [tool]" << endl;
    cout << "To exit          [exit]" << endl;
    cout << "Enter a command : ";
}


void operator+ (const int & i, Saw & s)                   //operator overloading
{
    if (s.get_size() == 3)
    {
        throw invalid_argument ("It is not possible to change the size");
        return;
    }
    
    s.set_size(s.get_size() + i);                       //resize tools to size i

    if (s.get_size() > 3)
    {
        throw invalid_argument ("It is not possible to change the size");
        return;
    }   
}

vector <Wood> addWood (vector <Wood> & w)
{
    float temp;
    string name;
    Wood ww("cherrywood", 20, 39, 20);

    cout << "Enter length : ";
    cin >> temp;
    ww.set_length(temp);

    cout << "Enter width : ";
    cin >> temp;
    ww.set_width(temp);

    cout << "Enter height : ";
    cin >> temp;
    ww.set_height(temp);

    cout << "Enter type (cherrywood, walsawood, blackmaple, walnut) : ";
    cin >> name;
    ww.set_type(name);

    w.push_back(ww);

    return w;
}

void addTool (vector <Tool *> & t)
{
    Tool tt;
    string nameTool;
    int typeTool;
    int sizeTool;
    string tool;

    cout << "Enter your tool (saw, drill) : ";
    cin >> tool;

    if (tool == "saw")
    {
        Tool * s = new Saw;
        s->set_name("saw");
        cout << "Enter type tool (0 for non-electric, 1 for electric) : ";
        cin >> typeTool;
        if (typeTool == 0 || typeTool == 1)
        {
            s->set_type(typeTool);
        }
        else
        {
            throw invalid_argument ("You should enter 0 or 1");
        }
        

        cout << "Enter size tool (3 for big, 2 for medium, 1 for little) : ";
        cin >> sizeTool;
        if (sizeTool == 1 || sizeTool == 2 || sizeTool == 3)
        {
            s->set_size(sizeTool);
        }
        else
        {
            throw invalid_argument ("You should enter 1 or 2 or 3");
        }
        
        t.push_back(s);
    }
    
    if (tool == "drill")
    {
        Tool * d = new Drill;
        d->set_name("drill");
        cout << "Enter type tool (0 for non-electric, 1 for electric) : ";
        cin >> typeTool;
        if (typeTool == 0 || typeTool == 1)
        {
            d->set_type(typeTool);
        }
        else
        {
            throw invalid_argument ("You should enter 0 or 1");
        }
        
        cout << "Enter size tool (3 for big, 2 for medium, 1 for little) : ";
        cin >> sizeTool;
        if (sizeTool == 1 || sizeTool == 2 || sizeTool == 3)
        {
            d->set_size(sizeTool);
        }
        else
        {
            throw invalid_argument ("You should enter 1 or 2 or 3");
        }
        t.push_back(d);
    }

}

void showw (vector <Tool *> t)
{
    for (size_t i = 0; i < t.size(); i++)
    {
        cout << t[i]->name_tool << "\t" << t[i]->type_tool << "\t" << t[i]->size_tool << endl;
    }
}

void show (vector <Wood> w)
{
    for (size_t i = 0; i < w.size(); i++)
    {
        cout << w[i].type << "\t" << w[i].length << "\t" << w[i].width << endl;
    }
}

int main ()
{                                     
    vector <Wood> w;
    vector <Tool *> t;
    string command;

    Menu();

    while (true)
    {
        cin >> command;

        if (command == "wood")
        {
            puts(" ");
            try
            {
                addWood(w);
            }
            catch(invalid_argument & e)
            {
                cerr << e.what() << '\n';
            }  
        }

        if (command == "tool")
        {
            puts(" ");
            try
            {
                addTool(t);
            }
            catch(invalid_argument & e)
            {
                cerr << e.what() << '\n';
            }   
        }
                
        if (command == "show")                  //برای تست وکتور چوب
        {
            puts(" ");
            show(w);
        }

        if (command == "showw")               //برای تست وکتور ابزار
        {
            puts(" ");
            showw(t);
        }
        
        if (command == "exit")
        {
            exit(0);
        }

        Menu();
    }

    return 0;
}

