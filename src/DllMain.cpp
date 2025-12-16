constexpr size_t gameModeTitleEnterAddr = 0x1401FD8B0;
hh::fnd::Reference<hh::fnd::ResourceLoader> resourceLoader{};
template<size_t Len>
void LoadPackfile(const char(&path)[Len]) {
    hh::fnd::ResourceLoader::Locale locale{};
    hh::fnd::InplaceTempUri uri{ path };
    resourceLoader = hh::fnd::ResourceLoader::Create(hh::fnd::MemoryRouter::GetModuleAllocator());
    resourceLoader->LoadResource(uri, hh::fnd::Packfile::GetTypeInfo(), {}, 0, locale);
}

void Init() {
    LoadPackfile("text/text_archipelago_en.pac");
}

HOOK(uint64_t, __fastcall, GameModeTitle_Enter, gameModeTitleEnterAddr, void* self) {
    auto res = originalGameModeTitle_Enter(self);

    Init();
    return res;
}

BOOL WINAPI DllMain(_In_ HINSTANCE hInstance, _In_ DWORD reason, _In_ LPVOID reserved) {
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        INSTALL_HOOK(GameModeTitle_Enter);
        break;
    case DLL_PROCESS_DETACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }

    return TRUE;
}