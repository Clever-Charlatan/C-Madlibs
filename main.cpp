/**************************************************************************
 *   Author    :  John Chen
 *   Assn #1   :  Madlibs
 *   CLASS     :  CS 002
 *   SECTION   :  MTRF: 7a - 12p
 *   Due Date  :  6/24/19
 *************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/**************************************************************************
 *
 * MADLIBS
 * ________________________________________________________________________
 * This program accepts ten different words of different physical types
 * to be inputted into a pre-written paragraph. It is then outputted to
 * the monitor as a complete paragraph with all the words and sentences.
 * ________________________________________________________________________
 * INPUT:
 *   soundEffect: a sound effect word -> input from user
 *   furniture: name of a furniture -> input from user
 *   person: word for last name of celebrity -> input from user
 *   mascot: one word name of a mascot -> input from user
 *   fruit: name of a fruit -> input from user
 *   soda: name of a soda -> input from user
 *   bodyFeature: the name of a body feature -> input from user
 *   toy: one word name of a toy -> input from user
 *   officeItem: name of an office item -> input from user
 *   action: an action word -> input from user
 *
 * OUTPUT:
 *   a combined paragraph with the inputted words placed in certain spots
 *   within the paragraph as desired
 *************************************************************************/
int main()
{
    string soundEffect;   //INPUT - sound effect name
    string furniture;     //INPUT - furniture name
    string person;        //INPUT - celebrity first name
    string mascot;        //INPUT - mascot name
    string fruit;         //INPUT - fruit name
    string soda;          //INPUT - soda name
    string bodyFeature;   //INPUT - body feature name
    string toy;           //INPUT - toy name
    string officeItem;    //INPUT - office item name
    string action;        //INPUT - an action word
    string measuringStick(80, '-'); //OUPUT - produces a line of 80 dashes

    //output the class heading to the screen
    cout << "***********************************************\n";
    cout << "   Programmed by: John Chen\n";
    cout << "   Student ID   : 10345065\n";
    cout << "   CS1B         : MTRF: 7a - 12p\n";
    cout << "   Assn #1      : Madlibs\n:";
    cout << "***********************************************\n";

    //OUTPUT & INPUT: Ask for certain words and correlate them with the
    //                corresponding variables
    cout << "All entries should be one word.";
    cout << "\n" << "\n";

    cout << "Please enter a sound effect: ";
    cin >> soundEffect;
    cout << "\n" << "\n";

    cout << "Please enter a furniture name: ";
    cin >> furniture;
    cout << "\n" << "\n";

    cout << "Please enter a female celebrity's first name: ";
    cin >> person;
    cout << "\n" << "\n";

    cout << "Please enter a male mascot name: ";
    cin >> mascot;
    cout << "\n" << "\n";

    cout << "Please enter a fruit: ";
    cin >> fruit;
    cout << "\n" << "\n";

    cout << "Please enter a soda: ";
    cin >> soda;
    cout << "\n" << "\n";

    cout << "Please enter a one-word body feature: ";
    cin >> bodyFeature;
    cout << "\n" << "\n";

    cout << "Please enter a one-word toy: ";
    cin >> toy;
    cout << "\n" << "\n";

    cout << "Please enter an office item: ";
    cin >> officeItem;
    cout << "\n" << "\n";

    cout << "Please enter a past-tense action: ";
    cin >> action;
    cout << "\n" << "\n";

    //OUTPUT: produces a line of 80 dashes
    cout << measuringStick;
    cout << "\n";

    //OUTPUT: displays first paragraph with certain words inserted
    cout << soundEffect << "! The flaming hot " << furniture << " hit "
         << person << " in the back of her head." << endl;
    cout << "Her head was pushed forward from the impact of the "
         << furniture << " as " << mascot << endl;
    cout << "shoved her to the ground forcefully. Reaching behind him, "
         << mascot << " took the " << endl;
    cout << fruit << " from out of his pant's back pocket and started to "
                     "go to work on the" << endl;
    cout << "body. The " << fruit
         << " forcefully ripped inside the body 9 times until "
         << mascot << endl;
    cout << "was satisfied. Red velvet colored " << soda
         << " was pouring from " << person << "'s back" << endl;
    cout << "as " << mascot << " wiped the " << soda << " off the "
         << fruit << " onto " << person << "'s shirt" << endl;
    cout << "and placed it back in his back pocket." << endl;

    cout << endl;

    //OUTPUT: displays second paragraph with certain words inserted
    cout << "Of course " << mascot
         << " felt bad for what he was doing, but he didn't have any"
         << endl;
    cout << "other option. " << mascot
         << " started to scan the area, making sure there wasn't" << endl;
    cout << "anyone coming or looking out their windows just yet. "
         << mascot << " began to" << endl;
    cout << "evaluate the murder scene. The victim had on a Target "
            "uniform obviously because" << endl;
    cout << "she was going to work. Her " << bodyFeature
         << " looked out of place and her uniform shirt" << endl;
    cout << "was a cherry kool-aid color from the stab wound in her "
            "back in her back. Also" << endl;
    cout << person << " had car keys in her hand. The killer assumed "
                      "she was heading for her" << endl;
    cout << "cool-colored " << toy << "." << endl;

    cout << endl;

    //OUTPUT: displays third paragraph with certain words inserted
    cout << "The " << mascot << " smoothly took the car keys out of the "
         << person << "'s hands without" << endl;
    cout << "noticeably moving her fingers. The " << mascot
         << " rushed to the " << toy << " and" << endl;
    cout << "opened the doors. Shakily, " << mascot
         << " shoved the keys in the ignition without" << endl;
    cout << "breaking them. With a sound familiar to a(n) " << officeItem
         << " the " << toy << " started " << endl;
    cout << "and he " << action
         << " out of the development without hesitation." << endl;
    cout << measuringStick << endl;

    cout << endl;

    //OUTPUT: displays the credits to this story to the monitor
    cout << "Adapted from \"The Secret Killer\" by Donovan Wilson."
         << endl;
}
