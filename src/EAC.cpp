#include "InterfaceData/InterfaceImp.h"
#include <Windows.h>
LPVOID data = 0;

extern "C"
{
	_declspec(dllexport) void Cerberus_BeginFrame() { return; }
	_declspec(dllexport) void Cerberus_EndFrame() { return; }
	_declspec(dllexport) void Cerberus_GameRoundEnd() { return; }
	_declspec(dllexport) void Cerberus_GameRoundStart() { return; }
	_declspec(dllexport) void Cerberus_PlayerDespawn() { return; }
	_declspec(dllexport) void Cerberus_PlayerRevive() { return; }
	_declspec(dllexport) void Cerberus_PlayerSpawn() { return; }
	_declspec(dllexport) void Cerberus_PlayerTakeDamage() { return; }
	_declspec(dllexport) void Cerberus_PlayerTick() { return; }
	_declspec(dllexport) void Cerberus_PlayerUseWeapon() { return; }
	_declspec(dllexport) void ClientAuth_ClientWriteChallengeResponse() { return; }
	_declspec(dllexport) void ClientAuth_Destroy() { return; }
	_declspec(dllexport) void ClientAuth_Initialize() { return; }
	_declspec(dllexport) void* CreateGameLauncher() { return NULL; }
	_declspec(dllexport) void* CreateHttpsClient() { return NULL; }
	_declspec(dllexport) void* CreateThirdPartyLauncher() { return NULL; }
	_declspec(dllexport) void GameClientP2P_BeginSession() { return; }
	_declspec(dllexport) void GameClientP2P_Cerberus() { return; }
	_declspec(dllexport) void GameClientP2P_EndSession() { return; }
	_declspec(dllexport) void GameClientP2P_InitLocalization() { return; }
	_declspec(dllexport) void GameClientP2P_PollForMessageToPeer() { return; }
	_declspec(dllexport) void GameClientP2P_PollStatus() { return; }
	_declspec(dllexport) void GameClientP2P_ReceiveMessageFromPeer() { return; }
	_declspec(dllexport) void GameClientP2P_RegisterPeer() { return; }
	_declspec(dllexport) void GameClientP2P_ResetState() { return; }
	_declspec(dllexport) void GameClientP2P_SetLogCallback() { return; }
	_declspec(dllexport) void GameClientP2P_SetMaxAllowedMessageLength() { return; }
	_declspec(dllexport) void GameClientP2P_UnregisterPeer() { return; }
	_declspec(dllexport) void GameClientP2P_UpdatePlatformUserAuthTicket() { return; }
	_declspec(dllexport) void GameClient_ConnectionReset() { return; }
	_declspec(dllexport) void GameClient_Destroy() { return; }
	_declspec(dllexport) void GameClient_Initialize() { return; }
	_declspec(dllexport) void GameClient_NetProtect() { return; }
	_declspec(dllexport) void GameClient_PollStatus() { return; }
	_declspec(dllexport) void GameClient_PopNetworkMessage() { return; }
	_declspec(dllexport) void GameClient_PushNetworkMessage() { return; }
	_declspec(dllexport) void GameClient_SetMaxAllowedMessageLength() { return; }
	_declspec(dllexport) void GameClient_ValidateServerHost() { return; }
	_declspec(dllexport) void GameLauncher_Destroy() { return; }
	_declspec(dllexport) void GameLauncher_GetGameProcessId() { return; }
	_declspec(dllexport) void GameLauncher_OpenGameProcess() { return; }
	_declspec(dllexport) void GameLauncher_StartGameA() { return; }
	_declspec(dllexport) void GameLauncher_StartGameW() { return; }
	_declspec(dllexport) void NetProtectClient_GetProtectMessageOutputLength() { return; }
	_declspec(dllexport) void NetProtectClient_ProtectMessage() { return; }
	_declspec(dllexport) void NetProtectClient_UnprotectMessage() { return; }
	_declspec(dllexport) void ThirdPartyLauncher_Destroy() { return; }
	_declspec(dllexport) void ThirdPartyLauncher_Initialize() { return; }
	_declspec(dllexport) void ThirdPartyLauncher_SetServer() { return; }
	_declspec(dllexport) void* CreateGameClient()  // Initialize Interface client.
	{
		void* Pointer = VirtualAlloc(NULL, sizeof(EAC_Attach), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
		if (Pointer == 0)
			return nullptr;
		memcpy(Pointer, (void*)(new EAC_Attach), sizeof(EAC_Attach));
		data = Pointer;
		return Pointer;
	}
	_declspec(dllexport) void* CreateClientAuth()
	{
		return NULL;
	}
}