#ifndef raft_h
#define raft_h


#include <string>
#include <vector>
#include <functional>
#include "boat.h"
#include "monohull.h"
#include "propulsion.h"

using namespace std::literals::string_literals;

class Raft final : public Boat // A raft is a boat
{
public:
    Raft();
    
private:
    const std::string name{"Slow Poke"s};
    MonoHull oneHull;
    //std::vector<std::reference_wrapper<Propulsion>> empty;
    std::string do_getName() const noexcept override;
};

#endif /* raft_h */
