add_library(AgentManager SHARED
  AgentManager.cpp
  AgentManager.h
  Agent.cpp
  Agent.h
)

target_link_libraries(AgentManager PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(AgentManager PRIVATE AGENTMANAGER_LIBRARY)