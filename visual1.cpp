BOOL __stdcall DialogFunc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  int v4; // esi
  BOOL result; // eax
  unsigned int v6; // edx
  unsigned int v7; // edx
  HWND v8; // eax
  int v9; // [esp-100h] [ebp-100h]

  dword_405CA0 = (int)Buffer;
  v4 = 0;
  if ( a2 == 272 )
  {
    v8 = GetDlgItem(a1, 1000);
    dword_4054F0 = SetWindowLongA(v8, -4, (LONG)sub_401000);
    return 0;
  }
  if ( a2 != 273 )
    return 0;
  if ( a3 == 3 )
  {
    MessageBoxA(0, Text, Caption, 0x40u);
    return 0;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      EndDialog(a1, 0);
      return 0;
    }
    return 0;
  }
  GetUserNameA(Buffer, &pcbBuffer);
  v6 = 0;
  if ( strlen((const char *)dword_405CA0) != 0 )
  {
    do
      v4 += *(char *)(dword_405CA0 + v6++) + 100000;
    while ( v6 < strlen((const char *)dword_405CA0) );
  }
  if ( GetDlgItemTextA(a1, 1000, String, 256) )
  {
    GetDlgItemTextA(a1, 1000, String, 256);
    v7 = 0;
    if ( strlen(String) != 0 )
    {
      do
        v4 += String[v7++] + 100000;
      while ( v7 < strlen(String) );
    }
    wsprintfA((LPSTR)&v9, MEMORY[0x40504C], v4 + 31337);
    GetDlgItemTextA(a1, 1002, unk_4055F4, 256);
    if ( GetDlgItemTextA(a1, 1002, unk_4055F4, 256) )
    {
      if ( !strcmp(unk_4055F4, (const char *)&v9) )
        MessageBoxA(0, MEMORY[0x405040], Caption, 0x40u);
      else
        MessageBoxA(0, MEMORY[0x405034], Caption, 0x10u);
      result = 0;
    }
    else
    {
      MessageBoxA(0, MEMORY[0x405050], MEMORY[0x405068], 0x30u);
      result = 0;
    }
  }
  else
  {
    MessageBoxA(0, MEMORY[0x405050], MEMORY[0x405068], 0x30u);
    result = 0;
  }
  return result;
}
