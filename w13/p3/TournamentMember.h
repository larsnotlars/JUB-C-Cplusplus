/*
CH-230-A
a12p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

class TournamentMember
{
private:
//properties
    char firstname[36];
    char lastname[36];
    char dob[11];
    int age;
    bool first; //tells if it is the  members first tournament
    static char loc[40];
public:
//Constructors
    TournamentMember(const char* ,const char* , const char* , int , bool);
    TournamentMember();
    TournamentMember(const TournamentMember&);
//Destructor
    ~TournamentMember();
//setters
    void setfirstname(const char *newfirst)
    {
        for (int i = 0; i < 36; i++)
            firstname[i] = newfirst[i];
    }
    void setlastname(const char *newlast)
    {
        for (int i = 0; i < 36; i++)
            lastname[i] = newlast[i];
    }
    void setdob(const char *newdob)
    {
        for (int i = 0; i < 11; i++)
            dob[i]= newdob[i];
    }
    void setage(const int newage){ age = newage; }
    void setfirst(const bool newfirst) { first = newfirst; }
//getters
    char* getfirstname() {return firstname;}
    char* getlastname() {return lastname;}
    char* getdob() {return dob;}
    int getage() {return age;}
    bool getfirst() {return first;}
//service methods
    void print();
    static void changeloc(const char*);
};

class Player : public TournamentMember
{
private:
//properties
    int number;
    char position[50];
    int goals;
    bool rightf;
public:
//setters
    void setnum(int newnumb) { number = newnumb; }
    void setpos(const char * newpos)
    {
        for (int i = 0; i < 50; i++)
            position[i] = newpos[i];
    }
    void setgol(int newgol) { goals = newgol; }
    void setrig(bool newrig) { rightf = newrig; }
//getters
    int getnum(){ return number;}
    char* getpos(){ return position;}
    int getgol() { return goals;}
    bool getrig() {return rightf;}
//Construcors
    Player(const char* ,const char* , const char* , int , bool,
     int ,const char* ,int ,bool);
    Player(const Player&);
    ~Player();
//service methods
    void printplay();
    void incgol();
};