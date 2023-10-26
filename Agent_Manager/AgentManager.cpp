// AgentManager.cpp
#include "AgentManager.h"

AgentManager &AgentManager::getInstance()
{
  // A static local variable of type AgentManager
  static AgentManager instance;
  // Return a reference to the variable
  return instance;
}
AgentManager::AgentManager()
{
}

AgentManager::~AgentManager()
{
}

// Override the virtual method to initialize the agent manager
void AgentManager::init()
{
  // Do some initialization work here
  agentCount = 0;
  agentList.clear();
}

// Override the virtual method to update the agent manager
void AgentManager::update()
{
  // Do some update work here
  for (auto agent : agentList)
  {
    agent->update_state(0, 0); // TDOD atguments not real
  }
}

// Override the virtual method to shutdown the agent manager
void AgentManager::shutdown()
{
  // Do some cleanup work here
  for (auto agent : agentList)
  {
    delete agent;
  }
}

// Create a new agent and add it to the list
void AgentManager::createAgent()
{
  // // Create a new agent object here, such as new RandomAgent()
  // Agent *newAgent = new Agent(0, nullptr);
  // // Add it to the list
  // agentList.push_back(newAgent);
  // // Increment the count
  // agentCount++;
}

// Delete an existing agent and remove it from the list
void AgentManager::deleteAgent()
{
  // Check if the list is not empty
  if (!agentList.empty())
  {
    // Get the last agent in the list
    Agent *lastAgent = agentList.back();
    // Delete it
    delete lastAgent;
    // Remove it from the list
    agentList.pop_back();
    // Decrement the count
    agentCount--;
  }
}

// Get the list of agents
std::vector<Agent *> AgentManager::getAgentList()
{
  // Return the list of agents
  return agentList;
}