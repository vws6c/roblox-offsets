// unchecked, unconfirmed, test dump, i will skid thorioums structs to confirm or smt if he dumps

struct RobloxExtraSpace
{
    unsigned char gap[0x18];                 // 0
    std::shared_ptr<Shared> shared;          // 24
    unsigned char gap[0x08];                 // 0
    uint64_t capabilities;                   // 48
    unsigned char gap[0x18];                 // 0
    std::weak_ptr<uintptr_t> script;         // 80
    unsigned char gap[0x08];                 // 0
    RBX::Identity identity;                  // 104
    RBX::Lua::Continuations *continuations;  // 112
    unsigned char gap[0x20];                 // 0
    std::weak_ptr<uintptr_t> Actor;          // 152
};
