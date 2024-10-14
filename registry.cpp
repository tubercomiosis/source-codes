void RegAddKeyA(HKEY key, LPCSTR subkey, LPCSTR value, ULONG type, ULONG value) {
	HKEY hkey;
	DWODRD disp;
	long result;
	
	result = RegCreateKeyExA(key, subkey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hkey, &disp);
	result = RegSetValueExA(key, value, 0, type, (const BYTE*)&value, (int)sizeof(value));
	
	RegCloseKey(hkey);
}
