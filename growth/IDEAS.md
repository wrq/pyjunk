## Ideas for Growth

First, I will complete the environment. There will need to be a little cartesian grid space for everything to live in. It will have some sort of limits for now. I think the combinatorial space of the eventual goal is quite insane, so it won't need to become big for some time. We'll start off nice and easy at 20 x 20 tiles.

So, each tile, let's start off with the basics.

* Agent
  * It should be able to "float" and essentially not collide with any object on the map.
* Tube
  * Tubes have an IN and OUT, and are constantly moving things from one side to the other, presumably at a fixed rate. Variability could be added at a later date.
* Source
  * A source of something, a kind of spawner. It generates a new Wood or Iron or something like that into the map at fixed intervals.
* Machine
  * They will have an IN and an OUT. For now, I think Machines will just combine things. Wood and Iron to create an Axe, or whatever. Eventually, I'd like to let them be little pieces of code essentially, a sequence of instructions that are executed inside the Machine, upon the arrival and departure of each item. 

Alright, that's the basic idea of what's going on. 

There are several larger questions that I want to ask, and here's how I plan to arrive at some sort of answer.

There will be some sort of evolutionary computing solution, standard approach at first, just mutate/crossover/selection sorta thing. 

How efficient can these agents become at finding an optimal solution to some sort of open-ended logistics question like this? It's basically a little mini-factorio environment I'm building, and asking them to play and find the answer to some question. (fitness, obviously) At first, the fitness might be number of axes made after 10,000 ticks have elapsed, but over time more elaborate questions could be asked.

I'd like to give them a permanent knowledge component. To be able to pass down their engineering knowledge somehow, like little minecraft recipes they can teach their offspring somehow, who could then fly around the map building more intricate machinery than before. 

That's the idea. 

Now, the question of Agent behavior. I don't really know how I'm going to handle it. I was thinking of some sort event loop. A little register vm running instructions sequentially, with its environment being fed to it as input to its processes. Essentially, it would run some amount of instructions per event, and it would have to delegate where it's CPU time should go. I'm not sure if that's very efficient, I'll think more on that.

## Rough Draft of AgentVM

Basically, it would work by having little values that can signal a certain event being emitted. The only trouble would be giving it multiple points of focus, which I think could be done somewhat sensibly. I need to draw some of this stuff out. Imagine though a little

  build = 0
  build_focus = (0, 0, Item(Factory()))

Right?

So, as it goes along, it might change the location of it's build focus as it realizes a certain area needs to be attended to. It could learn that behavior and do it, and the same with it's build focus. Each tick, it gets its environment in, runs it's tick code, and the values are modified or not modified as a result. So, it has a clear distinction of it's DNA (the tick code) and mind (it's values, RAM) to live with. This way, it is constrained to behaviors, but it can learn to optimize it's behavior.

Eventually, then I could give it a way to build new code, and ultimately, a way to parent its own offspring Agent. That will be the culmination of success in this project. I don't think very much evolutionary computing has taken into account that most of these little loops actually separate the parent and offspring, but why not bring them together? That's how real life is, we learn from our predecessors very, very much. In a certain manner of speaking, everything we learn is either brand new knowledge, or from our predecessors.