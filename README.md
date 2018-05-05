# CST136SRS02
Polynesian Polymorphism

Name: Phantump

Notes: I was unable to determine a way to identify what kind of propulsion was but into the array, so for all intense and purposes, a Canoe could add a sail, if it wanted. However Rafts can't add anything. The wind and water are static, and so while there is a condition to captsize a boat if the waves were high enough given the right hull, it'll never hit right now. As for propulsion, the program assumes if you're pushing harder than the waves, than you can correct for course, so even if the waves are against you, so long as your propulsion is higher, it has no effect. I put into place means and methods of traveling, but it is not implimented well, and so the boats sail about as well as I would, and crash almost immidately on land, save the raft which always drifts out to sea. At the end of the travel, there are blocks to impliment a return of what had happened during your travel (you crashed into the inland, or your boat captsized) but as there is no call for reutrning this type of information, they're simply blan with comments saying what would lead you to being in that block, and can be used for later.

---

Purpose:

- Learn C++ Polymorphism
- Practice creating classes
- Understand abstraction and abstract classes

Solution Name: CST136SRS02
Project Name: Waka

In this assignment you will create different boats to take you on your voyage around the Pacific Ocean. You already have all the safety gear and the knowledge to use it should you run across rough seas. Many wonders await you, but before you do that, you must make sure you can handle your boat, so we will be sticking close to the coast of New Zealand.  

You will create at least 3 different types of boats. A raft, a canoe, and a sailboat.  Only a sailboat may have a sail. 

You must name each of your boats for them to have [mana](https://en.wikipedia.org/wiki/Mana#M%C4%81ori_use).  

You will find the UML blueprints to assemble your boats in a file called Waka.png. [See: Waka](https://en.wikipedia.org/wiki/Waka_(canoe))  

After you have assembled your boats to specification, take them on a test voyage.  

Create a Wind and Water object as well as a Chart to keep track of your navigation.  

Your boats should turn more easily if MonoHull but be more stable if MultiHull.  

A sail is greatly impacted by the wind and can never move you within +-45 degrees of direction of the wind. Doing so will capsize your boat. However, your speed will be greatly increased by a sail.  A MultiHull boat isn't as easy to capsize and your code should reflect this. 

A raft has no control and is only able to drift with the current.  

Simulate the conditions of a voyage and chart your course around the entire coast of New Zealand.  (See included map)

After you have tested your boats, be able to explain which one would be your choice for a trip across the Pacific Ocean.  

Feel free to add provisions and gear (compass, ropes, food, drinking water, ...) as you see fit.  Also feel free to add any additional boat items such as an anchor, rudder, ...  

There are no points given for being fast or even successful navigation, your only goal is to create your boats to the UML specification, describe how you assembled them, and demo testing them. 

Be sure you account for rough seas in your simulation and have your safety gear ... urrr... code (assertions, exceptions, ...) ready and be able to demonstrate it functioning.  

If you have a destructor in any class, follow the guideline [C.35: A base class destructor should be either public and virtual, or protected and nonvirtual](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rc-dtor-virtual)  

If you want to refer to a concrete class in your code beyond construction, you must obtain permission from the master boat builder (aka your instructor). 

Be creative and have fun on your test voyage. 
