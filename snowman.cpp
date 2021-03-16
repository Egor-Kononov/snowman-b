#include "snowman.hpp"

int check_of_input(int input){
    int result = 0;
    while (input != 0)
    {
        int temp = input%dev;
        if(temp > column || temp < choice){
            result = 1;
            return result;
        }
        input = input/dev;
    }
    return result;
}

namespace ariel{
    string snowman(int input){
        if(input < min_num || input > max_num){
            throw out_of_range("invalid input");
        }
        if(check_of_input(input)!= 0){
            throw out_of_range("invalid input");
        }
        string arm_up_temp = "\n";
        string l_eye_temp ;
        string tors_temp ;
        string result ;
        int count = number_of_cases;
        do{
            int temp = input%dev;
            switch(count){
                case hats:
                    result = hat.at(temp-1)+result;
                    break;
                case noses:
                    result = arm_up_temp+l_eye_temp+nose.at(temp-1)+result;
                    break;  
                case left_eyes:
                    l_eye_temp = left_eye.at(temp-1);
                    break;  
                case right_eyes:
                    result= right_eye.at(temp-1)+result;
                    break;
                case left_arms:
                    if(temp == 2){
                        result = arm_up_temp+" "+tors_temp+result;
                        arm_up_temp = left_arm.at(temp-1);
                    }else{
                        result = arm_up_temp+left_arm.at(temp-1)+tors_temp+result;
                        arm_up_temp = " ";
                    }
                    break;
                case right_arms:
                    if(temp == 2){
                        arm_up_temp = right_arm.at(temp-1);
                        tors_temp = tors_temp+"\n"; 
                    }else{
                       tors_temp = tors_temp+right_arm.at(temp-1); 
                    }
                    break;
                case torses:
                    tors_temp = torso.at(temp-1); 
                    break;
                case bases:
                    result=base.at(temp-1);
                    break;                
            }
            count--;
            input = input/dev;
        }while (count != 0);
       
        
        

        return result;
    }
}