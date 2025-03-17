#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
198,
199,
200,
201,
202,
203,
204,
205,
206,
209,
210,
319,
320,
321,
344,
345,
346,
363,
364,
365,
461,
462,
463,
466,
498,
499,
501,
503,
505,
507,
512,
520,
521,
522,
523,
524,
525,
526,
527,
607,
616,
617,
685,
691,
694,
696,
701,
702,
704,
705,
709,
710,
712,
713,
716,
717,
718,
721,
723,
726,
728,
730,
739,
803,
805,
807,
817,
818,
819,
821,
827,
828,
829,
830,
831,
839,
840,
841,
845,
846,
848,
852,
853,
854,
1146,
1303,
1304,
7392,
7393,
7395,
7396,
7397,
7398,
7399,
7401,
7402,
7403,
7418,
7420,
7425,
7427,
7429,
7431,
7482,
7483,
7485,
7486,
7487,
7488,
7489,
7491,
7493,
8455,
8459,
8461,
8462,
8463,
8464,
8879,
8880,
8881,
8882,
8900,
8901,
8902,
8946,
9011,
9014,
9022,
9023,
9024,
9025,
9026,
9303,
9307,
9308,
9335,
9369,
9376,
9383,
9394,
9398,
9421,
9499,
9501,
9510,
9512,
9513,
9520,
9535,
9555,
9556,
9564,
9566,
9573,
9574,
9577,
9579,
9584,
9590,
9591,
9598,
9600,
9612,
9615,
9616,
9617,
9628,
9638,
9644,
9645,
9646,
9648,
9649,
9666,
9668,
9683,
9701,
9728,
9758,
9759,
10239,
10323,
10324,
10508,
10509,
10513,
10514,
10515,
10520,
10571,
10967,
10968,
11164,
11168,
11178,
11971,
11992,
11994,
11996,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
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
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
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
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
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
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
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
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
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
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 198,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 199,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetGenericValue_icall,
// token 209,
ves_icall_System_Array_SetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 319,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 320,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 321,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 344,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 345,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 346,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 363,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 364,
ves_icall_System_Enum_InternalGetCorElementType,
// token 365,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 461,
ves_icall_System_Environment_get_ProcessorCount,
// token 462,
ves_icall_System_Environment_get_TickCount,
// token 463,
ves_icall_System_Environment_get_TickCount64,
// token 466,
ves_icall_System_Environment_FailFast_raw,
// token 498,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 499,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 501,
ves_icall_System_GC_SuppressFinalize_raw,
// token 503,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 505,
ves_icall_System_GC_GetGCMemoryInfo,
// token 507,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 512,
ves_icall_System_Object_MemberwiseClone_raw,
// token 520,
ves_icall_System_Math_Ceiling,
// token 521,
ves_icall_System_Math_Cos,
// token 522,
ves_icall_System_Math_Floor,
// token 523,
ves_icall_System_Math_Pow,
// token 524,
ves_icall_System_Math_Sin,
// token 525,
ves_icall_System_Math_Sqrt,
// token 526,
ves_icall_System_Math_Tan,
// token 527,
ves_icall_System_Math_ModF,
// token 607,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 616,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 617,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 685,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 691,
ves_icall_RuntimeType_make_array_type_raw,
// token 694,
ves_icall_RuntimeType_make_byref_type_raw,
// token 696,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 701,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 702,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 704,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 705,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 709,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 710,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 712,
ves_icall_System_RuntimeType_getFullName_raw,
// token 713,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 716,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 717,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 718,
ves_icall_RuntimeType_GetFields_native_raw,
// token 721,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 723,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 726,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 728,
ves_icall_RuntimeType_GetName_raw,
// token 730,
ves_icall_RuntimeType_GetNamespace_raw,
// token 739,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 803,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 805,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 807,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 817,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 818,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 819,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 821,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 827,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 828,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 829,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 830,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 831,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 839,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 840,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 841,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 845,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 846,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 848,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 852,
ves_icall_System_String_FastAllocateString_raw,
// token 853,
ves_icall_System_String_InternalIsInterned_raw,
// token 854,
ves_icall_System_String_InternalIntern_raw,
// token 1146,
ves_icall_System_Type_internal_from_handle_raw,
// token 1303,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1304,
ves_icall_System_ValueType_Equals_raw,
// token 7392,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7393,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7395,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7396,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7397,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7398,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7399,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7401,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7402,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7403,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7418,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7420,
mono_monitor_exit_icall_raw,
// token 7425,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7427,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7429,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7431,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7482,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7483,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7485,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7486,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7487,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7488,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7489,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7491,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7493,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8455,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8459,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8461,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8462,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8463,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8464,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8879,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8880,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8881,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8882,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8900,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8901,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8902,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8946,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9011,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9014,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9022,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9023,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9024,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9025,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9026,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9303,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9307,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9308,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9335,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9369,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9376,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9383,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9394,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9398,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9421,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9499,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9501,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9510,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9512,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9513,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9520,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9535,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9555,
ves_icall_reflection_get_token_raw,
// token 9556,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9564,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9566,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9573,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9574,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9577,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9579,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9584,
ves_icall_reflection_get_token_raw,
// token 9590,
ves_icall_get_method_info_raw,
// token 9591,
ves_icall_get_method_attributes,
// token 9598,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9600,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9612,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9615,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9616,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9617,
ves_icall_reflection_get_token_raw,
// token 9628,
ves_icall_InternalInvoke_raw,
// token 9638,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9644,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9645,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9646,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9648,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9649,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9666,
ves_icall_InvokeClassConstructor_raw,
// token 9668,
ves_icall_InternalInvoke_raw,
// token 9683,
ves_icall_reflection_get_token_raw,
// token 9701,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9728,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9758,
ves_icall_reflection_get_token_raw,
// token 9759,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10239,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10323,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10324,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10508,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10509,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10513,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10514,
ves_icall_ModuleBuilder_getToken_raw,
// token 10515,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10520,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10571,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10967,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10968,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11164,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11168,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11178,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11971,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11992,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11994,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11996,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
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
0,
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
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
