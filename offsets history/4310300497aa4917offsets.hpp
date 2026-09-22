#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx WEAO-LIVE-WindowsPlayer-version-4310300497aa4917
   Time taken 49.99s
   Offsets found 156
   Date 2026-09-15 23:16:39

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;
struct DataModel;
struct TaskScheduler;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1CD9D90);
    // OpcodeLookupTable Not found AGAIN NIGGA WHY
    const uintptr_t ScriptContextResume = REBASE(0x42C1E60);
    const uintptr_t GetLuaStateForInstance = REBASE(0x421A7A0); //? - automatic dumper detection
    const uintptr_t GetPropertyData = REBASE(0x2B49420); //?randomly fixed itself
    const uintptr_t GetTLSPointer = REBASE(0x4250);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x277A970); //? - automatic dumper detection
        const uintptr_t LuaO_NilObject = REBASE(0x6437A18);
        const uintptr_t LuaH_DummyNode = REBASE(0x6437098);
        // luaT_Eventnames Not found
        const uintptr_t luaf_newproto = REBASE(0x2774210);
        const uintptr_t freeobj = REBASE(0x2762DA0);
        const uintptr_t luaF_freeproto = REBASE(0x27748F0);
        const uintptr_t PushInstance = REBASE(0x4202490);
        const uintptr_t ConnectionDisconnect = REBASE(0x41DF210);
        const uintptr_t luaL_typerrorL = REBASE(0x273DD50);
        const uintptr_t luaL_argerrorL = REBASE(0x2772170);
    }

    namespace RemoteEvent // (credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x34B7AE0);
        const uintptr_t FireServer = REBASE(0x34B7940);
        const uintptr_t InvokeServer = REBASE(0x351A910);
        const uintptr_t InvokeClient = REBASE(0x351AB10);
        const uintptr_t FireAllClients = REBASE(0x34B7D98);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x8217310);
        const uintptr_t RaycastBoundFn = 0x80; 
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x2795830);
        const uintptr_t assert = REBASE(0x279BE30);
        const uintptr_t error = REBASE(0x2795C80);
        const uintptr_t gcinfo = REBASE(0x279A770);
        const uintptr_t getfenv = REBASE(0x2797260);
        const uintptr_t getmetatable = REBASE(0x2796690);
        const uintptr_t next = REBASE(0x279B380);
        const uintptr_t newproxy = REBASE(0x279CD30);
        const uintptr_t rawequal = REBASE(0x2797550);
        const uintptr_t rawget = REBASE(0x2797660);
        const uintptr_t rawset = REBASE(0x2798070);
        const uintptr_t rawlen = REBASE(0x279A6D0);
        const uintptr_t select = REBASE(0x279BEE0);
        const uintptr_t setfenv = REBASE(0x2797320);
        const uintptr_t setmetatable = REBASE(0x2796810);
        const uintptr_t tonumber = REBASE(0x2795900);
        const uintptr_t tostring = REBASE(0x279CCD0);
        const uintptr_t type = REBASE(0x279A790);
        const uintptr_t typeof = REBASE(0x279AD90);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x567DD70);
        const uintptr_t find = REBASE(0x567FC10);
        const uintptr_t format = REBASE(0x5681B90);
        const uintptr_t gmatch = REBASE(0x567FFF0);
        const uintptr_t gsub = REBASE(0x5681580);
        const uintptr_t len = REBASE(0x567C890);
        const uintptr_t lower = REBASE(0x567D4F0);
        const uintptr_t match = REBASE(0x567FC20);
        const uintptr_t pack = REBASE(0x5683750);
        const uintptr_t packsize = REBASE(0x56840B0);
        const uintptr_t rep = REBASE(0x567D790);
        const uintptr_t reverse = REBASE(0x567D3A0);
        const uintptr_t split = REBASE(0x56821C0);
        const uintptr_t sub = REBASE(0x567C940);
        const uintptr_t unpack = REBASE(0x5684420);
        const uintptr_t upper = REBASE(0x567D640);
        const uintptr_t char_ = REBASE(0x567E000);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x5674BF0);
        const uintptr_t clone = REBASE(0x5674E90);
        const uintptr_t concat = REBASE(0x5671C40);
        const uintptr_t create = REBASE(0x5673F70);
        const uintptr_t foreach = REBASE(0x566D6A0);
        const uintptr_t foreachi = REBASE(0x566C950);
        const uintptr_t freeze = REBASE(0x5674C40);
        const uintptr_t getn = REBASE(0x566EAB0);
        const uintptr_t insert = REBASE(0x566FBB0);
        const uintptr_t isfrozen = REBASE(0x5674DC0);
        const uintptr_t maxn = REBASE(0x566E7F0);
        const uintptr_t move = REBASE(0x5670120);
        const uintptr_t remove = REBASE(0x566FDB0);
        const uintptr_t sort = REBASE(0x5673DF0);
        const uintptr_t pack = REBASE(0x5671F60);
        const uintptr_t unpack = REBASE(0x56727B0);
        const uintptr_t find = REBASE(0x5674750);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x5698800);
        const uintptr_t band = REBASE(0x5698270);
        const uintptr_t bnot = REBASE(0x5698520);
        const uintptr_t bor = REBASE(0x5698320);
        const uintptr_t btest = REBASE(0x56982A0);
        const uintptr_t bxor = REBASE(0x5698420);
        const uintptr_t byteswap = REBASE(0x5699050);
        const uintptr_t countlz = REBASE(0x5698DC0);
        const uintptr_t countrz = REBASE(0x5698F10);
        const uintptr_t extract = REBASE(0x5698BC0);
        const uintptr_t lrotate = REBASE(0x56989F0);
        const uintptr_t lshift = REBASE(0x56985B0);
        const uintptr_t replace = REBASE(0x5698C80);
        const uintptr_t rrotate = REBASE(0x5698A70);
        const uintptr_t rshift = REBASE(0x56986D0);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x56787F0);
        const uintptr_t codes = REBASE(0x5679890);
        const uintptr_t offset = REBASE(0x5679340);
        const uintptr_t char_ = REBASE(0x5678B90);
        const uintptr_t len = REBASE(0x5678510);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x5694590);
        const uintptr_t isyieldable = REBASE(0x5694510);
        const uintptr_t running = REBASE(0x56944A0);
        const uintptr_t status = REBASE(0x56921A0);
        const uintptr_t wrap = REBASE(0x56941D0);
        const uintptr_t yield = REBASE(0x5694440);
        const uintptr_t create = REBASE(0x5693C10);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x568D7D0);
        const uintptr_t readbits = REBASE(0x568EFC0);
        const uintptr_t readf32 = REBASE(0x568FD80);
        const uintptr_t readf64 = REBASE(0x568FEE0);
        const uintptr_t readi16 = REBASE(0x568F800);
        const uintptr_t readi32 = REBASE(0x568FAC0);
        const uintptr_t readi8 = REBASE(0x568F540);
        const uintptr_t readinteger = REBASE(0x568DE10);
        const uintptr_t readstring = REBASE(0x568E060);
        const uintptr_t readu16 = REBASE(0x568F960);
        const uintptr_t readu32 = REBASE(0x568FC20);
        const uintptr_t readu8 = REBASE(0x568F6A0);
        const uintptr_t writebits = REBASE(0x568F200);
        const uintptr_t writef32 = REBASE(0x56904C0);
        const uintptr_t writef64 = REBASE(0x5690650);
        const uintptr_t writei16 = REBASE(0x56901C0);
        const uintptr_t writei32 = REBASE(0x5690340);
        const uintptr_t writei8 = REBASE(0x5690040);
        const uintptr_t writeinteger = REBASE(0x568DF20);
        const uintptr_t writestring = REBASE(0x568E730);
        const uintptr_t writeu16 = REBASE(0x56901C0);
        const uintptr_t writeu32 = REBASE(0x5690340);
        const uintptr_t writeu8 = REBASE(0x5690040);
        const uintptr_t copy = REBASE(0x568EA80);
        const uintptr_t fill = REBASE(0x568ED70);
        const uintptr_t len = REBASE(0x568E9D0);
        const uintptr_t tostring = REBASE(0x568D8A0);
        const uintptr_t create = REBASE(0x568D720);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x437EFB0);
        const uintptr_t defer = REBASE(0x437EAF0);
        const uintptr_t delay = REBASE(0x437F340);
        const uintptr_t wait = REBASE(0x437F640);
        const uintptr_t cancel = REBASE(0x437F8B0);
        const uintptr_t synchronize = REBASE(0x437DB00);
        const uintptr_t desynchronize = REBASE(0x437DF10);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xA58);
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x85C0F18);
    }

    namespace Globals
    {
        const uintptr_t IdentityPtr = REBASE(0x81DDD08);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x8227738);
        const uintptr_t TaskSchedulerPointer = REBASE(0x8BDD8E0);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x293EC90);
        const uintptr_t RaknetReceive_deprecated = REBASE(0x293F280); // [DFLog::RakNetStoppedProduction] RakNet has not produced packets for {} frames / {} ms
        const uintptr_t DeallocatePacket = REBASE(0x293F920);
        const uintptr_t vtable = REBASE(0x6C1D870);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
