#include <string>
/*
// Dice Object
// Description: this is basically a random number generater based on the regular D&D roll terms
// str : "3D6+2" it means we have 3 6-faced dice and the rolled result will br added with 2
// number : the number of dices we have
// faces : the number of faces of the dice
// modifier : the additional modifier
*/
class Dice
{
public:
    Dice(string str);
private:
    int number;
    int faces;
    int modifier;
};
