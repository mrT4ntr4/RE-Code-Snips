
/* WARNING: Could not reconcile some variable overlaps */

undefined8 main(int iParm1,char **ppcParm2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  int local_64;
  undefined4 local_5d;
  undefined local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined local_38 [31];
  undefined local_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0x3231464544434241;
  local_50 = 0x3039383736353433;
  local_48 = 0;
  if (iParm1 < 2) {
    help(*ppcParm2);
    uVar2 = 1;
  }
  else {
    sVar3 = strlen(*ppcParm2);
    if (sVar3 < 0x10) {
      puts("You dirty little cheater! rename me back to: crackMe-by-m00ny-1");
      puts("or at least something with a minimum length of 16 characters ;-)");
      uVar2 = 1;
    }
    else {
      local_59 = 0;
      local_5d = CONCAT13((*ppcParm2)[6],CONCAT12((*ppcParm2)[2],CONCAT11(0x30,(*ppcParm2)[5])));
      local_64 = 0;
      while (local_64 < 0x1f) {
        iVar1 = rand();
        local_38[(long)local_64] = *(undefined *)((long)&local_58 + (long)(iVar1 % 0xf));
        local_64 = local_64 + 1;
      }
      local_19 = 0;
      iVar1 = strcmp(ppcParm2[1],(char *)&local_5d);
      if (iVar1 == 0) {
        puts("\nYou cracked me!");
        printf("\n\tflag{%s}\n\n",local_38);
        uVar2 = 0;
      }
      else {
        puts("\nnope, that was not the correct password");
        uVar2 = 1;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

