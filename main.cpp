#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:dog
//  action 1:growl
dog.growl();
//  action 2:run
dog.run();
//  action 3:bark
dog.bark();
//  2)
//  Noun:car
//  action 1:stop
car.stop();
//  action 2:turn left
car.turnLeft();
//  action 3:accelerates
car.accelerate();
 
//  3)
//  Noun:light
//  action 1:dims
light.dim();
//  action 2:turns off
light.turnOff();
//  action 3:changes color
light.changeColor(); 
//  4)
//  Noun:baby
//  action 1:cry
baby.cry();
//  action 2:poop
baby.poop();
//  action 3:eat
baby.eat();
//  5)
//  Noun:ball
//  action 1:bounce
ball.bounce();
//  action 2:deflate
ball.deflate();
//  action 3:roll
ball.roll(); 
//  6)
//  Noun:plant
//  action 1:grow
plant.grow();
//  action 2:whither
plant.whither();
//  action 3:bear fruit
plant.bearFruit();
//  7)
//  Noun:hand
//  action 1:open
hand.open();
//  action 2:close
hand.close();
//  action 3:rotate clockwise
hand.rotateClockwise(); 
//  8)
//  Noun:raccoon
//  action 1:steal cat food
raccoon.stealCatFood();
//  action 2:run away
racoon.runAway();
//  action 3:climb
raccoon.climb(); 
//  9)
//  Noun:person
//  action 1:walk
person.walk();
//  action 2:talk
person.talk();
//  action 3:swim
person.swim(); 
//  10)
//  Noun:snake
//  action 1:slither
snake.slither();
//  action 2:eat
snake.eat();
//  action 3:shed skin
snake.shedSkin(); 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
