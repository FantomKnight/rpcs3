#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/PSP2/ARMv7Module.h"

#include "sceNet.h"

logs::channel sceNet("sceNet", logs::level::notice);

s32 sceNetSetDnsInfo(vm::ptr<SceNetDnsInfo> info, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetClearDnsCache(s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetDumpCreate(vm::cptr<char> name, s32 len, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetDumpRead(s32 id, vm::ptr<void> buf, s32 len, vm::ptr<s32> pflags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetDumpDestroy(s32 id)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetDumpAbort(s32 id, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollCreate(vm::cptr<char> name, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollControl(s32 eid, s32 op, s32 id, vm::ptr<SceNetEpollEvent> event)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollWait(s32 eid, vm::ptr<SceNetEpollEvent> events, s32 maxevents, s32 timeout)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollWaitCB(s32 eid, vm::ptr<SceNetEpollEvent> events, s32 maxevents, s32 timeout)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollDestroy(s32 eid)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEpollAbort(s32 eid, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

vm::ptr<s32> sceNetErrnoLoc()
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEtherStrton(vm::cptr<char> str, vm::ptr<SceNetEtherAddr> n)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEtherNtostr(vm::cptr<SceNetEtherAddr> n, vm::ptr<char> str, u32 len)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetMacAddress(vm::ptr<SceNetEtherAddr> addr, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

vm::cptr<char> sceNetInetNtop(s32 af, vm::cptr<void> src, vm::ptr<char> dst, SceNetSocklen_t size)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetInetPton(s32 af, vm::cptr<char> src, vm::ptr<void> dst)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u64 sceNetHtonll(u64 host64)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u32 sceNetHtonl(u32 host32)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u16 sceNetHtons(u16 host16)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u64 sceNetNtohll(u64 net64)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u32 sceNetNtohl(u32 net32)
{
	fmt::throw_exception("Unimplemented" HERE);
}

u16 sceNetNtohs(u16 net16)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetInit(vm::ptr<SceNetInitParam> param)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetTerm()
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetShowIfconfig()
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetShowRoute()
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetShowNetstat()
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEmulationSet(vm::ptr<SceNetEmulationParam> param, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetEmulationGet(vm::ptr<SceNetEmulationParam> param, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverCreate(vm::cptr<char> name, vm::ptr<SceNetResolverParam> param, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverStartNtoa(s32 rid, vm::cptr<char> hostname, vm::ptr<SceNetInAddr> addr, s32 timeout, s32 retry, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverStartAton(s32 rid, vm::cptr<SceNetInAddr> addr, vm::ptr<char> hostname, s32 len, s32 timeout, s32 retry, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverGetError(s32 rid, vm::ptr<s32> result)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverDestroy(s32 rid)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetResolverAbort(s32 rid, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSocket(vm::cptr<char> name, s32 domain, s32 type, s32 protocol)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetAccept(s32 s, vm::ptr<SceNetSockaddr> addr, vm::ptr<SceNetSocklen_t> addrlen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetBind(s32 s, vm::cptr<SceNetSockaddr> addr, SceNetSocklen_t addrlen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetConnect(s32 s, vm::cptr<SceNetSockaddr> name, SceNetSocklen_t namelen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetpeername(s32 s, vm::ptr<SceNetSockaddr> name, vm::ptr<SceNetSocklen_t> namelen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetsockname(s32 s, vm::ptr<SceNetSockaddr> name, vm::ptr<SceNetSocklen_t> namelen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetsockopt(s32 s, s32 level, s32 optname, vm::ptr<void> optval, vm::ptr<SceNetSocklen_t> optlen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetListen(s32 s, s32 backlog)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetRecv(s32 s, vm::ptr<void> buf, u32 len, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetRecvfrom(s32 s, vm::ptr<void> buf, u32 len, s32 flags, vm::ptr<SceNetSockaddr> from, vm::ptr<SceNetSocklen_t> fromlen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetRecvmsg(s32 s, vm::ptr<SceNetMsghdr> msg, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSend(s32 s, vm::cptr<void> msg, u32 len, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSendto(s32 s, vm::cptr<void> msg, u32 len, s32 flags, vm::cptr<SceNetSockaddr> to, SceNetSocklen_t tolen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSendmsg(s32 s, vm::cptr<SceNetMsghdr> msg, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSetsockopt(s32 s, s32 level, s32 optname, vm::cptr<void> optval, SceNetSocklen_t optlen)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetShutdown(s32 s, s32 how)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSocketClose(s32 s)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetSocketAbort(s32 s, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetSockInfo(s32 s, vm::ptr<SceNetSockInfo> info, s32 n, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetSockIdInfo(vm::ptr<SceNetFdSet> fds, s32 sockinfoflags, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}

s32 sceNetGetStatisticsInfo(vm::ptr<SceNetStatisticsInfo> info, s32 flags)
{
	fmt::throw_exception("Unimplemented" HERE);
}


#define REG_FUNC(nid, name) REG_FNID(SceNet, nid, name)

DECLARE(arm_module_manager::SceNet)("SceNet", []()
{
	REG_FUNC(0xD62EF218, sceNetSetDnsInfo);
	REG_FUNC(0xFEC1166D, sceNetClearDnsCache);
	REG_FUNC(0xAFF9FA4D, sceNetDumpCreate);
	REG_FUNC(0x04042925, sceNetDumpRead);
	REG_FUNC(0x82DDCF63, sceNetDumpDestroy);
	REG_FUNC(0x3B24E75F, sceNetDumpAbort);
	REG_FUNC(0xF9D102AE, sceNetEpollCreate);
	REG_FUNC(0x4C8764AC, sceNetEpollControl);
	REG_FUNC(0x45CE337D, sceNetEpollWait);
	REG_FUNC(0x92D3E767, sceNetEpollWaitCB);
	REG_FUNC(0x7915CAF3, sceNetEpollDestroy);
	REG_FUNC(0x93FCC4E8, sceNetEpollAbort);
	REG_FUNC(0xE37F34AA, sceNetErrnoLoc);
	REG_FUNC(0xEEC6D75F, sceNetEtherStrton);
	REG_FUNC(0x84334EB2, sceNetEtherNtostr);
	REG_FUNC(0x06C05518, sceNetGetMacAddress);
	REG_FUNC(0x98839B74, sceNetInetNtop);
	REG_FUNC(0xD5EEB048, sceNetInetPton);
	REG_FUNC(0x12C19209, sceNetHtonll);
	REG_FUNC(0x4C30B03C, sceNetHtonl);
	REG_FUNC(0x9FA3207B, sceNetHtons);
	REG_FUNC(0xFB3336A6, sceNetNtohll);
	REG_FUNC(0xD2EAA645, sceNetNtohl);
	REG_FUNC(0x07845128, sceNetNtohs);
	REG_FUNC(0xEB03E265, sceNetInit);
	REG_FUNC(0xEA3CC286, sceNetTerm);
	REG_FUNC(0x658B903B, sceNetShowIfconfig);
	REG_FUNC(0x6AB3B74B, sceNetShowRoute);
	REG_FUNC(0x338EDC2E, sceNetShowNetstat);
	REG_FUNC(0x561DFD03, sceNetEmulationSet);
	REG_FUNC(0xAE3F4AC6, sceNetEmulationGet);
	REG_FUNC(0x6DA29319, sceNetResolverCreate);
	REG_FUNC(0x1EB11857, sceNetResolverStartNtoa);
	REG_FUNC(0x0424AE26, sceNetResolverStartAton);
	REG_FUNC(0x874EF500, sceNetResolverGetError);
	REG_FUNC(0x3559F098, sceNetResolverDestroy);
	REG_FUNC(0x38EBBD57, sceNetResolverAbort);
	REG_FUNC(0xF084FCE3, sceNetSocket);
	REG_FUNC(0x1ADF9BB1, sceNetAccept);
	REG_FUNC(0x1296A94B, sceNetBind);
	REG_FUNC(0x11E5B6F6, sceNetConnect);
	REG_FUNC(0x2348D353, sceNetGetpeername);
	REG_FUNC(0x1C66A6DB, sceNetGetsockname);
	REG_FUNC(0xBA652062, sceNetGetsockopt);
	REG_FUNC(0x7A8DA094, sceNetListen);
	REG_FUNC(0x023643B7, sceNetRecv);
	REG_FUNC(0xB226138B, sceNetRecvfrom);
	REG_FUNC(0xDE94C6FE, sceNetRecvmsg);
	REG_FUNC(0xE3DD8CD9, sceNetSend);
	REG_FUNC(0x52DB31D5, sceNetSendto);
	REG_FUNC(0x99C579AE, sceNetSendmsg);
	REG_FUNC(0x065505CA, sceNetSetsockopt);
	REG_FUNC(0x69E50BB5, sceNetShutdown);
	REG_FUNC(0x29822B4D, sceNetSocketClose);
	REG_FUNC(0x891C1B9B, sceNetSocketAbort);
	REG_FUNC(0xB1AF6840, sceNetGetSockInfo);
	REG_FUNC(0x138CF1D6, sceNetGetSockIdInfo);
	REG_FUNC(0xA86F8FE5, sceNetGetStatisticsInfo);
});
