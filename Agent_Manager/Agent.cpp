// Agent.cpp
// A source file that contains the definition of the Agent class

#include "Agent.h"

// Initialize the agent with a state and an action function
Agent::Agent(int state, int (*action_function)(int, int))
{
    this->state = state;
    this->action_function = action_function;
}

// Update the agent's state and return an action based on the percept
int Agent::act(int percept)
{
    this->state = update_state(this->state, percept);         // Update the state based on the percept
    int action = this->action_function(this->state, percept); // Choose an action based on the state and the percept
    return action;
}

// Update the agent's state based on the percept
// This method can be overridden by subclasses to implement different update rules
int Agent::update_state(int state, int percept)
{
    return state; // By default, do not change the state
}