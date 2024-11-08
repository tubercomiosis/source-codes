VOID WINAPI RegAddW(HKEY hKey, LPCWSTR lpRegistryKey, LPCWSTR lpRegName, DWORD dwRegType, LPBYTE bValue, DWORD dwSize) {
    HKEY hKResult;
    RegCreateKeyW(hKey, lpRegistryKey, &hKResult);
    RegSetValueExW(hKResult, lpRegName, 0, dwRegType, bValue, dwSize);
    RegCloseKey(hKResult);
}

VOID WINAPI RegSetW(HKEY hKey, LPCWSTR lpRegistryKey, LPCWSTR lpRegName, DWORD dwRegType, LPBYTE bValue, DWORD dwSize) {
    HKEY hKResult;
    RegOpenKeyExW(hKey, lpRegistryKey, 0, KEY_SET_VALUE, &hKResult);
    RegSetValueExW(hKResult, lpRegName, 0, dwRegType, bValue, dwSize);
    RegCloseKey(hKResult);
}
