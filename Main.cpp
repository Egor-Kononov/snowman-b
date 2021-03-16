#include "snowman.hpp"
#include <stdexcept>
using namespace std;

/*                     ___      _       ___
Hats --> 1. _===_  2. ..... 3. /_\  4. (_*_)

Nose/Mouth  -->  1 Normal , 2 Dot . 3  Line _ 4  None

Left eye -->   1 Dot . 2 Bigger Dot o 3 Biggest Dot O 4 Closed -

Right eye -->  Same list as left eye

Left Arm --> 1 Normal Arm < 2 Upwards Arm \ 3 Downwards Arm / 4 None

Right Arm --> 1 Normal Arm > 2 Upwards Arm  / 3 Downwards Arm  \  4 None

Torso --> 1 Buttons  :  2 Vest ] [ 3 Inward Arms > < 4 None

Base --> 1 Buttons  :  2 Feet " " 3 Flat ___ 4 None 

*/

int main(){
    cout<< ariel::snowman(11111111)<<endl;

    cout<< ariel::snowman(44444444)<<endl;

    cout<< ariel::snowman(12344321)<<endl;

    cout<< ariel::snowman(12124343)<<endl;

    cout<< ariel::snowman(22222222)<<endl;

    cout<< ariel::snowman(33333333)<<endl;

    cout<< ariel::snowman(12343434)<<endl;

    cout<< ariel::snowman(23232111)<<endl;

    cout<< ariel::snowman(43211234)<<endl;

    cout<< ariel::snowman(12312431)<<endl;


    try {
		cout << ariel::snowman(5) << endl;   
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl; 
	}

     try {
		cout << ariel::snowman(-11111111) << endl;   
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl; 
	}

     try {
		cout << ariel::snowman(11181111) << endl;   
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl; 
	}

    
}