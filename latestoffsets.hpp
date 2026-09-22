#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx WEAO-LIVE-WindowsPlayer-version-2366ba214ec740ca
   Time taken 39.31s
   Offsets found 156
   Date 2026-09-23 00:17:37

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
    const uintptr_t Print = REBASE(0x1CFA0D0);
    const uintptr_t OpcodeLookupTable = REBASE(0x6F1BF50);
    const uintptr_t ScriptContextResume = REBASE(0x429B530);
	const uintptr_t GetLuaStateForInstance = REBASE(0x41F2300); // i THINK its right but i dont know for sure
    const uintptr_t GetPropertyData = REBASE(0x2A86150); //? 
    const uintptr_t GetTLSPointer = REBASE(0x7240);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x269E520);
        const uintptr_t LuaO_NilObject = REBASE(0x64BA248);
        const uintptr_t LuaH_DummyNode = REBASE(0x64B68D8);
        // luaT_Eventnames Not found
        const uintptr_t luaf_newproto = REBASE(0x2697E90);
        const uintptr_t freeobj = REBASE(0x26822A0);
        const uintptr_t luaF_freeproto = REBASE(0x2698550);
        const uintptr_t PushInstance = REBASE(0x41D9F50);
        // loadsafe Not found
        const uintptr_t ConnectionDisconnect = REBASE(0x41B40E0);
        const uintptr_t luaL_typerrorL = REBASE(0x265C4D0);
        const uintptr_t luaL_argerrorL = REBASE(0x2695FD0);
    }

    namespace RemoteEvent //(credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x34EA360);
        const uintptr_t FireServer = REBASE(0x34EA1C0);
        const uintptr_t InvokeServer = REBASE(0x35ACAB0);
        const uintptr_t InvokeClient = REBASE(0x35ACCB0);
        const uintptr_t FireAllClients = REBASE(0x34EA618);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x82C62D0);
        const uintptr_t RaycastBoundFn = 0x80; // h
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x26BA470);
        const uintptr_t assert = REBASE(0x26C1500);
        const uintptr_t error = REBASE(0x26BA8C0);
        const uintptr_t gcinfo = REBASE(0x26BFE60);
        const uintptr_t getfenv = REBASE(0x26BBE80);
        const uintptr_t getmetatable = REBASE(0x26BB2F0);
        const uintptr_t next = REBASE(0x26C0A50);
        const uintptr_t newproxy = REBASE(0x26C2440);
        const uintptr_t rawequal = REBASE(0x26BC170);
        const uintptr_t rawget = REBASE(0x26BC280);
        const uintptr_t rawset = REBASE(0x26BCC90);
        const uintptr_t rawlen = REBASE(0x26BFDC0);
        const uintptr_t select = REBASE(0x26C15B0);
        const uintptr_t setfenv = REBASE(0x26BBF40);
        const uintptr_t setmetatable = REBASE(0x26BB470);
        const uintptr_t tonumber = REBASE(0x26BA540);
        const uintptr_t tostring = REBASE(0x26C23E0);
        const uintptr_t type = REBASE(0x26BFE80);
        const uintptr_t typeof = REBASE(0x26C0470);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x5745B70);
        const uintptr_t find = REBASE(0x5747A10);
        const uintptr_t format = REBASE(0x57499C0);
        const uintptr_t gmatch = REBASE(0x5747DF0);
        const uintptr_t gsub = REBASE(0x57493B0);
        const uintptr_t len = REBASE(0x5744670);
        const uintptr_t lower = REBASE(0x57452E0);
        const uintptr_t match = REBASE(0x5747A20);
        const uintptr_t pack = REBASE(0x574B570);
        const uintptr_t packsize = REBASE(0x574BED0);
        const uintptr_t rep = REBASE(0x5745580);
        const uintptr_t reverse = REBASE(0x5745190);
        const uintptr_t split = REBASE(0x5749FF0);
        const uintptr_t sub = REBASE(0x5744720);
        const uintptr_t unpack = REBASE(0x574C240);
        const uintptr_t upper = REBASE(0x5745430);
        const uintptr_t char_ = REBASE(0x5745E00);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x573CA20);
        const uintptr_t clone = REBASE(0x573CCC0);
        const uintptr_t concat = REBASE(0x5739A50);
        const uintptr_t create = REBASE(0x573BDB0);
        const uintptr_t foreach = REBASE(0x5734AC0);
        const uintptr_t foreachi = REBASE(0x5733D70);
        const uintptr_t freeze = REBASE(0x573CA70);
        const uintptr_t getn = REBASE(0x5735EE0);
        const uintptr_t insert = REBASE(0x5736FD0);
        const uintptr_t isfrozen = REBASE(0x573CBF0);
        const uintptr_t maxn = REBASE(0x5735C20);
        const uintptr_t move = REBASE(0x5737540);
        const uintptr_t remove = REBASE(0x57371D0);
        const uintptr_t sort = REBASE(0x573BC30);
        const uintptr_t pack = REBASE(0x5739D70);
        const uintptr_t unpack = REBASE(0x573A5C0);
        const uintptr_t find = REBASE(0x573C580);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x57606A0);
        const uintptr_t band = REBASE(0x5760110);
        const uintptr_t bnot = REBASE(0x57603C0);
        const uintptr_t bor = REBASE(0x57601C0);
        const uintptr_t btest = REBASE(0x5760140);
        const uintptr_t bxor = REBASE(0x57602C0);
        const uintptr_t byteswap = REBASE(0x5760EF0);
        const uintptr_t countlz = REBASE(0x5760C60);
        const uintptr_t countrz = REBASE(0x5760DB0);
        const uintptr_t extract = REBASE(0x5760A60);
        const uintptr_t lrotate = REBASE(0x5760890);
        const uintptr_t lshift = REBASE(0x5760450);
        const uintptr_t replace = REBASE(0x5760B20);
        const uintptr_t rrotate = REBASE(0x5760910);
        const uintptr_t rshift = REBASE(0x5760570);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x5740620);
        const uintptr_t codes = REBASE(0x5741690);
        const uintptr_t offset = REBASE(0x5741140);
        const uintptr_t char_ = REBASE(0x57409C0);
        const uintptr_t len = REBASE(0x5740340);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x575C450);
        const uintptr_t isyieldable = REBASE(0x575C3C0);
        const uintptr_t running = REBASE(0x575C350);
        const uintptr_t status = REBASE(0x575A060);
        const uintptr_t wrap = REBASE(0x575C080);
        const uintptr_t yield = REBASE(0x575C2F0);
        const uintptr_t create = REBASE(0x575BAD0);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x5755660);
        const uintptr_t readbits = REBASE(0x5756E50);
        const uintptr_t readf32 = REBASE(0x5757C10);
        const uintptr_t readf64 = REBASE(0x5757D70);
        const uintptr_t readi16 = REBASE(0x5757690);
        const uintptr_t readi32 = REBASE(0x5757950);
        const uintptr_t readi8 = REBASE(0x57573D0);
        const uintptr_t readinteger = REBASE(0x5755CA0);
        const uintptr_t readstring = REBASE(0x5755EF0);
        const uintptr_t readu16 = REBASE(0x57577F0);
        const uintptr_t readu32 = REBASE(0x5757AB0);
        const uintptr_t readu8 = REBASE(0x5757530);
        const uintptr_t writebits = REBASE(0x5757090);
        const uintptr_t writef32 = REBASE(0x5758350);
        const uintptr_t writef64 = REBASE(0x57584E0);
        const uintptr_t writei16 = REBASE(0x5758050);
        const uintptr_t writei32 = REBASE(0x57581D0);
        const uintptr_t writei8 = REBASE(0x5757ED0);
        const uintptr_t writeinteger = REBASE(0x5755DB0);
        const uintptr_t writestring = REBASE(0x57565C0);
        const uintptr_t writeu16 = REBASE(0x5758050);
        const uintptr_t writeu32 = REBASE(0x57581D0);
        const uintptr_t writeu8 = REBASE(0x5757ED0);
        const uintptr_t copy = REBASE(0x5756910);
        const uintptr_t fill = REBASE(0x5756C00);
        const uintptr_t len = REBASE(0x5756860);
        const uintptr_t tostring = REBASE(0x5755730);
        const uintptr_t create = REBASE(0x57555B0);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x435A520);
        const uintptr_t defer = REBASE(0x435A060);
        const uintptr_t delay = REBASE(0x435A8B0);
        const uintptr_t wait = REBASE(0x435ABB0);
        const uintptr_t cancel = REBASE(0x435AE30);
        const uintptr_t synchronize = REBASE(0x4359070);
        const uintptr_t desynchronize = REBASE(0x4359480);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xAAE);
        const uintptr_t IsCoreScript = REBASE(0x158);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x8670120);
    }

    namespace Globals
    {
        const uintptr_t IdentityPtr = REBASE(0x828CA38);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x82D4A28);
        const uintptr_t TaskSchedulerPointer = REBASE(0x8C8D100);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x287FDA0);
        const uintptr_t RaknetReceive = REBASE(0x2880390);
        const uintptr_t DeallocatePacket = REBASE(0x2880A30);
        const uintptr_t vtable = REBASE(0x6CA34F0);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
