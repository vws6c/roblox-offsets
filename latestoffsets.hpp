#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx WEAO-LIVE-WindowsPlayer-version-c5aecda2245e4fae
   Time taken 50.82s
   Offsets found 153
   Date 2026-09-10 16:43:37

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
    const uintptr_t Print = REBASE(0x1CAB4B0);
    const uintptr_t OpcodeLookupTable = REBASE(0x6E26C70);
    const uintptr_t ScriptContextResume = REBASE(0x4260F50);
    const uintptr_t GetLuaStateForInstance = REBASE(0x41BD590); //?
        const uintptr_t GetTLSPointer = REBASE(0x4250);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x272A260);
        const uintptr_t LuaO_NilObject = REBASE(0x63CDF48);
        const uintptr_t LuaH_DummyNode = REBASE(0x63CAB08);
        const uintptr_t luaf_newproto = REBASE(0x2723B00);
        // luaF_freeproto Not found
        const uintptr_t PushInstance = REBASE(0x41A5F20);
        // loadsafe Not found
        const uintptr_t ConnectionDisconnect = REBASE(0x4186A50);
        const uintptr_t luaL_typerrorL = REBASE(0x26F7B00);
        const uintptr_t luaL_argerrorL = REBASE(0x2721AB0);
    }

    namespace RemoteEvent (credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x34747A0);
        const uintptr_t FireServer = REBASE(0x3474600);
        const uintptr_t InvokeServer = REBASE(0x34D7490);
        const uintptr_t InvokeClient = REBASE(0x34D7690);
        const uintptr_t FireAllClients = REBASE(0x3474A58);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x8197D90);
        const uintptr_t RaycastBoundFn = 0x80; //?
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x2743020);
        const uintptr_t assert = REBASE(0x27486D0);
        const uintptr_t error = REBASE(0x2743480);
        const uintptr_t gcinfo = REBASE(0x2747020);
        const uintptr_t getfenv = REBASE(0x2744A60);
        const uintptr_t getmetatable = REBASE(0x2743E90);
        const uintptr_t next = REBASE(0x2747C20);
        const uintptr_t newproxy = REBASE(0x27495D0);
        const uintptr_t rawequal = REBASE(0x2744D40);
        const uintptr_t rawget = REBASE(0x2744E50);
        const uintptr_t rawset = REBASE(0x27453A0);
        const uintptr_t rawlen = REBASE(0x2746F80);
        const uintptr_t select = REBASE(0x2748780);
        const uintptr_t setfenv = REBASE(0x2744B20);
        const uintptr_t setmetatable = REBASE(0x2744010);
        const uintptr_t tonumber = REBASE(0x27430F0);
        const uintptr_t tostring = REBASE(0x2749570);
        const uintptr_t type = REBASE(0x2747040);
        const uintptr_t typeof = REBASE(0x2747630);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x5610440);
        const uintptr_t find = REBASE(0x56122E0);
        const uintptr_t format = REBASE(0x5614290);
        const uintptr_t gmatch = REBASE(0x56126B0);
        const uintptr_t gsub = REBASE(0x5613C80);
        const uintptr_t len = REBASE(0x560EF70);
        const uintptr_t lower = REBASE(0x560FBC0);
        const uintptr_t match = REBASE(0x56122F0);
        const uintptr_t pack = REBASE(0x5615E50);
        const uintptr_t packsize = REBASE(0x56167B0);
        const uintptr_t rep = REBASE(0x560FE60);
        const uintptr_t reverse = REBASE(0x560FA80);
        const uintptr_t split = REBASE(0x56148C0);
        const uintptr_t sub = REBASE(0x560F020);
        const uintptr_t unpack = REBASE(0x5616B20);
        const uintptr_t upper = REBASE(0x560FD10);
        const uintptr_t char_ = REBASE(0x56106D0);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x5607310);
        const uintptr_t clone = REBASE(0x5607560);
        const uintptr_t concat = REBASE(0x5604340);
        const uintptr_t create = REBASE(0x5606680);
        const uintptr_t foreach = REBASE(0x56005B0);
        const uintptr_t foreachi = REBASE(0x55FF850);
        const uintptr_t freeze = REBASE(0x5607360);
        const uintptr_t getn = REBASE(0x56019E0);
        const uintptr_t insert = REBASE(0x5602AD0);
        const uintptr_t isfrozen = REBASE(0x56074B0);
        const uintptr_t maxn = REBASE(0x5601720);
        const uintptr_t move = REBASE(0x5603040);
        const uintptr_t remove = REBASE(0x5602CD0);
        const uintptr_t sort = REBASE(0x5606500);
        const uintptr_t pack = REBASE(0x5604660);
        const uintptr_t unpack = REBASE(0x5604EB0);
        const uintptr_t find = REBASE(0x5606E70);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x562AEE0);
        const uintptr_t band = REBASE(0x562A950);
        const uintptr_t bnot = REBASE(0x562AC00);
        const uintptr_t bor = REBASE(0x562AA00);
        const uintptr_t btest = REBASE(0x562A980);
        const uintptr_t bxor = REBASE(0x562AB00);
        const uintptr_t byteswap = REBASE(0x562B740);
        const uintptr_t countlz = REBASE(0x562B4A0);
        const uintptr_t countrz = REBASE(0x562B5F0);
        const uintptr_t extract = REBASE(0x562B2A0);
        const uintptr_t lrotate = REBASE(0x562B0D0);
        const uintptr_t lshift = REBASE(0x562AC90);
        const uintptr_t replace = REBASE(0x562B360);
        const uintptr_t rrotate = REBASE(0x562B150);
        const uintptr_t rshift = REBASE(0x562ADB0);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x560AF10);
        const uintptr_t codes = REBASE(0x560BF90);
        const uintptr_t offset = REBASE(0x560BA50);
        const uintptr_t char_ = REBASE(0x560B2B0);
        const uintptr_t len = REBASE(0x560AC30);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x5626CA0);
        const uintptr_t isyieldable = REBASE(0x5626C10);
        const uintptr_t running = REBASE(0x5626BA0);
        const uintptr_t status = REBASE(0x56248E0);
        const uintptr_t wrap = REBASE(0x56268D0);
        const uintptr_t yield = REBASE(0x5626B40);
        const uintptr_t create = REBASE(0x5626310);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x561FF90);
        const uintptr_t readbits = REBASE(0x5621780);
        const uintptr_t readf32 = REBASE(0x5622540);
        const uintptr_t readf64 = REBASE(0x56226B0);
        const uintptr_t readi16 = REBASE(0x5621FC0);
        const uintptr_t readi32 = REBASE(0x5622280);
        const uintptr_t readi8 = REBASE(0x5621D00);
        const uintptr_t readinteger = REBASE(0x56205D0);
        const uintptr_t readstring = REBASE(0x5620820);
        const uintptr_t readu16 = REBASE(0x5622120);
        const uintptr_t readu32 = REBASE(0x56223E0);
        const uintptr_t readu8 = REBASE(0x5621E60);
        const uintptr_t writebits = REBASE(0x56219C0);
        const uintptr_t writef32 = REBASE(0x5622C90);
        const uintptr_t writef64 = REBASE(0x5622E20);
        const uintptr_t writei16 = REBASE(0x5622990);
        const uintptr_t writei32 = REBASE(0x5622B10);
        const uintptr_t writei8 = REBASE(0x5622810);
        const uintptr_t writeinteger = REBASE(0x56206E0);
        const uintptr_t writestring = REBASE(0x5620EF0);
        const uintptr_t writeu16 = REBASE(0x5622990);
        const uintptr_t writeu32 = REBASE(0x5622B10);
        const uintptr_t writeu8 = REBASE(0x5622810);
        const uintptr_t copy = REBASE(0x5621240);
        const uintptr_t fill = REBASE(0x5621530);
        const uintptr_t len = REBASE(0x5621190);
        const uintptr_t tostring = REBASE(0x5620060);
        const uintptr_t create = REBASE(0x561FEE0);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x431A020);
        const uintptr_t defer = REBASE(0x4319B60);
        const uintptr_t delay = REBASE(0x431A3B0);
        const uintptr_t wait = REBASE(0x431A6B0);
        const uintptr_t cancel = REBASE(0x431A920);
        const uintptr_t synchronize = REBASE(0x4318B60);
        const uintptr_t desynchronize = REBASE(0x4318F70);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xBB4);
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x8541538);
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6F6C470); //?
        const uintptr_t IdentityPtr = REBASE(0x815E708);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x81A8D78);
        const uintptr_t TaskSchedulerPointer = REBASE(0x8B5CEE0);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x28EC590);
        const uintptr_t RaknetReceive = REBASE(0x28ECB80);
        const uintptr_t DeallocatePacket = REBASE(0x28ED220);
        const uintptr_t vtable = REBASE(0x6BB1740);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
