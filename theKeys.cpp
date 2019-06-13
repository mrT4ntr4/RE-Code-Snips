int __cdecl main(int argc, const char **argv, const char **envp)
{
  signed int i; // [esp+0h] [ebp-Ch]
  unsigned int v5; // [esp+8h] [ebp-4h]
  unsigned int retaddr; // [esp+10h] [ebp+4h]

  v5 = 179417089;
  printf("Add all keys together and use result as password to site.\n\n");
  for ( i = 0; i < 4; ++i )
  {
    printf("Enter key%d:", i + 1);
    scanf("%u", &dword_403380[i]);
    v5 ^= dword_403380[i];
  }
  if ( v5 >= 0x400000 && v5 <= 0x406000 && *(_DWORD *)v5 == 1374456661 )
    retaddr = v5;
  else
    printf("Wrong password");
  return 0;
}
