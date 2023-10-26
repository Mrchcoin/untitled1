// Agent.h
// A header file that contains the declaration of the Agent class

#ifndef GENERAL_AGENT_H
#define GENERAL_AGENT_H

// A general agent class that can perform actions based on percepts
class Agent
{
private:
    // The agent's internal state
    int state;
    // A function pointer that takes a percept and returns an action
    int (*action_function)(int, int);

public:
    // Initialize the agent with a state and an action function
    Agent(int state, int (*action_function)(int, int));
    // Update the agent's state and return an action based on the percept
    int act(int percept);
    // Update the agent's state based on the percept
    // This method can be overridden by subclasses to implement different update rules
    virtual int update_state(int state, int percept);
};

#endif
