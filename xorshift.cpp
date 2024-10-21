DWORD xr;
void sxorshift(DWORD seed) {
	xr = seed;
}

DWORD xorshift() {
	xr ^= xr << 13;
	xr ^= xr << 17;
	xr ^= xr << 5;
	return xr;
}

// xorshift from mythlas (rewritten)
