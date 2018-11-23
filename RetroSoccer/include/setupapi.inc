; ..\X86\SetupAPI.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CMP_GetServerSideDeviceInstallFlags PROTO :DWORD,:DWORD,:DWORD
CMP_WaitNoPendingInstallEvents PROTO :DWORD
CM_Add_Empty_Log_Conf PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Add_Empty_Log_Conf_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Add_IDA PROTO :DWORD,:DWORD,:DWORD
CM_Add_ID equ <CM_Add_IDA>

CM_Add_ID_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Add_ID_Ex equ <CM_Add_ID_ExA>

CM_Add_Range PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Add_Res_Des PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Add_Res_Des_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Connect_MachineA PROTO :DWORD,:DWORD
CM_Connect_Machine equ <CM_Connect_MachineA>

CM_Create_DevNodeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Create_DevNode equ <CM_Create_DevNodeA>

CM_Create_DevNode_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Create_DevNode_Ex equ <CM_Create_DevNode_ExA>

CM_Create_Range_List PROTO :DWORD,:DWORD
CM_Delete_Class_Key PROTO :DWORD,:DWORD
CM_Delete_Class_Key_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Delete_DevNode_Key PROTO :DWORD,:DWORD,:DWORD
CM_Delete_DevNode_Key_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Delete_Device_Interface_KeyA PROTO :DWORD,:DWORD
CM_Delete_Device_Interface_Key equ <CM_Delete_Device_Interface_KeyA>

CM_Delete_Device_Interface_Key_ExA PROTO :DWORD,:DWORD,:DWORD
CM_Delete_Device_Interface_Key_Ex equ <CM_Delete_Device_Interface_Key_ExA>

CM_Delete_Range PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Detect_Resource_Conflict PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Detect_Resource_Conflict_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Disable_DevNode PROTO :DWORD,:DWORD
CM_Disable_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Disconnect_Machine PROTO :DWORD
CM_Dup_Range_List PROTO :DWORD,:DWORD,:DWORD
CM_Enable_DevNode PROTO :DWORD,:DWORD
CM_Enable_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Enumerate_Classes PROTO :DWORD,:DWORD,:DWORD
CM_Enumerate_Classes_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Enumerate_EnumeratorsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Enumerate_Enumerators equ <CM_Enumerate_EnumeratorsA>

CM_Enumerate_Enumerators_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Enumerate_Enumerators_Ex equ <CM_Enumerate_Enumerators_ExA>

CM_Find_Range PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_First_Range PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Free_Log_Conf PROTO :DWORD,:DWORD
CM_Free_Log_Conf_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Free_Log_Conf_Handle PROTO :DWORD
CM_Free_Range_List PROTO :DWORD,:DWORD
CM_Free_Res_Des PROTO :DWORD,:DWORD,:DWORD
CM_Free_Res_Des_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Free_Res_Des_Handle PROTO :DWORD
CM_Free_Resource_Conflict_Handle PROTO :DWORD
CM_Get_Child PROTO :DWORD,:DWORD,:DWORD
CM_Get_Child_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Key_NameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Key_Name equ <CM_Get_Class_Key_NameA>

CM_Get_Class_Key_Name_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Key_Name_Ex equ <CM_Get_Class_Key_Name_ExA>

CM_Get_Class_NameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Name equ <CM_Get_Class_NameA>

CM_Get_Class_Name_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Name_Ex equ <CM_Get_Class_Name_ExA>

CM_Get_Class_Registry_PropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Class_Registry_Property equ <CM_Get_Class_Registry_PropertyA>

CM_Get_Depth PROTO :DWORD,:DWORD,:DWORD
CM_Get_Depth_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Custom_PropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Custom_Property equ <CM_Get_DevNode_Custom_PropertyA>

CM_Get_DevNode_Custom_Property_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Custom_Property_Ex equ <CM_Get_DevNode_Custom_Property_ExA>

CM_Get_DevNode_Registry_PropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Registry_Property equ <CM_Get_DevNode_Registry_PropertyA>

CM_Get_DevNode_Registry_Property_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Registry_Property_Ex equ <CM_Get_DevNode_Registry_Property_ExA>

CM_Get_DevNode_Status PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Status_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_IDA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID equ <CM_Get_Device_IDA>

CM_Get_Device_ID_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID_Ex equ <CM_Get_Device_ID_ExA>

CM_Get_Device_ID_ListA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID_List equ <CM_Get_Device_ID_ListA>

CM_Get_Device_ID_List_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID_List_Ex equ <CM_Get_Device_ID_List_ExA>

CM_Get_Device_ID_List_SizeA PROTO :DWORD,:DWORD,:DWORD
CM_Get_Device_ID_List_Size equ <CM_Get_Device_ID_List_SizeA>

CM_Get_Device_ID_List_Size_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID_List_Size_Ex equ <CM_Get_Device_ID_List_Size_ExA>

CM_Get_Device_ID_Size PROTO :DWORD,:DWORD,:DWORD
CM_Get_Device_ID_Size_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_AliasA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_Alias equ <CM_Get_Device_Interface_AliasA>

CM_Get_Device_Interface_Alias_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_Alias_Ex equ <CM_Get_Device_Interface_Alias_ExA>

CM_Get_Device_Interface_ListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_List equ <CM_Get_Device_Interface_ListA>

CM_Get_Device_Interface_List_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_List_Ex equ <CM_Get_Device_Interface_List_ExA>

CM_Get_Device_Interface_List_SizeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_List_Size equ <CM_Get_Device_Interface_List_SizeA>

CM_Get_Device_Interface_List_Size_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_Interface_List_Size_Ex equ <CM_Get_Device_Interface_List_Size_ExA>

CM_Get_First_Log_Conf PROTO :DWORD,:DWORD,:DWORD
CM_Get_First_Log_Conf_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Global_State PROTO :DWORD,:DWORD
CM_Get_Global_State_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Get_HW_Prof_FlagsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_HW_Prof_Flags equ <CM_Get_HW_Prof_FlagsA>

CM_Get_HW_Prof_Flags_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_HW_Prof_Flags_Ex equ <CM_Get_HW_Prof_Flags_ExA>

CM_Get_Hardware_Profile_InfoA PROTO :DWORD,:DWORD,:DWORD
CM_Get_Hardware_Profile_Info equ <CM_Get_Hardware_Profile_InfoA>

CM_Get_Hardware_Profile_Info_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Hardware_Profile_Info_Ex equ <CM_Get_Hardware_Profile_Info_ExA>

CM_Get_Log_Conf_Priority PROTO :DWORD,:DWORD,:DWORD
CM_Get_Log_Conf_Priority_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Next_Log_Conf PROTO :DWORD,:DWORD,:DWORD
CM_Get_Next_Log_Conf_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Next_Res_Des PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Next_Res_Des_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Parent PROTO :DWORD,:DWORD,:DWORD
CM_Get_Parent_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Res_Des_Data PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Res_Des_Data_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Res_Des_Data_Size PROTO :DWORD,:DWORD,:DWORD
CM_Get_Res_Des_Data_Size_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Resource_Conflict_Count PROTO :DWORD,:DWORD
CM_Get_Resource_Conflict_DetailsA PROTO :DWORD,:DWORD,:DWORD
CM_Get_Resource_Conflict_Details equ <CM_Get_Resource_Conflict_DetailsA>

CM_Get_Sibling PROTO :DWORD,:DWORD,:DWORD
CM_Get_Sibling_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Version PROTO
CM_Get_Version_Ex PROTO :DWORD
CM_Intersect_Range_List PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Invert_Range_List PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Is_Dock_Station_Present PROTO :DWORD
CM_Is_Dock_Station_Present_Ex PROTO :DWORD,:DWORD
CM_Is_Version_Available PROTO :DWORD
CM_Is_Version_Available_Ex PROTO :DWORD,:DWORD
CM_Locate_DevNodeA PROTO :DWORD,:DWORD,:DWORD
CM_Locate_DevNode equ <CM_Locate_DevNodeA>

CM_Locate_DevNode_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Locate_DevNode_Ex equ <CM_Locate_DevNode_ExA>

CM_Merge_Range_List PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Modify_Res_Des PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Modify_Res_Des_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Move_DevNode PROTO :DWORD,:DWORD,:DWORD
CM_Move_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Next_Range PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Class_KeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Class_Key equ <CM_Open_Class_KeyA>

CM_Open_Class_Key_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Class_Key_Ex equ <CM_Open_Class_Key_ExA>

CM_Open_DevNode_Key PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_DevNode_Key_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Device_Interface_KeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Device_Interface_Key equ <CM_Open_Device_Interface_KeyA>

CM_Open_Device_Interface_Key_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Open_Device_Interface_Key_Ex equ <CM_Open_Device_Interface_Key_ExA>

CM_Query_And_Remove_SubTreeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Query_And_Remove_SubTree equ <CM_Query_And_Remove_SubTreeA>

CM_Query_And_Remove_SubTree_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Query_And_Remove_SubTree_Ex equ <CM_Query_And_Remove_SubTree_ExA>

CM_Query_Arbitrator_Free_Data PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Query_Arbitrator_Free_Data_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Query_Arbitrator_Free_Size PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Query_Arbitrator_Free_Size_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Query_Remove_SubTree PROTO :DWORD,:DWORD
CM_Query_Remove_SubTree_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Query_Resource_Conflict_List PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Reenumerate_DevNode PROTO :DWORD,:DWORD
CM_Reenumerate_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Register_Device_Driver PROTO :DWORD,:DWORD
CM_Register_Device_Driver_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Register_Device_InterfaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Register_Device_Interface equ <CM_Register_Device_InterfaceA>

CM_Register_Device_Interface_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Register_Device_Interface_Ex equ <CM_Register_Device_Interface_ExA>

CM_Remove_SubTree PROTO :DWORD,:DWORD
CM_Remove_SubTree_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Request_Device_EjectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Request_Device_Eject equ <CM_Request_Device_EjectA>

CM_Request_Device_Eject_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Request_Device_Eject_Ex equ <CM_Request_Device_Eject_ExA>

CM_Request_Eject_PC PROTO
CM_Request_Eject_PC_Ex PROTO :DWORD
CM_Run_Detection PROTO :DWORD
CM_Run_Detection_Ex PROTO :DWORD,:DWORD
CM_Set_Class_Registry_PropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Set_Class_Registry_Property equ <CM_Set_Class_Registry_PropertyA>

CM_Set_DevNode_Problem PROTO :DWORD,:DWORD,:DWORD
CM_Set_DevNode_Problem_Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Set_DevNode_Registry_PropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Set_DevNode_Registry_Property equ <CM_Set_DevNode_Registry_PropertyA>

CM_Set_DevNode_Registry_Property_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Set_DevNode_Registry_Property_Ex equ <CM_Set_DevNode_Registry_Property_ExA>

CM_Set_HW_Prof PROTO :DWORD,:DWORD
CM_Set_HW_Prof_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Set_HW_Prof_FlagsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Set_HW_Prof_Flags equ <CM_Set_HW_Prof_FlagsA>

CM_Set_HW_Prof_Flags_ExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Set_HW_Prof_Flags_Ex equ <CM_Set_HW_Prof_Flags_ExA>

CM_Setup_DevNode PROTO :DWORD,:DWORD
CM_Setup_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Test_Range_Available PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Uninstall_DevNode PROTO :DWORD,:DWORD
CM_Uninstall_DevNode_Ex PROTO :DWORD,:DWORD,:DWORD
CM_Unregister_Device_InterfaceA PROTO :DWORD,:DWORD
CM_Unregister_Device_Interface equ <CM_Unregister_Device_InterfaceA>

CM_Unregister_Device_Interface_ExA PROTO :DWORD,:DWORD,:DWORD
CM_Unregister_Device_Interface_Ex equ <CM_Unregister_Device_Interface_ExA>

ExtensionPropSheetPageProc PROTO :DWORD,:DWORD,:DWORD
InstallHinfSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InstallHinfSection equ <InstallHinfSectionA>

SetupAddInstallSectionToDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupAddInstallSectionToDiskSpaceList equ <SetupAddInstallSectionToDiskSpaceListA>

SetupAddSectionToDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupAddSectionToDiskSpaceList equ <SetupAddSectionToDiskSpaceListA>

SetupAddToDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupAddToDiskSpaceList equ <SetupAddToDiskSpaceListA>

SetupAddToSourceListA PROTO :DWORD,:DWORD
SetupAddToSourceList equ <SetupAddToSourceListA>

SetupAdjustDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupAdjustDiskSpaceList equ <SetupAdjustDiskSpaceListA>

SetupBackupErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupBackupError equ <SetupBackupErrorA>

SetupCancelTemporarySourceList PROTO
SetupCloseFileQueue PROTO :DWORD
SetupCloseInfFile PROTO :DWORD
SetupCloseLog PROTO
SetupCommitFileQueueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupCommitFileQueue equ <SetupCommitFileQueueA>

SetupConfigureWmiFromInfSectionA PROTO :DWORD,:DWORD,:DWORD
SetupConfigureWmiFromInfSection equ <SetupConfigureWmiFromInfSectionA>

SetupCopyErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupCopyError equ <SetupCopyErrorA>

SetupCopyOEMInfA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupCopyOEMInf equ <SetupCopyOEMInfA>

SetupCreateDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD
SetupCreateDiskSpaceList equ <SetupCreateDiskSpaceListA>

SetupDecompressOrCopyFileA PROTO :DWORD,:DWORD,:DWORD
SetupDecompressOrCopyFile equ <SetupDecompressOrCopyFileA>

SetupDefaultQueueCallbackA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDefaultQueueCallback equ <SetupDefaultQueueCallbackA>

SetupDeleteErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDeleteError equ <SetupDeleteErrorA>

SetupDestroyDiskSpaceList PROTO :DWORD
SetupDiAskForOEMDisk PROTO :DWORD,:DWORD
SetupDiBuildClassInfoList PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiBuildClassInfoListExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiBuildClassInfoListEx equ <SetupDiBuildClassInfoListExA>

SetupDiBuildDriverInfoList PROTO :DWORD,:DWORD,:DWORD
SetupDiCallClassInstaller PROTO :DWORD,:DWORD,:DWORD
SetupDiCancelDriverInfoSearch PROTO :DWORD
SetupDiChangeState PROTO :DWORD,:DWORD
SetupDiClassGuidsFromNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiClassGuidsFromName equ <SetupDiClassGuidsFromNameA>

SetupDiClassGuidsFromNameExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiClassGuidsFromNameEx equ <SetupDiClassGuidsFromNameExA>

SetupDiClassNameFromGuidA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiClassNameFromGuid equ <SetupDiClassNameFromGuidA>

SetupDiClassNameFromGuidExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiClassNameFromGuidEx equ <SetupDiClassNameFromGuidExA>

SetupDiCreateDevRegKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiCreateDevRegKey equ <SetupDiCreateDevRegKeyA>

SetupDiCreateDeviceInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiCreateDeviceInfo equ <SetupDiCreateDeviceInfoA>

SetupDiCreateDeviceInfoList PROTO :DWORD,:DWORD
SetupDiCreateDeviceInfoListExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiCreateDeviceInfoListEx equ <SetupDiCreateDeviceInfoListExA>

SetupDiCreateDeviceInterfaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiCreateDeviceInterface equ <SetupDiCreateDeviceInterfaceA>

SetupDiCreateDeviceInterfaceRegKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiCreateDeviceInterfaceRegKey equ <SetupDiCreateDeviceInterfaceRegKeyA>

SetupDiDeleteDevRegKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiDeleteDeviceInfo PROTO :DWORD,:DWORD
SetupDiDeleteDeviceInterfaceData PROTO :DWORD,:DWORD
SetupDiDeleteDeviceInterfaceRegKey PROTO :DWORD,:DWORD,:DWORD
SetupDiDestroyClassImageList PROTO :DWORD
SetupDiDestroyDeviceInfoList PROTO :DWORD
SetupDiDestroyDriverInfoList PROTO :DWORD,:DWORD,:DWORD
SetupDiDrawMiniIcon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiEnumDeviceInfo PROTO :DWORD,:DWORD,:DWORD
SetupDiEnumDeviceInterfaces PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiEnumDriverInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiEnumDriverInfo equ <SetupDiEnumDriverInfoA>

SetupDiGetActualModelsSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetActualModelsSection equ <SetupDiGetActualModelsSectionA>

SetupDiGetActualSectionToInstallA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetActualSectionToInstall equ <SetupDiGetActualSectionToInstallA>

SetupDiGetActualSectionToInstallExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetActualSectionToInstallEx equ <SetupDiGetActualSectionToInstallExA>

SetupDiGetClassBitmapIndex PROTO :DWORD,:DWORD
SetupDiGetClassDescriptionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassDescription equ <SetupDiGetClassDescriptionA>

SetupDiGetClassDescriptionExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassDescriptionEx equ <SetupDiGetClassDescriptionExA>

SetupDiGetClassDevPropertySheetsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassDevPropertySheets equ <SetupDiGetClassDevPropertySheetsA>

SetupDiGetClassDevsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassDevs equ <SetupDiGetClassDevsA>

SetupDiGetClassDevsExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassDevsEx equ <SetupDiGetClassDevsExA>

SetupDiGetClassImageIndex PROTO :DWORD,:DWORD,:DWORD
SetupDiGetClassImageList PROTO :DWORD
SetupDiGetClassImageListExA PROTO :DWORD,:DWORD,:DWORD
SetupDiGetClassImageListEx equ <SetupDiGetClassImageListExA>

SetupDiGetClassInstallParamsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassInstallParams equ <SetupDiGetClassInstallParamsA>

SetupDiGetClassPropertyKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassRegistryPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetClassRegistryProperty equ <SetupDiGetClassRegistryPropertyA>

SetupDiGetCustomDevicePropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetCustomDeviceProperty equ <SetupDiGetCustomDevicePropertyA>

SetupDiGetDeviceInfoListClass PROTO :DWORD,:DWORD
SetupDiGetDeviceInfoListDetailA PROTO :DWORD,:DWORD
SetupDiGetDeviceInfoListDetail equ <SetupDiGetDeviceInfoListDetailA>

SetupDiGetDeviceInstallParamsA PROTO :DWORD,:DWORD,:DWORD
SetupDiGetDeviceInstallParams equ <SetupDiGetDeviceInstallParamsA>

SetupDiGetDeviceInstanceIdA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDeviceInstanceId equ <SetupDiGetDeviceInstanceIdA>

SetupDiGetDeviceInterfaceAlias PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDeviceInterfaceDetailA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDeviceInterfaceDetail equ <SetupDiGetDeviceInterfaceDetailA>

SetupDiGetDeviceInterfacePropertyKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDevicePropertyKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDeviceRegistryPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDeviceRegistryProperty equ <SetupDiGetDeviceRegistryPropertyA>

SetupDiGetDriverInfoDetailA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDriverInfoDetail equ <SetupDiGetDriverInfoDetailA>

SetupDiGetDriverInstallParamsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetDriverInstallParams equ <SetupDiGetDriverInstallParamsA>

SetupDiGetHwProfileFriendlyNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetHwProfileFriendlyName equ <SetupDiGetHwProfileFriendlyNameA>

SetupDiGetHwProfileFriendlyNameExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetHwProfileFriendlyNameEx equ <SetupDiGetHwProfileFriendlyNameExA>

SetupDiGetHwProfileList PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetHwProfileListExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetHwProfileListEx equ <SetupDiGetHwProfileListExA>

SetupDiGetINFClassA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiGetINFClass equ <SetupDiGetINFClassA>

SetupDiGetSelectedDevice PROTO :DWORD,:DWORD
SetupDiGetSelectedDriverA PROTO :DWORD,:DWORD,:DWORD
SetupDiGetSelectedDriver equ <SetupDiGetSelectedDriverA>

SetupDiGetWizardPage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiInstallClassA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiInstallClass equ <SetupDiInstallClassA>

SetupDiInstallClassExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiInstallClassEx equ <SetupDiInstallClassExA>

SetupDiInstallDevice PROTO :DWORD,:DWORD
SetupDiInstallDeviceInterfaces PROTO :DWORD,:DWORD
SetupDiInstallDriverFiles PROTO :DWORD,:DWORD
SetupDiLoadClassIcon PROTO :DWORD,:DWORD,:DWORD
SetupDiLoadDeviceIcon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiMoveDuplicateDevice PROTO :DWORD,:DWORD
SetupDiOpenClassRegKey PROTO :DWORD,:DWORD
SetupDiOpenClassRegKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiOpenClassRegKeyEx equ <SetupDiOpenClassRegKeyExA>

SetupDiOpenDevRegKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiOpenDeviceInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiOpenDeviceInfo equ <SetupDiOpenDeviceInfoA>

SetupDiOpenDeviceInterfaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiOpenDeviceInterface equ <SetupDiOpenDeviceInterfaceA>

SetupDiOpenDeviceInterfaceRegKey PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiRegisterCoDeviceInstallers PROTO :DWORD,:DWORD
SetupDiRegisterDeviceInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiRemoveDevice PROTO :DWORD,:DWORD
SetupDiRemoveDeviceInterface PROTO :DWORD,:DWORD
SetupDiReportAdditionalSoftwareRequested PROTO :DWORD,:DWORD,:DWORD
SetupDiReportDeviceInstallError PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiReportDriverNotFoundError PROTO :DWORD,:DWORD,:DWORD
SetupDiReportDriverPackageImportationError PROTO :DWORD,:DWORD,:DWORD
SetupDiReportGenericDriverInstalled PROTO :DWORD,:DWORD,:DWORD
SetupDiReportPnPDeviceProblem PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiRestartDevices PROTO :DWORD,:DWORD
SetupDiSelectBestCompatDrv PROTO :DWORD,:DWORD
SetupDiSelectDevice PROTO :DWORD,:DWORD
SetupDiSelectOEMDrv PROTO :DWORD,:DWORD,:DWORD
SetupDiSetClassInstallParamsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiSetClassInstallParams equ <SetupDiSetClassInstallParamsA>

SetupDiSetClassRegistryPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiSetClassRegistryProperty equ <SetupDiSetClassRegistryPropertyA>

SetupDiSetDeviceInstallParamsA PROTO :DWORD,:DWORD,:DWORD
SetupDiSetDeviceInstallParams equ <SetupDiSetDeviceInstallParamsA>

SetupDiSetDeviceInterfaceDefault PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiSetDeviceRegistryPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupDiSetDeviceRegistryProperty equ <SetupDiSetDeviceRegistryPropertyA>

SetupDiSetDriverInstallParamsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDiSetDriverInstallParams equ <SetupDiSetDriverInstallParamsA>

SetupDiSetSelectedDevice PROTO :DWORD,:DWORD
SetupDiSetSelectedDriverA PROTO :DWORD,:DWORD,:DWORD
SetupDiSetSelectedDriver equ <SetupDiSetSelectedDriverA>

SetupDiUnremoveDevice PROTO :DWORD,:DWORD
SetupDuplicateDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupDuplicateDiskSpaceList equ <SetupDuplicateDiskSpaceListA>

SetupEnumInfSectionsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupEnumInfSections equ <SetupEnumInfSectionsA>

SetupFindFirstLineA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupFindFirstLine equ <SetupFindFirstLineA>

SetupFindNextLine PROTO :DWORD,:DWORD
SetupFindNextMatchLineA PROTO :DWORD,:DWORD,:DWORD
SetupFindNextMatchLine equ <SetupFindNextMatchLineA>

SetupFreeSourceListA PROTO :DWORD,:DWORD
SetupFreeSourceList equ <SetupFreeSourceListA>

SetupGetBackupInformationA PROTO :DWORD,:DWORD
SetupGetBackupInformation equ <SetupGetBackupInformationA>

SetupGetBinaryField PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetFieldCount PROTO :DWORD
SetupGetFileCompressionInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetFileCompressionInfo equ <SetupGetFileCompressionInfoA>

SetupGetFileCompressionInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetFileCompressionInfoEx equ <SetupGetFileCompressionInfoExA>

SetupGetFileQueueCount PROTO :DWORD,:DWORD,:DWORD
SetupGetFileQueueFlags PROTO :DWORD,:DWORD
SetupGetInfDriverStoreLocationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetInfDriverStoreLocation equ <SetupGetInfDriverStoreLocationA>

SetupGetInfFileListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetInfFileList equ <SetupGetInfFileListA>

SetupGetInfInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetInfInformation equ <SetupGetInfInformationA>

SetupGetInfPublishedNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupGetInfPublishedName equ <SetupGetInfPublishedNameA>

SetupGetInfSections PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupGetIntField PROTO :DWORD,:DWORD,:DWORD
SetupGetLineByIndexA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupGetLineByIndex equ <SetupGetLineByIndexA>

SetupGetLineCountA PROTO :DWORD,:DWORD
SetupGetLineCount equ <SetupGetLineCountA>

SetupGetLineTextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetLineText equ <SetupGetLineTextA>

SetupGetMultiSzFieldA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetMultiSzField equ <SetupGetMultiSzFieldA>

SetupGetNonInteractiveMode PROTO
SetupGetSourceFileLocationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetSourceFileLocation equ <SetupGetSourceFileLocationA>

SetupGetSourceFileSizeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetSourceFileSize equ <SetupGetSourceFileSizeA>

SetupGetSourceInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetSourceInfo equ <SetupGetSourceInfoA>

SetupGetStringFieldA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetStringField equ <SetupGetStringFieldA>

SetupGetTargetPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupGetTargetPath equ <SetupGetTargetPathA>

SetupGetThreadLogToken PROTO
SetupInitDefaultQueueCallback PROTO :DWORD
SetupInitDefaultQueueCallbackEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInitializeFileLogA PROTO :DWORD,:DWORD
SetupInitializeFileLog equ <SetupInitializeFileLogA>

SetupInstallFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInstallFile equ <SetupInstallFileA>

SetupInstallFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInstallFileEx equ <SetupInstallFileExA>

SetupInstallFilesFromInfSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInstallFilesFromInfSection equ <SetupInstallFilesFromInfSectionA>

SetupInstallFromInfSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInstallFromInfSection equ <SetupInstallFromInfSectionA>

SetupInstallServicesFromInfSectionA PROTO :DWORD,:DWORD,:DWORD
SetupInstallServicesFromInfSection equ <SetupInstallServicesFromInfSectionA>

SetupInstallServicesFromInfSectionExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupInstallServicesFromInfSectionEx equ <SetupInstallServicesFromInfSectionExA>

SetupIterateCabinetA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupIterateCabinet equ <SetupIterateCabinetA>

SetupLogErrorA PROTO :DWORD,:DWORD
SetupLogError equ <SetupLogErrorA>

SetupLogFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupLogFile equ <SetupLogFileA>

SetupOpenAppendInfFileA PROTO :DWORD,:DWORD,:DWORD
SetupOpenAppendInfFile equ <SetupOpenAppendInfFileA>

SetupOpenFileQueue PROTO
SetupOpenInfFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupOpenInfFile equ <SetupOpenInfFileA>

SetupOpenLog PROTO :DWORD
SetupOpenMasterInf PROTO
SetupPrepareQueueForRestoreA PROTO :DWORD,:DWORD,:DWORD
SetupPrepareQueueForRestore equ <SetupPrepareQueueForRestoreA>

SetupPromptForDiskA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupPromptForDisk equ <SetupPromptForDiskA>

SetupPromptReboot PROTO :DWORD,:DWORD,:DWORD
SetupQueryDrivesInDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupQueryDrivesInDiskSpaceList equ <SetupQueryDrivesInDiskSpaceListA>

SetupQueryFileLogA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueryFileLog equ <SetupQueryFileLogA>

SetupQueryInfFileInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueryInfFileInformation equ <SetupQueryInfFileInformationA>

SetupQueryInfOriginalFileInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupQueryInfOriginalFileInformation equ <SetupQueryInfOriginalFileInformationA>

SetupQueryInfVersionInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueryInfVersionInformation equ <SetupQueryInfVersionInformationA>

SetupQuerySourceListA PROTO :DWORD,:DWORD,:DWORD
SetupQuerySourceList equ <SetupQuerySourceListA>

SetupQuerySpaceRequiredOnDriveA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQuerySpaceRequiredOnDrive equ <SetupQuerySpaceRequiredOnDriveA>

SetupQueueCopyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueueCopy equ <SetupQueueCopyA>

SetupQueueCopyIndirectA PROTO :DWORD
SetupQueueCopyIndirect equ <SetupQueueCopyIndirectA>

SetupQueueCopySectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueueCopySection equ <SetupQueueCopySectionA>

SetupQueueDefaultCopyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueueDefaultCopy equ <SetupQueueDefaultCopyA>

SetupQueueDeleteA PROTO :DWORD,:DWORD,:DWORD
SetupQueueDelete equ <SetupQueueDeleteA>

SetupQueueDeleteSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupQueueDeleteSection equ <SetupQueueDeleteSectionA>

SetupQueueRenameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupQueueRename equ <SetupQueueRenameA>

SetupQueueRenameSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetupQueueRenameSection equ <SetupQueueRenameSectionA>

SetupRemoveFileLogEntryA PROTO :DWORD,:DWORD,:DWORD
SetupRemoveFileLogEntry equ <SetupRemoveFileLogEntryA>

SetupRemoveFromDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupRemoveFromDiskSpaceList equ <SetupRemoveFromDiskSpaceListA>

SetupRemoveFromSourceListA PROTO :DWORD,:DWORD
SetupRemoveFromSourceList equ <SetupRemoveFromSourceListA>

SetupRemoveInstallSectionFromDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupRemoveInstallSectionFromDiskSpaceList equ <SetupRemoveInstallSectionFromDiskSpaceListA>

SetupRemoveSectionFromDiskSpaceListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupRemoveSectionFromDiskSpaceList equ <SetupRemoveSectionFromDiskSpaceListA>

SetupRenameErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupRenameError equ <SetupRenameErrorA>

SetupScanFileQueueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupScanFileQueue equ <SetupScanFileQueueA>

SetupSetDirectoryIdA PROTO :DWORD,:DWORD,:DWORD
SetupSetDirectoryId equ <SetupSetDirectoryIdA>

SetupSetDirectoryIdExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupSetDirectoryIdEx equ <SetupSetDirectoryIdExA>

SetupSetFileQueueAlternatePlatformA PROTO :DWORD,:DWORD,:DWORD
SetupSetFileQueueAlternatePlatform equ <SetupSetFileQueueAlternatePlatformA>

SetupSetFileQueueFlags PROTO :DWORD,:DWORD,:DWORD
SetupSetNonInteractiveMode PROTO :DWORD
SetupSetPlatformPathOverrideA PROTO :DWORD
SetupSetPlatformPathOverride equ <SetupSetPlatformPathOverrideA>

SetupSetSourceListA PROTO :DWORD,:DWORD,:DWORD
SetupSetSourceList equ <SetupSetSourceListA>

SetupSetThreadLogToken PROTO :DWORD,:DWORD
SetupTermDefaultQueueCallback PROTO :DWORD
SetupTerminateFileLog PROTO :DWORD
SetupUninstallNewlyCopiedInfs PROTO :DWORD,:DWORD,:DWORD
SetupUninstallOEMInfA PROTO :DWORD,:DWORD,:DWORD
SetupUninstallOEMInf equ <SetupUninstallOEMInfA>

SetupVerifyInfFileA PROTO :DWORD,:DWORD,:DWORD
SetupVerifyInfFile equ <SetupVerifyInfFileA>

SetupWriteTextLogInfLine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
pSetupDiCrimsonLogDeviceInstall PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

