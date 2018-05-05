# CST136SRS02
Polynesian Polymorphism

Name: Forrest Warner

Notes:

-no cin && no cout
-Classes that contain at least one pure virtual function are known as abstract base classes.

---

Failures/Errors:

-unable to link Water/Wind to Boat.
-no demo, not even for raft... :(
-Hull base class and sub classes dont function properly
-Sail has no interaction with Wind
-Paddle has little interaction with Water
-Some of my dtors aren't working correctly
-Propulsion Sail is not limited to Sailboat(unimplemented)

Successes:

-Navigation/Chart work properly
-Raft successfully constructs
-Most of the classes are almost setup completely (even if not all properly)
-I learned a lot about virtual/abstract/augment/override and more.

---

Purpose:

[*] Learn C++ Polymorphism
[*] Practice creating classes
[*] Understand abstraction and abstract classes

[*] Project Name: Waka

In this assignment you will create different boats to take you on your voyage around the Pacific Ocean. You already have all the safety gear and the knowledge to use it should you run across rough seas. Many wonders await you, but before you do that, you must make sure you can handle your boat, so we will be sticking close to the coast of New Zealand.  

[*] You will create 3 different types of boats. A raft, a canoe, and a sailboat.  

[] Only a sailboat may have a sail. 

[*] You must name each of your boats for them to have [mana](https://en.wikipedia.org/wiki/Mana#M%C4%81ori_use).  

[*] You will find the UML blueprints to assemble your boats in a file called Waka.png. [See: Waka](https://en.wikipedia.org/wiki/Waka_(canoe))  

[] After you have assembled your boats to specification, take them on a test voyage.  

[*] Create a Wind and Current object as well as a Chart to keep track of your navigation.  

[*] Your boats should turn more easily if MonoHull but be more stable if MultiHull. A MultiHull boat isn't as easy to capsize and your code should reflect this.

[] A sail is greatly impacted by the wind and can never move you within +-45 degrees of direction of the wind. Doing so will capsize your boat. However, your speed will be greatly increased by a sail. 

[*] A raft has no control and is only able to drift with the current.

[] Simulate the conditions of a voyage and chart your course around the entire coast of New Zealand.  [See: feature_(NZLand).jpg](https://github.com/labermt/CST136SRS02/blob/master/nz.png)

[] After you have tested your boats, be able to explain which one would be your choice for a trip across the Pacific Ocean.  

[] Feel free to add provisions and gear (compass, ropes, food, drinking water, ...) as you see fit.  Also feel free to add any additional boat items such as an anchor, rudder, ...  

[] There are no points given for being fast or even successful navigation, your only goal is to create your boats to the UML specification, describe how you assembled them, and demo testing them. 

[] Be sure you account for rough seas in your simulation and have your safety gear ... urrr... code (assertions, exceptions, ...) ready and be able to demonstrate it functioning.  

[*] If you have a destructor in any class, follow the guideline [C.35: A base class destructor should be either public and virtual, or protected and nonvirtual](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rc-dtor-virtual)  

[] If you want to refer to a concrete class in your code beyond construction, you must obtain permission from the master boat builder (aka your instructor). 

[*] Be creative and have fun on your test voyage. 

---

Citations:

- Referenced Old Loxadonta Project. Modified some methods initially coded by Professor Mitch Besser (specifically, methods from gps.cpp). [See: GitHub] (https://github.com/labermt/CST126SRS03/blob/master/CST126SRS03/gps.cpp)
- Read up on virtual member functions. [See:C++ FAQ](http://www.cs.technion.ac.il/users/yechiel/c++-faq/overview-virtual-fns.html)