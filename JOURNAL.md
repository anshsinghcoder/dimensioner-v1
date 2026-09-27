---
title: "MApv1"
author: "rehann.shaikhh.02"
description: "the dimensioning machine that does not requires you to sell your soul amount of money."
created_at: "2026-09-07"
---

# 2026-09-27: firmware coded 

**Total time spent: 1 hour**

i have written a customisable firmware that user can calibrate as per their base plate and needs . 
it simply uses loops , voids and fuction calls to collect , store , calculate and display LWH and volumetric weight of the item ![Screenshot_2026-09-28_001851.png](https://cdn.hackclub.com/01a0e433-01e6-79e7-8ca9-3801f03b9e7d/Screenshot_2026-09-28_001851.png) 

# 2026-09-27: pcb enclosure mount 

**Total time spent: 45 minutes**

created a pcb enclosure , imported my pcb , added mounting holes in both the pcb and enclosure . base is not added as i think frame will have a base . lid is given that has a slip and lock bulge that slides perfectly ![Screenshot_2026-09-28_001243.png](https://cdn.hackclub.com/01a0e42f-1ff1-75c9-b16c-abae694947d0/Screenshot_2026-09-28_001243.png)![Screenshot_2026-09-28_001234.png](https://cdn.hackclub.com/01a0e42f-2bcb-7978-aef8-7711da2016b7/Screenshot_2026-09-28_001234.png)

# 2026-09-27: cad frame completed 

**Total time spent: 25 minutes**

continuing previous session after recharging my laptop . i created the top lidar sensors unique placement that has a aesthetic arch and a bulge pointing directly at base plate's corner added structures for resting and screen. all thats left is designing a pcb enclosure  ![Screenshot_2026-09-28_000857.png](https://cdn.hackclub.com/01a0e42c-299e-7610-9a9f-d1b2b118f444/Screenshot_2026-09-28_000857.png)

# 2026-09-27: cad session 2 

**Total time spent: 30 mins**

honestly saying in this session i was completely lost , trying to figure out how will wiring work how will screen fit , where to shell , where to join panes , lofting everything . this was completely trial error based session that helped me understand what to do i fixed the sketch and restarted the model , this was better instead of body sweep this extrusion was much better and the shelling was perfect however battery ran out see you soon![Screenshot_2026-09-28_000516.png](https://cdn.hackclub.com/01a0e426-cbcb-7594-b803-9aa9d82639f6/Screenshot_2026-09-28_000516.png)

# 2026-09-25: cad session 1 

**Total time spent: 35 minutes**

i started to create the cad model and trust me this was frustating as hell , navigating , all thwe controls took me fair share of time to learn which i cant log cuzz its not active development but still this was my try to create the base structure as usual the lapse was not resumed so many times but hey i will still log as much as the lapse ![image.png](https://cdn.hackclub.com/01a0d909-736e-7e04-99da-929f6a7934a9/image.png)

# 2026-09-25: copper wiring error handling 

**Total time spent: 1 hour 20 minutes**

![image.png](https://cdn.hackclub.com/01a0d902-5f3a-76a2-8a25-ba73b520c37b/image.png)so what happened was i had simply not taken in fact that i had to position the modules as per the esp module which is fixed in error handling devlog but i came across some tutorials and got to know that u have to create vias for blue wiring . i changed all the wires and created a better layout![Screenshot_2026-09-25_200902.png]

# 2026-09-20: adding a camera module 

**Total time spent: 1 hour**

i forgot to add a camera module pin , basically anytime a product is measured in LWH , its photo gets snapped after it gives a proper info print i had to add a 8 pin to my schematic . rewire it add crazy amount of vias to connect it cuz its 8 pins and i already have 3 sensors etc . but still we are done if u see the 8 pin in the very corner yup thats it !![Screenshot_2026-09-20_234741.png](https://cdn.hackclub.com/01a0c00c-22aa-7f60-9994-9650c63edf6d/Screenshot_2026-09-20_234741.png)

# 2026-09-19: layout complete 

**Total time spent: 1 hour**

since data base has lost it i'm re-writing this. i had to redo all the wiring as the pcb shifted to the very first session so did the schema . thus i went to schema replaced labels again , updated pcb , again created the layout from start and thanks to previous session recording i had captured all wirings and vias etc . this time i did even cleaner and better. gave my pcb frame , poured copper for grounding , et voila . no errors.![image.png](https://cdn.hackclub.com/01a0d8fb-9d28-76ae-ae00-a479e95d2c87/image.png)

# 2026-09-19: intial layout session 1

**Total time spent: 1 hour**

tried with layout 1 for pcb . had a very hard time wiring copper tracks . in the end i got 71 errors . i could not understood what happened but i was happy that i got the layout but i still had to figure  out a solution to fix these issues . turns out doing this is way hectic than i expected
![Screenshot_2026-09-19_233810.png](https://cdn.hackclub.com/01a0badd-5543-7db8-b6ca-7e0330d8c584/Screenshot_2026-09-19_233810.png)

# 2026-09-19: error handling 

**Total time spent: 40 mins**

this session was more of rewiring everything , because i use trackpad i accidentally over wired almost everything (it took some ai review to understand i wired everything wrong). thus i deleted old wires and made new connections , i forgot to add no connection cross marks thus resolving all errors notice how all the warning arrows are gone yup that was the work ...![image.png](https://cdn.hackclub.com/01a0d8ff-e4ed-7072-9f22-8d7bd378320e/image.png)

# 2026-09-19: schematic session 2 

**Total time spent: 1 hour 45 minutes**

![image.png](https://cdn.hackclub.com/01a0d8fe-a8a2-79b4-a3ac-f905e02d3bc8/image.png)!created usb pin connections , decoupled capacitors , added a thermal priniting module , added lidar sensors , gave power inputs to all it actualy had 111 errors :( . it was quite late in night so left it there . oh and i also added a buzzer and push switch - led for boot check

# 2026-09-19: schematic design 1

**Total time spent: 1 hour 10 minutes**

![image.png](https://cdn.hackclub.com/01a0d8fd-8839-740f-900d-5007d8abb2f4/image.png)i created initial schematic loading all core components , wiring basic logical connections , assessing product requirements and adding symbols accordingly. the esp takes 3.3v so to convert the incoming 5v to 3.3v i added a ams module and capacitors. I was not satisfied with this version it needs lot of work 

