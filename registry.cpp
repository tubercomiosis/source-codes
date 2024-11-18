LONG WINAPI RegAddW(HKEY hKey, LPCWSTR lpRegistryKey, LPCWSTR lpRegName, DWORD dwRegType, BYTE bValue) {
    HKEY hKResult;
    RegCreateKeyW(hKey, lpRegistryKey, &hKResult);
    RegSetValueExW(hKResult, lpRegName, 0, dwRegType, &bValue, sizeof(bValue));
    RegCloseKey(hKResult);
}
