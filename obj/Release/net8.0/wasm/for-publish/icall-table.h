#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
171,
179,
180,
181,
182,
183,
184,
185,
187,
188,
235,
236,
237,
261,
262,
263,
274,
275,
276,
277,
364,
365,
366,
369,
400,
401,
403,
405,
407,
409,
414,
422,
423,
424,
425,
426,
427,
428,
429,
430,
510,
511,
563,
569,
572,
574,
579,
580,
582,
583,
587,
588,
590,
592,
593,
596,
597,
598,
601,
604,
606,
608,
617,
673,
675,
677,
687,
688,
689,
691,
697,
698,
699,
700,
701,
709,
710,
711,
715,
716,
718,
720,
906,
1054,
1055,
6469,
6470,
6472,
6473,
6474,
6475,
6476,
6478,
6480,
6482,
6490,
6492,
6497,
6499,
6501,
6503,
6554,
6555,
6557,
6558,
6559,
6560,
6561,
6563,
6565,
7439,
7443,
7445,
7446,
7447,
7448,
7642,
7643,
7644,
7645,
7661,
7662,
7663,
7665,
7706,
7772,
7774,
7783,
7784,
7785,
7786,
8174,
8178,
8179,
8205,
8222,
8229,
8236,
8247,
8250,
8270,
8341,
8343,
8352,
8354,
8355,
8362,
8376,
8396,
8397,
8405,
8407,
8414,
8415,
8418,
8420,
8425,
8431,
8432,
8439,
8441,
8453,
8456,
8457,
8458,
8469,
8478,
8484,
8485,
8486,
8488,
8489,
8506,
8508,
8522,
8539,
8566,
8591,
8592,
9011,
9094,
9095,
9239,
9240,
9244,
9247,
9309,
9665,
9666,
9882,
9892,
10454,
10475,
10477,
10479,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 171,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 180,
ves_icall_System_Array_CanChangePrimitive,
// token 181,
ves_icall_System_Array_FastCopy,
// token 182,
ves_icall_System_Array_GetLengthInternal_raw,
// token 183,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 184,
ves_icall_System_Array_GetGenericValue_icall,
// token 185,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 235,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 236,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 237,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 261,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 262,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 263,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 274,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 275,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 276,
ves_icall_System_Enum_InternalGetCorElementType,
// token 277,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 364,
ves_icall_System_Environment_get_ProcessorCount,
// token 365,
ves_icall_System_Environment_get_TickCount,
// token 366,
ves_icall_System_Environment_get_TickCount64,
// token 369,
ves_icall_System_Environment_FailFast_raw,
// token 400,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 401,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 403,
ves_icall_System_GC_SuppressFinalize_raw,
// token 405,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 407,
ves_icall_System_GC_GetGCMemoryInfo,
// token 409,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 414,
ves_icall_System_Object_MemberwiseClone_raw,
// token 422,
ves_icall_System_Math_Ceiling,
// token 423,
ves_icall_System_Math_Cos,
// token 424,
ves_icall_System_Math_Floor,
// token 425,
ves_icall_System_Math_Log10,
// token 426,
ves_icall_System_Math_Pow,
// token 427,
ves_icall_System_Math_Sin,
// token 428,
ves_icall_System_Math_Sqrt,
// token 429,
ves_icall_System_Math_Tan,
// token 430,
ves_icall_System_Math_ModF,
// token 510,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 511,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 563,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 569,
ves_icall_RuntimeType_make_array_type_raw,
// token 572,
ves_icall_RuntimeType_make_byref_type_raw,
// token 574,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 579,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 580,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 582,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 583,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 587,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 588,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 590,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 592,
ves_icall_System_RuntimeType_getFullName_raw,
// token 593,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 596,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 597,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 598,
ves_icall_RuntimeType_GetFields_native_raw,
// token 601,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 604,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 606,
ves_icall_RuntimeType_GetName_raw,
// token 608,
ves_icall_RuntimeType_GetNamespace_raw,
// token 617,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 673,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 675,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 677,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 687,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 688,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 689,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 691,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 698,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 699,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 700,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 701,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 709,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 710,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 711,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 715,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 716,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 718,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 720,
ves_icall_System_String_FastAllocateString_raw,
// token 906,
ves_icall_System_Type_internal_from_handle_raw,
// token 1054,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1055,
ves_icall_System_ValueType_Equals_raw,
// token 6469,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6470,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6472,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6473,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6474,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6475,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6476,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6478,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6480,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6482,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6490,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6492,
mono_monitor_exit_icall_raw,
// token 6497,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6499,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6501,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6503,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6554,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6555,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6557,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6558,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6559,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6560,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6561,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6563,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6565,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7439,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7443,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7445,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7446,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7447,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7448,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7642,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7643,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7644,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7645,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7661,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7662,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7663,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7665,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7706,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7772,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7774,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7783,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7784,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7785,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7786,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8174,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8178,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8179,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8205,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8222,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8229,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8236,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8247,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8250,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8270,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8341,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8343,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8352,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8354,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8355,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8362,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8376,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8396,
ves_icall_reflection_get_token_raw,
// token 8397,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8405,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8407,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8414,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8415,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8418,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8420,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8425,
ves_icall_reflection_get_token_raw,
// token 8431,
ves_icall_get_method_info_raw,
// token 8432,
ves_icall_get_method_attributes,
// token 8439,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8441,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8453,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8456,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8457,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8458,
ves_icall_reflection_get_token_raw,
// token 8469,
ves_icall_InternalInvoke_raw,
// token 8478,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8484,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8485,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8486,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8488,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8489,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8506,
ves_icall_InvokeClassConstructor_raw,
// token 8508,
ves_icall_InternalInvoke_raw,
// token 8522,
ves_icall_reflection_get_token_raw,
// token 8539,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8566,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8591,
ves_icall_reflection_get_token_raw,
// token 8592,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9011,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9094,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9095,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9239,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9240,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9244,
ves_icall_ModuleBuilder_getToken_raw,
// token 9247,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9309,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9665,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9666,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9882,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9892,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10454,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10475,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10477,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10479,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
