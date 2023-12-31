# Personal goal descirption 

## What did I plan to do with this project?
-> I was trying to make a simple farm game for intending the game jam.
The main purpose is not to win the game jam but to have some project-based learning for my personal
career. 
You can say it is not much of "What players want" but more of "What I want to try to learn" kind of game.
(Which is not good mindset for game developer)

## What have I done? 
-> So far, I have tried using Git version control with Unreal Engine. This is pretty new to me as I was using SVN when I worked with Unreal for the first time.
In the early stage of development, I tried to used GDD template for the jam as well. I am not quite a guy with creative idea when it comes to the design. 

But atleast I tried some principles when designing such as MoSCoW Method, and tried to separate business idea and development idea. Even tho, I don't know if 
that's correctly separate.

Then I started to program around things starting from First person template of Unreal Engine. This is the timeline of system implemented
1. Grabbing items [https://youtu.be/k6oKBVRaLLo?si=HFKvPzQBA4pVlp60] 
(I just know what is physic handler is with this video but not much of how it can be implemented outside this tutorial. I just doesn't like how we have to used update event as it can be seem as performance heavied)

2. Item and its selling point 
(This mainly works around the collision system of Unreal. It is implemented this way because I was not so familar with collision system. So I think this practise will improve my collision foundation. 
I think to go advance is to have sturdy foundation first.)

3. Money Subsytem [https://www.youtube.com/live/v5b1FvKBYzc?si=c86j_dSMXcE4dRaq]
This is a small part of my project that used C++ to implement. I decided to use Subsystem C++ because it seems to avoid coupling code in my game. 
And it is interesting system to explore as it can grow extensively. 

4. Win/Lose Game 
I tried to work with HasGameEnded() [https://docs.unrealengine.com/5.3/en-US/API/Runtime/Engine/GameFramework/APlayerController/GameHasEnded/] as I learnt it from Udemy [https://www.udemy.com/share/101Weu3@X0mi8-jgmOGQ8srwgX4qWMna8YQiKtr4gp1x93jUuOYDW-PfjRCohVB322iRaYi57Q==/].
But I could not find it in Blueprint. So I have to hard code through it using custom event and chain calling. Resulting in unnessary coupled code.

5. Wolf/Enemy 
First, I do an empty collision that standing still. Just to test with collision of it.
Then, I used Apply Damage function on bullet and Damage Event on Wolf. 
[https://docs.unrealengine.com/4.27/en-US/BlueprintAPI/Game/Damage/ApplyDamage/]

After that, I started to do AI with it. Using Behavior Tree and Blackboard.
And in the end, the wolf can chase after the item and patrol around the map.
I did not implement EQS but I did implement Perception AI to help me work with chasing item. 
[https://youtu.be/iY1jnFvHgbE?si=Jrg-nB0GlCQneVoP]
From doing that, I also learn to use AI Debugging Tool as well [https://docs.unrealengine.com/4.27/en-US/InteractiveExperiences/ArtificialIntelligence/AIDebugging/]

6. Interfaces
After developing all of that above, I go for UIs. So that the game can be easier to understand by the player. 
It is not perfect but I have worked with HUD and widgets of unreal engine. 

7. Replacing models and decorating the map
So after I got all the basic ready. I go for aesthetic of the game. 
By models of Petite Jello (My Artist) and imported assets from the asset store of Epic Games. 
With imported asset from store I learn how to used landscape and foliage mode as well. Also spline.
Pretty disappointed when I found out Procedural Mesh Generation does not exist in 5.1

Foliage
[https://youtu.be/xo9L7RRM1-U?si=dzt5uyQTqgzk39jZ]

Spline
[https://youtu.be/OdjvlvGRYRE?si=2bD1SssP9oJ1e-Ce]

8. Audio 
So far, I have not been doing so much of the coding with this one.
I just work around the Audio Cue and audio files. And a little bit of animation notify to play sound.
Animation notify is pretty handy as it reduces coupling and easier to manage.
[https://youtu.be/jzKZHVx_NzA]

9. Build 
First time I built it, it took 30 minutes. 
The second time is just 30 secs. 
The reason behind the difference is I did not specifically select what maps for it to built.
So it decided to included all maps which took big part it that build. 
[https://forums.unrealengine.com/t/how-do-i-package-only-part-of-my-project/349995]

## What have I learnt doing this project
-> There are a lot of things I learnt but to make them in list it will be like this.
- Choosing Version Control [https://www.youtube.com/watch?v=faYmvw_Pd-A&pp=ygUgc291cmNlIGNvbnRyb2wgYW5kIHVucmVhbCBlbmdpbmU%3D]
- Basic of Source Control in Unreal [https://docs.unrealengine.com/5.0/en-US/using-source-control-in-the-unreal-editor/]
- Physic Handler [https://youtu.be/k6oKBVRaLLo?si=HFKvPzQBA4pVlp60] 
- Subsytem [https://www.youtube.com/live/v5b1FvKBYzc?si=c86j_dSMXcE4dRaq]
- Damage [https://docs.unrealengine.com/4.26/en-US/BlueprintAPI/Game/Damage/]
- AI [https://youtu.be/iY1jnFvHgbE?si=Jrg-nB0GlCQneVoP]
- Foliage mode [https://youtu.be/xo9L7RRM1-U?si=dzt5uyQTqgzk39jZ]
- Landscape mode [https://www.youtube.com/watch?v=JSjtHU6xuDE&pp=ygUXbGFuZHNjYXBlIHVucmVhbCBlbmdpbmU%3D, https://youtu.be/3zy5oMXuO04?si=QMmqkmRiX568kBqq]
- Anim notify [https://youtu.be/jzKZHVx_NzA]
- Build [https://forums.unrealengine.com/t/how-do-i-package-only-part-of-my-project/349995]
