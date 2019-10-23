
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* get_code() */

undefined1 * get_code(void)

{
  basic_ostream *this;
  int local_c;
  
  local_c = 0;
  while (local_c < 4) {
    this = operator<<<std--char_traits<char>>((basic_ostream *)cout,"Enter Digit ");
    this = (basic_ostream *)
           operator<<((basic_ostream<char,std--char_traits<char>> *)this,local_c + 1);
    operator<<<std--char_traits<char>>(this,": ");
    operator>>((basic_istream<char,std--char_traits<char>> *)cin,(int *)(code + (long)local_c * 4));
    operator<<<std--char_traits<char>>((basic_ostream *)cout,"\n");
    local_c = local_c + 1;
  }
  return code;
}

/* get_digit(int*, int) */

ulong get_digit(int *param_1,int param_2)

{
  uint uVar1;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  while (local_14 < param_2) {
    local_10 = local_10 | param_1[(long)local_14] & local_c;
    uVar1 = ~((local_c ^ param_1[(long)local_14]) & local_10);
    local_c = (local_c ^ param_1[(long)local_14]) & uVar1;
    local_10 = local_10 & uVar1;
    local_14 = local_14 + 1;
  }
  return (ulong)local_c;
}


/* check_code(int*) */

undefined8 check_code(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  iVar2 = get_digit((int *)p1,10);
  if (iVar1 == iVar2) {
    iVar1 = param_1[1];
    iVar2 = get_digit((int *)p2,10);
    if (iVar1 == iVar2) {
      iVar1 = param_1[2];
      iVar2 = get_digit((int *)p3,10);
      if (iVar1 == iVar2) {
        iVar1 = param_1[3];
        iVar2 = get_digit((int *)p4,10);
        if (iVar1 == iVar2) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 main(void)

{
  char cVar1;
  basic_ostream *this;
  long lVar2;
  int local_c;
  
  this = operator<<<std--char_traits<char>>((basic_ostream *)cout,"Please Enter The Passcode:");
  operator<<((basic_ostream<char,std--char_traits<char>> *)this,endl<char,std--char_traits<char>>);
  lVar2 = get_code();
  cVar1 = check_code((int *)code);
  if (cVar1 != '\x01') {
    operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nWRONG\n");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nYou Did It.\n");
  local_c = 0;
  while (local_c < 4) {
    operator<<((basic_ostream<char,std--char_traits<char>> *)cout,
               *(int *)(lVar2 + (long)local_c * 4));
    local_c = local_c + 1;
  }
  operator<<((basic_ostream<char,std--char_traits<char>> *)cout,endl<char,std--char_traits<char>>);
  return 0;
}

