### COMP313
### Keely Haskett
### Assignment 1
### Journey of a Frog Fighter
#### https://youtu.be/9JgWo__dcuk
 
 

### Game Description
#### What is the main action in the game 
The main action in the game is to shoot the frogs and avoid touching them. Shooting the frogs will gain the player points, and colliding with them will lose the player lives, which when that hits zero, the game will be over.   
The game cannot be won.

#### What was the hardest part of the game to get working in Unreal 
The hardest part of the game to get working was the projectiles, which are entirely coded in C++.  
The main trouble I had was wanting to have the projectiles also be Paper2D actors like the main character and frogs. As the original tutorial I was following was just for a basic sphere bullet, I was trying to 'smash' a C++ Paper2D tutorial in with it.  
This didn't really work and it gave me a lot of troubles trying to use both. Also I'm very bad at C++. This code section took me a full day and a bit to get working.  
In the end, I made the decision to just follow the original tutorial fully and come to terms with it not being Paper2D.  
Another issue I had with this was being able to integrate the code into my existing blue-prints, though that ended up being an easy fix.

#### What is the most interesting part of the game 
The AI logic behind the frogs. It uses a combination of an AIController, PawnSensing, and Navigation Meshes to get the frogs to move around and chase the player.  
It ended up being fairly easy to implement too, and its a big element of the game.
