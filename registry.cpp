void RegAddKeyA(HKEY key, LPCSTR subkey, LPCSTR name, ULONG type, UINT value) {
	HKEY hkey;
	DWORD disp;
	long result;
	
	result = RegCreateKeyExA(key, subkey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hkey, &disp);
	result = RegSetValueExA(key, name, 0, type, (const BYTE*)&value, (int)sizeof(value));
	
	RegCloseKey(hkey);
}
