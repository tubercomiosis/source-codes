VOID regAdd(HKEY hk, LPCWSTR lpsub, LPCWSTR lpval, DWORD dwtype, UINT val) {
	HKEY hky;
	DWORD dwd;
	long res;
	
	res = RegCreateKeyExW(hk, lpsub, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hk, &dwd);
	res = RegSetValueExW(hk, lpval, 0, dwtype, (const BYTE*)&val, (int)sizeof(val));
	
	RegCloseKey(hky);
	return;
}
