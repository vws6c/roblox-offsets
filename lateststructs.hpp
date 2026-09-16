/// all confirmed thanks to thorioums dump except for continuations

struct RobloxExtraSpace
{
    unsigned char gap[0x18];                 // 0
    std::shared_ptr<Shared> shared;          // 24
    unsigned char gap_0[0x08];               // 40
    RBX::Identity identity;                  // 48
    unsigned char gap_1[0x18];               // 56
    std::weak_ptr<uintptr_t> script;         // 80
    unsigned char gap_2[0x10];               // 96
    RBX::Lua::Continuations *continuations;  // 112
    unsigned char gap_3[0x18];               // 120
    uint64_t capabilities;                   // 144
    std::weak_ptr<uintptr_t> Actor;          // 152
    unsigned char gap_4[0x10];               // 168
};
