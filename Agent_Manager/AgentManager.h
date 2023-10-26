// AgentManager.h
#ifndef AGENTMANAGER_H
#define AGENTMANAGER_H

#include "../Abstracts/Manager.h"
#include "Agent.h"

class AgentManager : public Manager
{
public:
    ~AgentManager();

    // Get the singleton instance of the base manager
    static AgentManager &getInstance();
    // Override the virtual methods from the base manager
    void init() override;
    void update() override;
    void shutdown() override;

    // Other specific methods for the agent manager
    void createAgent();
    void deleteAgent();
    std::vector<Agent *> getAgentList();

protected:
    AgentManager();

private:
    // Some private data members for the agent manager
    int agentCount;
    std::vector<Agent *> agentList;
};

#endif