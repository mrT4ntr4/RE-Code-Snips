
/* Password::get_input() */

void __thiscall get_input(Password *this)

{
  operator<<<std--char_traits<char>>
            ((basic_ostream *)cout,"\nPlease Enter Four Digits Seperately: ");
  operator>>((basic_istream<char,std--char_traits<char>> *)cin,(int *)(this + 0x10));
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nSecond Digit: ");
  operator>>((basic_istream<char,std--char_traits<char>> *)cin,(int *)(this + 0x14));
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nThird Digit: ");
  operator>>((basic_istream<char,std--char_traits<char>> *)cin,(int *)(this + 0x18));
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nFourth Digit: ");
  operator>>((basic_istream<char,std--char_traits<char>> *)cin,(int *)(this + 0x1c));
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\n\n");
  return;
}


/* Password::check_passcode() */

undefined8 __thiscall check_passcode(Password *this)

{
  basic_ostream *this_00;
  undefined8 uVar1;
  
  this_00 = operator<<<std--char_traits<char>>((basic_ostream *)cout,"\n\n");
  this_00 = (basic_ostream *)
            operator<<((basic_ostream<char,std--char_traits<char>> *)this_00,*(int *)(this + 0x10));
  this_00 = operator<<<std--char_traits<char>>(this_00,'\n');
  this_00 = (basic_ostream *)
            operator<<((basic_ostream<char,std--char_traits<char>> *)this_00,*(int *)(this + 0x14));
  this_00 = operator<<<std--char_traits<char>>(this_00,'\n');
  this_00 = (basic_ostream *)
            operator<<((basic_ostream<char,std--char_traits<char>> *)this_00,*(int *)(this + 0x18));
  this_00 = operator<<<std--char_traits<char>>(this_00,'\n');
  this_00 = (basic_ostream *)
            operator<<((basic_ostream<char,std--char_traits<char>> *)this_00,*(int *)(this + 0x1c));
  operator<<<std--char_traits<char>>(this_00,'\n');
  if (*(int *)(this + 0x10) == *(int *)this) {
    if (*(int *)(this + 0x18) == *(int *)(this + 8)) {
      if (*(int *)(this + 0x14) == *(int *)(this + 4)) {
        if (*(int *)(this + 0x1c) == *(int *)(this + 0xc)) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 main(void)

{
  char cVar1;
  
  get_input((Password *)p);
  cVar1 = check_passcode((Password *)p);
  if (cVar1 != '\0') {
    operator<<<std--char_traits<char>>((basic_ostream *)cout,"\nWell done");
  }
  operator<<<std--char_traits<char>>((basic_ostream *)cout,"\n\nSORRY MAYBE NEXT TIME!!");
  return 0;
}

