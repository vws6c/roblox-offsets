struct RobloxExtraSpace
{
    unsigned char gap_00[24];       // 0
    std::shared_ptr<Shared> shared; // 24
    unsigned char gap_01[8];        // 40
    uint64_t capabilities;          // 48
    unsigned char gap_02[24];       // 56
    std::weak_ptr<uintptr_t> script;// 80
    unsigned char gap_03[8];        // 96
    RBX::Identity identity;         // 104
    RBX::Lua::Continuations *continuations; // 112
    unsigned char gap_04[32];       // 120
    std::weak_ptr<uintptr_t> Actor; // 152
};
