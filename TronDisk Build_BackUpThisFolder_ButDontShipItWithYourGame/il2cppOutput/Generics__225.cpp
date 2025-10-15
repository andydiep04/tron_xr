#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
struct Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8;
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C;
struct Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19;
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IEnumerable_1_t2F3CDAFD157993698650E145CA662718328EA696;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t8367D305629D4B00EFD835BD8049D28EF078FFD0;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IXRInputValueReader_1_t247E136B8E885FC4E01A4405F0524F47214F4A5B;
struct IXRInputValueReader_1_tE6C56CC3831F86463CF271FFFFAEA88A1AFFC425;
struct IXRInputValueReader_1_t3B292CF89AD3EFA514AD2640799BAD4A06619677;
struct IXRInputValueReader_1_tC86C12DB1216B425E7880781CAFFE046A4E03898;
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD;
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE;
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71;
struct InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5;
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408;
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693;
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB;
struct Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E;
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32;
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D;
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A;
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D;
struct UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB;
struct WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374;
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5;
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730;
struct WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9;
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
struct Wrapper_tDCD6E9769A559E52C6D10132E041EA3EFF52BC98;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506;
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2;
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF;
struct XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE;
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C;
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1;
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1;
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35;
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5;
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0;
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A;
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;

IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct Wrapper_tDCD6E9769A559E52C6D10132E041EA3EFF52BC98 : public RuntimeObject {};
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A 
{
	XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___m_Reader;
};
struct BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 
{
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_Reader;
};
struct BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE 
{
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_Reader;
};
struct BypassScope_t801793A02437762F196198D282A1980396D8B968 
{
	XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* ___m_Reader;
};
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	RuntimeObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct InputDeviceCharacteristics_t7BD1A06C6AE9FBD26F4FC105269861694217BD82 
{
	uint32_t ___value__;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct InputSourceMode_tC6F86938AEFC93650B200F13CB1CDF660E091A6C 
{
	int32_t ___value__;
};
struct Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	RuntimeObject* ___source;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CInstanceIdU3Ek__BackingField;
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CInstanceIdU3Ek__BackingField;
};
struct InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___U3CInstanceU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CInstanceIdU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	int32_t ___m_InputSourceMode;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference;
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list;
	int32_t ____index;
	int32_t ____version;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current;
};
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821  : public MulticastDelegate_t
{
};
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};
struct Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8  : public MulticastDelegate_t
{
};
struct Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C  : public MulticastDelegate_t
{
};
struct Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19  : public MulticastDelegate_t
{
};
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA ___current;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374  : public Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E
{
	RuntimeObject* ___source;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	int32_t ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* ___m_ObjectReference;
};
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	float ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* ___m_ObjectReference;
};
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* ___m_ObjectReference;
};
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59 {};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	uint32_t ___m_Characteristics;
};
struct WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9  : public Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610
{
	RuntimeObject* ___source;
	Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5  : public Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9  : public Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mB4FD6E6C2748201577FA407A6347A551413E8DA0_gshared (Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9D9A35DD876EEDD07A424ECC1BF4F949472E9B4C_gshared (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA Func_2_Invoke_m5FCD56659798D9D7163D543B4EFB36176A166CC2_gshared_inline (Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCD2AE447BF5F2DB9BD2FCC12898977FE4F004AB7_gshared (WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9* __this, RuntimeObject* ___0_source, Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9788F4EF50A0094F325E620BFC1D32ED3DAE63BB_gshared (Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC28B3C62105E92A56FF8F653549CD0EAF52EE6F7_gshared (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m42E5D81BF1869A4411FD8979982060200B5C8644_gshared_inline (Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m6C929ED5C1A2B964D41834542D001D44C5784AE1_gshared (WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374* __this, RuntimeObject* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_gshared (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared (InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A_gshared (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE_gshared (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_mB4FD6E6C2748201577FA407A6347A551413E8DA0 (Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*, const RuntimeMethod*))Iterator_1__ctor_mB4FD6E6C2748201577FA407A6347A551413E8DA0_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m9D9A35DD876EEDD07A424ECC1BF4F949472E9B4C (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9D9A35DD876EEDD07A424ECC1BF4F949472E9B4C_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13_gshared)(__this, method);
}
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline)(__this, ___0_arg, method);
}
inline InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA Func_2_Invoke_m5FCD56659798D9D7163D543B4EFB36176A166CC2_inline (Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA (*) (Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m5FCD56659798D9D7163D543B4EFB36176A166CC2_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mCD2AE447BF5F2DB9BD2FCC12898977FE4F004AB7 (WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9* __this, RuntimeObject* ___0_source, Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9*, RuntimeObject*, Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mCD2AE447BF5F2DB9BD2FCC12898977FE4F004AB7_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m9788F4EF50A0094F325E620BFC1D32ED3DAE63BB (Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*, const RuntimeMethod*))Iterator_1__ctor_m9788F4EF50A0094F325E620BFC1D32ED3DAE63BB_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mC28B3C62105E92A56FF8F653549CD0EAF52EE6F7 (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mC28B3C62105E92A56FF8F653549CD0EAF52EE6F7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_m42E5D81BF1869A4411FD8979982060200B5C8644_inline (Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m42E5D81BF1869A4411FD8979982060200B5C8644_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m6C929ED5C1A2B964D41834542D001D44C5784AE1 (WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374* __this, RuntimeObject* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374*, RuntimeObject*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m6C929ED5C1A2B964D41834542D001D44C5784AE1_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15 (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, il2cppRetVal, method);
}
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)(__this, method);
}
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___0_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5 (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline)(__this, method);
}
inline void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___0_usage, bool* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0 (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989 (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___0_usage, float* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___0_usage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___0_usage, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___0_usage, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55 (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A (uint32_t ___0_desiredCharacteristics, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_inputDevice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757 (XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A* __this, const RuntimeMethod* method) ;
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9 (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline)(__this, method);
}
inline void UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032 (Type_t* ___0_valueType, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_inputAction, int32_t ___1_inputSourceMode, const RuntimeMethod* method) ;
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A*, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A*, const RuntimeMethod*))BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE_gshared)(__this, method);
}
inline int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared)(___0_action, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1** ___0_reference, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
inline bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, int32_t*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared)(___0_action, ___1_value, method);
}
inline int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, const RuntimeMethod*))BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared)(__this, method);
}
inline float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared)(___0_action, method);
}
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared)(__this, method);
}
inline bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, float*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared)(___0_action, ___1_value, method);
}
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
inline void UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, const RuntimeMethod*))BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared)(___0_action, method);
}
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared)(__this, method);
}
inline bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared)(___0_action, ___1_value, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
inline void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40 (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, const RuntimeMethod*))BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9D9A35DD876EEDD07A424ECC1BF4F949472E9B4C_gshared (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mB4FD6E6C2748201577FA407A6347A551413E8DA0((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610* WhereSelectListIterator_2_Clone_m3338CA2AFA8591238B13489692B78C30D705F3C5_gshared (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* L_2 = __this->___selector;
		WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* L_3 = (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9D9A35DD876EEDD07A424ECC1BF4F949472E9B4C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m11D55B8AEE5504CFF91B53017963CCEB7AEB62A0_gshared (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA L_13;
		L_13 = Func_2_Invoke_m5FCD56659798D9D7163D543B4EFB36176A166CC2_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this)->___current))->___U3CInstanceU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this)->___current))->___U3CTypeU3Ek__BackingField), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tAA145424C2242535CCAB871EC1BD3C16344BB610*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m926409FDE8C5F2528D29B8EA95928825AF70777D_gshared (WhereSelectListIterator_2_tEC549F2F61E5F4BF2156FB9A9F8CF8029A18DAB5* __this, Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tD2291AFFE4C7FB74D9166AAA5F17244DB9DFB5A5* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9* L_1 = (WhereEnumerableIterator_1_t69CB3C06B2AC218C8912DD48368CC201862252F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mCD2AE447BF5F2DB9BD2FCC12898977FE4F004AB7(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m017DDC5605971EF6DC6E63CC46E9C1FF67ECF3C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* L_3 = (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2F45E03F13987C106503E1A03492C57DFF49FA6D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE2745F3BB6FB127C4C57AA2EC540DEAA7A89D622_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF06218BFCB481A4B87E64900FBFE9FDABB11A7C3_gshared (WhereSelectListIterator_2_t41A7AE956EBDE8CEE5C27A6E3ECD7CD33F668730* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC28B3C62105E92A56FF8F653549CD0EAF52EE6F7_gshared (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9788F4EF50A0094F325E620BFC1D32ED3DAE63BB((Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E* WhereSelectListIterator_2_Clone_mAD5FC9DADDF08C991003C86EA6DF6EA67923BD08_gshared (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* L_2 = __this->___selector;
		WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* L_3 = (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mC28B3C62105E92A56FF8F653549CD0EAF52EE6F7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m27D46C85A4861446D84A190A884E4FCB97AC700B_gshared (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m42E5D81BF1869A4411FD8979982060200B5C8644_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tEEF82AE11FFC6DF9B283B2D5E4A87B3E3BFD805E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAD2AF32884598AE600AFBA562BB6C45ADF04234F_gshared (WhereSelectListIterator_2_t5C6FF44C18E22CC6D264FFA3E490BBDA91B1B3E9* __this, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374* L_1 = (WhereEnumerableIterator_1_t7F233A4115A2DA7F213075592407137456080374*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m6C929ED5C1A2B964D41834542D001D44C5784AE1(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = __this->___selector;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// Method Definition Index: 99933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 99935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 75653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
// Method Definition Index: 75654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:112>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:113>
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:114>
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:116>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// Method Definition Index: 75655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:120>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 75656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:121>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 75657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:125>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:129>
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:130>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:131>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 75653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
// Method Definition Index: 75654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:112>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:113>
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:114>
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:116>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// Method Definition Index: 75655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:120>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
// Method Definition Index: 75656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:121>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 75657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:125>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:129>
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:130>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:131>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 75653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:108>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
// Method Definition Index: 75654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:112>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:113>
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:114>
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:116>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// Method Definition Index: 75655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:120>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 75656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:121>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 75657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:125>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 75659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:129>
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:130>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:131>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper__ctor_m42F8525ADAACA078DEB51D9C69EB7ABD7E3ACA5D_gshared (Wrapper_tDCD6E9769A559E52C6D10132E041EA3EFF52BC98* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
// Method Definition Index: 13779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// Method Definition Index: 13780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129593
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 129594
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = __this->____extractKey;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = __this->____entries;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = __this->____entries;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = __this->____entries;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____buckets;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = __this->____extractKey;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->____buckets;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = __this->____entries;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value;
		NullCheck(L_43);
		bool L_47;
		L_47 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = __this->____entries;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->____buckets;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// Method Definition Index: 129595
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___3_value;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 129596
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___1_newValue;
		RuntimeObject* L_1 = ___0_value;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = __this->____extractKey;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = __this->____entries;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___0_value;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = __this->____entries;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____buckets;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = __this->____entries;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___1_newValue;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = __this->____entries;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// Method Definition Index: 129597
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = __this->____entries;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode;
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = __this->____extractKey;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = __this->____entries;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_inline(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = __this->____entries;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = __this->____entries;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = __this->____entries;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = __this->____entries;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___3_count;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___1_key;
		int32_t L_40 = ___2_index;
		String_t* L_41 = V_2;
		int32_t L_42 = ___3_count;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___4_entryIndex;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = __this->____entries;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___4_entryIndex;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// Method Definition Index: 129598
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129593
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 129594
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_45 = L_13;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_10 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_11 = __this->____entries;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_21;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_3 = L_24;
	}

IL_009f:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a7:
	{
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_30)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		V_0 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_32)->max_length)), 2));
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_34 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_35 = __this->____extractKey;
		int32_t L_36 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_37 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_37, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_37;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_43 = __this->____entries;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_42);
		bool L_46;
		L_46 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_45: *(void**)L_45), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_47 = __this->____entries;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_5 = L_49;
	}

IL_0130:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013b:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_54 = V_1;
		return L_54;
	}
}
// Method Definition Index: 129595
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
// Method Definition Index: 129596
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_17, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_18 = __this->____entries;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_20);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____buckets;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_27 = __this->____entries;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), L_29, 0, NULL);
		V_1 = L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_1;
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_33 = V_3;
		String_t* L_34 = V_2;
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		bool L_37;
		L_37 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_33, L_34, 0, L_36, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_37)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_38 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_39 = __this->____entries;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_41, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_41);
		return (bool)1;
	}
}
// Method Definition Index: 129597
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_9 = __this->____entries;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_13 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_14 = __this->____entries;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_13);
		String_t* L_17;
		L_17 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_16: *(void**)L_16));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_24 = __this->____entries;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_26;
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		int32_t L_29 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1))))), (int32_t)L_31);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_32 = __this->____entries;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_34);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_35 = ___3_count;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_38 = ___1_key;
		int32_t L_39 = ___2_index;
		String_t* L_40 = V_2;
		int32_t L_41 = ___3_count;
		int32_t L_42;
		L_42 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_38, L_39, L_40, 0, L_41, NULL);
		if (L_42)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_43 = ___4_entryIndex;
		int32_t L_44 = V_1;
		*((int32_t*)L_43) = (int32_t)L_44;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_45 = V_1;
		V_0 = L_45;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_46 = __this->____entries;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_48;
	}

IL_00f9:
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_50 = ___4_entryIndex;
		int32_t L_51 = V_0;
		*((int32_t*)L_50) = (int32_t)L_51;
		return (bool)0;
	}
}
// Method Definition Index: 129598
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129588
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 129589
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		RuntimeObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// Method Definition Index: 129590
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = __this->____state;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129588
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 129589
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// Method Definition Index: 129590
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* XRInputDeviceValueReader_1_get_usage_mF0A9AE7573FC38F88BC2A539F4C8C9275B2A76D0_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC22455AB744A37C346A324A998574F6DB04E14D3_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m0B20C50D68647794E8ABF10EE0B6D65CD140BBA1_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m54D121360DE7AD9452CC57703FE12C16072EFD88_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mCF2A56E6DCE4E105BCE9854F74BB105BFF1932B9_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m282A750480083614F0683E4C0EE16A2CAF3F61EA_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mF1C33E2BF83C16671480514FFC6121811DE4349B_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m80FD7BEA8C9AD2F70E6D28F1B03DDE588D3942AF_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m3176E9B649FC143DE33EF339F248372AB8D9B6B4_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m9D19A7376E0AE9680F3223D4DEAAC297A0E39991_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mF769CE8E9E7218AE9AF381A08E1FEFF03696C7C9_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m80D898D043C7FA4CC3A7F3E841E5BB28C5F405FD_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mAF77C736BED5C384445A1B75A7BF8D193312AA2C_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4F28C01418E4915E0396925FD73D269B0854CA17_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m4AD5DD99F3E2F43717E9E5A4695D5E3A01CDEA05_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m159AC502BF07E75AE54CC1BA4B4E41B5905E4377_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m3A04BEFA6C6B160463A36D46503E086A9EBF554D_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* XRInputDeviceValueReader_1_get_usage_m38D2C347947260D301DBEE9FBB7121544B9501AB_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_m8725ABB62EE56E4E8608AEF12ABABD27C6349327_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mFB26DF481495DFA4EB7F9EAAF8EE8ECF2E218CB2_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m77A931FF80983194B30DA03F665640388590511B_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m54821C15C7470604F0BC91DAE0F3E7076EE302B1_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m44166B3E6FC75545AE33BBF9B89C9943F00FDB8D_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m2024454A11380BF10D1D6B0DDBCF53B0799AB020_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mA6C76DCE9187BBD82C48376604EE223B263091B4_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m02E750B4C0BD7CBA10F6DB9236C7A4728AFFAF9F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m44E8D3A05A0E946D45B72FEB1BCDCDB2F60EE82F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m425D34A03FE4C914695BA8D8F3FAE0152398DA94_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m66DFBD8C6B12CC02200365C2B27F9DE2B63B3790_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m435E7BB9BACDEF4ED2FE5CABC8BFD041AB3FE19F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4B1FB9835DB5DB357439C434BB59A3F085028E33_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m685FBD0B743256EA4F365BFF239D41AF6C31ECD9_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m3B612E192FA4D176BCD56B4E3BF8304858DD36E7_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m2FB898A4007961AE1997203C1006BF427A34BC50_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* XRInputDeviceValueReader_1_get_usage_mEB829DC58A87B12C46E6D1D6E82A27150B5BF73E_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC0DBCA0B79B703FDCFD853A779592A991F99BB58_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mDA869931D4F5055E4EAA15705B22D3867BA2C0A8_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mC9CE3759541A029FE3763588C9E749BCFC965F4C_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m1DEA7E98FCDB8562BACCCA616493EAC82C32D422_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m3095707D4AAFB6A6B0A22BB77C41E440AF75E57B_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m68DDCE5514BF70262402D19C6A7E28CC18765E48_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB2C23B439F825B0B5BB941250F3E5AE2F9F1F532_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m66879ABEBA25EE865957DC92ECAEFFB2BBA25019_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mFFC7DFF7516774FEE4083151A16665F4091F4794_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m8D76F69C316D1AC4E61811FD53F90A26F449519A_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_mB0DB8993BE3ECDC4EC0B1F057720978EB5107435_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m40DAF0627FBD385E12338A9A1CEEF193EECAE58F_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_mFDD7B32A07BF1A39AD9E588B6AE792F70C5FEEA8_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m07714713D7AA8852C391199CCA02CFA4EE52280E_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m1DA9C7DC07430BD10A08A5455621D5D37F4BC172_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_mB16F3C49124967DDB0FF50D2F46158663A5FB222_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* XRInputDeviceValueReader_1_get_usage_mCBCA94DD61B7A1A10DEF689C603EFCED881C25B8_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mF9B7077D4EF5BD78CB60F2C3F18B3A8A81A4A595_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m501DFBBB6E5E690F7BCA314B73015A819B18ACAE_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m40960CAFC6123037C21EFE51E87F24169907B67A_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m2F01BD74E9BAF41901030EEF157DE4E054BF4389_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m6E20E90493366761EE8CEA795DD0B09CB19097CE_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m4D086E23644B6C914C9530F2AF1B5ACC7812BE9C_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mA4087DFF9AA39A4CE05391C340E290F911BEE906_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mB818A2CD36259A4C2E9CA0D2994D4D5DE4203420_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mF04816BE0EC4AA038C5DA7F05E329402B291E72D_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m4CBE1CD38C6A703C36A0A9A5C7FB8468C68056D4_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m1700877EC39245DC6D4C5C9C629E3073FF488E59_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mF05D489BF210B4EB33864E45EF2FE90066FC8280_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m51E4A4CE7948EE8C3FBCA33873C5A3A76BD584F7_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m5B5C6AA4BA873D472FB94C949A426B2EB8C19E55_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m0C8EA4CD13974EAA7FE8A0B942632AC5C6765AF4_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m985BF99763CF0A2E46D8DA9798A111B4AF9C64AF_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* XRInputDeviceValueReader_1_get_usage_m26FF9C58C90E64222DF39DE7CE27969ACD622145_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC234C9FB2E374C90184839A3C0A0DCB550724C17_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mA49C7EE2BEEA42C0B2FE3C3887971511DB78B447_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m94131583E42AA0D74DB00C36FB8A3714BF139FA1_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m8E7C33A1FD09397013D19616410DB9167A1CEB43_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mAD4150AC0E9FCE8C6B42CDB6B072AD4AE9607B45_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mB3F8F5F0DC6B416D3105A59808E297745EEBE5F9_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m39AD5524AD5D05464A6328296B2666DE62B191DF_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m0140B2099A4BCCAF53FEF0BBD1B8624C79AAA4A2_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mE6090098CE06DABA7BDCD9F78348C08D79618C82_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m81FDB8DC199332F48592372B16246339D36BEDDA_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m93227A353AD1CC80C72FB5BD999265DE73E3FB68_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m486E5E178D5D967E214B77DC48BFFA16B6D113D4_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m56FBC3608E6F0490D368BF77CB89C18D7B34933C_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m808DAC1A1E93FD770DABC37DFFD33CDC3202BC7C_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m24BCA107F1BCF62B240AA8F76F21925D082BE5A0_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_mEBD6E983B151ECF15A97D24F3192633D643557F6_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* XRInputDeviceValueReader_1_get_usage_m8A4ADCDDD48132239153924F12E54897EC30F1B2_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_m5348A718884B64985DF14EE9AD27E5D7D1D34EAB_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m6315B201133B79A2B6FACD85C7C08FFC0AC3C44C_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m08721912593454E0D6D8357900E49314350947A2_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m5B29D78C353B85A5B094B77F9030108F289B7E82_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mFA8108280395134E7724057DFE2FBE3FC4EDE211_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m988DB58009FB1D7A39423AAAFB7565C82C7A2B08_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB27C6A31F0FE4CA56FC279B72AC2F1C28F9614D9_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mC429E3779B93AA9D7066476E6EABF632A74DED49_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m14E27F0618E4358C4B488F96B51C46CA0EDB0455_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mC74A7E86F12392C134F1EDDA7F9FC80ACF88A326_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m0CDE3B8947DD91C8D4122949A844F3E48952C606_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mEB4AD6D455B137E0D175A387E8BF13CD9DAE4C46_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m09ADC62BBC44DA482E8EBF17D66C8D92218B5A31_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m30A151D858010B4CA2DA11939A2980A2D2F07357_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m82387548A2195FD1D0F94EF3D363ACDEBC49B500_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m230D1C2834D49095B5805EDA86EDD55B2C4055C4_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* XRInputDeviceValueReader_1_get_usage_m51F48ED988A97FC802827ABC0BB2FB75F971ABC5_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 30305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mAD9D1335AC070AB967F71AFAB1DEAC7DE7B78E6C_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m2001C8BA8B0638BEDFB2582345CE2D5E2D767835_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		return (bool)0;
	}
}
// Method Definition Index: 30309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mFDFD16DB71C231A037A1A57388051BA55AE48217_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		return (uint32_t)0;
	}
}
// Method Definition Index: 30310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mBCC31B41C0D092595219A441E8E3433703534D09_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		return (0.0f);
	}
}
// Method Definition Index: 30311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m42A9609BFF742DC74C96E9204D5AA9DF3F1455F3_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m96F9F4A33D5CA9A3D6E7327B9B7FE5FB03FF3C45_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mF72D05FB881D857AAE9656B9BE5FB229A6145B5C_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 30314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mDC1787334BA972E01FEF4D773F170640048830C1_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		return (uint32_t)(0);
	}
}
// Method Definition Index: 30315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mEA97CE264949878E5E914906CEF1DACF289C129A_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_7 = ___0_value;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		return (bool)0;
	}
}
// Method Definition Index: 30316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mCAB5614B9AEEE9E4B48820EC8F9E91CB17DE5F18_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		return (bool)0;
	}
}
// Method Definition Index: 30317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m014F713899E4DC5B4F178634B5505856C1829F03_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_7 = ___0_value;
		*((float*)L_7) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		return (bool)0;
	}
}
// Method Definition Index: 30318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mCC4A8B07339DC801FE7FDCEE188B52C36FB7B642_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 30319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m9276C72F191B6C43100BABDF25B9FF8D3A55FFB8_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		return (bool)0;
	}
}
// Method Definition Index: 30320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m59D008BC51086009D727F31D3FEC2BA0A50F12C6_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		return (bool)0;
	}
}
// Method Definition Index: 30321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m7AF90DA8A391B6E94FF034B82895151AC86B7510_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		return (bool)1;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_7 = ___0_value;
		*((int32_t*)L_7) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		return (bool)0;
	}
}
// Method Definition Index: 30322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 30323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m929C31C577420C9309DE19085BDCE628C50368F7_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_get_manualValue_m358F9F0BA08D09609B037B18F3A1B8BE07D9E1B8_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		int32_t L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 30349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_mD2270FCC650B88384915A33B622FD861C2610BBC_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		int32_t L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 30350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 30351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m386A0A0DDEE905226FC1ACADAFEB91AAE7C1118C_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m7E69847A755ED76E83DE2ACBEAAAE9E69FC73B40_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 30353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2A75B9DA05CFD73D6E4DD4E515CD134C2FACC995_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 30354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 30355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m4D6561CE04D18789B51614F97266ACB63E15EEC6_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 30356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_mE0420C68FC1511C6B2730ECDE3F0E4AE5F359387_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			int32_t L_3;
			L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t L_8;
		L_8 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_8;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		int32_t L_13;
		L_13 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_13;
	}

IL_0090:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		int32_t L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		int32_t L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 30357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m772C8F3234BBCAB9F90C24D0357692BA5D3C49C4_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			int32_t* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		int32_t* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		return (bool)0;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		int32_t* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		int32_t* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		return (bool)0;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_19 = V_4;
		int32_t* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		int32_t* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		return (bool)0;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		int32_t* L_23 = ___0_value;
		int32_t L_24 = __this->___m_ManualValue;
		*(int32_t*)L_23 = L_24;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		return (bool)1;
	}

IL_00bb:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 30358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
// Method Definition Index: 30359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		int32_t* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		int32_t* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(int32_t*)L_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_get_manualValue_m3B6D11438549621E7A9045A95C18ACB8C0CB4746_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		float L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 30349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m92D0CDB5E666254390FE5B4FB8BAFD3580EBADA7_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		float L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 30350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 30351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_mBF28E6F2AD9ACD940BD13E35669A7CB834E4CFF0_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCD49C74D79D06D3446BEF2DBA790F1B6C76E55C5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 30353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 30354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 30355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m2EECA3A2B8475EC17A9B30BB3B6470EBE3A34169_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 30356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			float L_3;
			L_3 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float L_8;
		L_8 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_8;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		float L_13;
		L_13 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_13;
	}

IL_0090:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		float L_17;
		L_17 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		float L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		float L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 30357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mA7A16FB5DD2CFAD42DF5414A8B012EDCF587F9AC_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float* ___0_value, const RuntimeMethod* method) 
{
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			float* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		float* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		return (bool)0;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		float* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		float* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		return (bool)0;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_19 = V_4;
		float* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		float* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		return (bool)0;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		float* L_23 = ___0_value;
		float L_24 = __this->___m_ManualValue;
		*(float*)L_23 = L_24;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		return (bool)1;
	}

IL_00bb:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 30358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
// Method Definition Index: 30359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		float* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		float* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(float*)L_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_get_manualValue_m5EF71D81283E883A400D54151CCD812B7CF328EC_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 30349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m19E36BFF1B4DCAB067FFAE8B5C4F3327C40D51E7_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 30350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 30351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m15ABD6A28E25B0DE4396C5B4FA13007E666FECF1_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 30352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mFC8C600D3AE334E250AD75D8B42AF6EDCC62528C_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 30353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 30354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 30355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m12FFA2407D2822DB6CBB1B671A6F349F7AA0DA56_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 30356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
			L_3 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_8;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_13;
	}

IL_0090:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 30357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mB3FA1E715287C738E23501839BE2CC019B0A4C33_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		return (bool)0;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		return (bool)0;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		return (bool)0;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___m_ManualValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		return (bool)1;
	}

IL_00bb:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 30358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_3;
	}
}
// Method Definition Index: 30359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 30348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_get_manualValue_m6580D9D0E90768453554EC4C3F3A8BDE118832AD_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 30349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m7DE8FBB1F992F66B64970AE99224524E22F8232B_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 30350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m86D6EE8C2B6C04E222D96122A85F792D9A7B8CAB_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
// Method Definition Index: 30351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m391756331BB534D08D3C6DF2D5615F75B5E0E21E_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		return;
	}
}
// Method Definition Index: 30352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mC3F4DB0A46B3C8AE8E07B03FDE9B6AC8D81E1C78_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 30353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 30354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m3BED8195FBDCE6A99FCC116EBDC1EB0D62D2A039_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = *(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 30355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m862D31846AB537F3363F51ACE9942E1FD7A486F1_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, (((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 30356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_6 = L_3;
	const Il2CppFullySharedGenericStruct L_8 = L_3;
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_1, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_4, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, (Il2CppFullySharedGenericStruct*)L_3);
			il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_6, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0090:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 30357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mC84F19E640053D49DF7AC4E26440A3649D928CD4_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Il2CppFullySharedGenericStruct* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		Il2CppFullySharedGenericStruct* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		return (bool)0;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		bool L_10;
		L_10 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Il2CppFullySharedGenericStruct* L_14 = ___0_value;
		bool L_15;
		L_15 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		Il2CppFullySharedGenericStruct* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		return (bool)0;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_19 = V_4;
		Il2CppFullySharedGenericStruct* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		Il2CppFullySharedGenericStruct* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		return (bool)0;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		Il2CppFullySharedGenericStruct* L_23 = ___0_value;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_23, L_24, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_23, (void*)L_24);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		return (bool)1;
	}

IL_00bb:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 30358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mA9DD9A98276A883692B7BCBDFBAB6912D60F41E9_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 30359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mAF814AE91F21FF5F3AD73616B7D14DB1CAD004D6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		Il2CppFullySharedGenericStruct* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		Il2CppFullySharedGenericStruct* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 697
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 30337
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:107>
		int32_t L_0 = __this->___m_InputSourceMode;
		return L_0;
	}
}
// Method Definition Index: 11578
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_gshared_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA Func_2_Invoke_m5FCD56659798D9D7163D543B4EFB36176A166CC2_gshared_inline (Func_2_t744C5C05C3CF57DDFBC4172A9D0D603C3A8512B8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef InstanceHandle_tE6B8E29890FB27E3E1824A634157E596584E0CFA (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m321B177CDE142D1D55BBD1D63153186A54FEE249_gshared_inline (Func_2_t09E9CA48857BB30A132C819A0BF95101D519B80C* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m42E5D81BF1869A4411FD8979982060200B5C8644_gshared_inline (Func_2_t4B9DBEFF985557367D3D1D9DEFC6C785CD39BB19* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_gshared_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mCF21D6903C1C9AB285FB0E244CDE0E9ACAC429ED_gshared_inline (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 75657
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 75657
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 75657
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@ba467ec059b9/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 129592
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m3214A3F92C2EB22088AB7738E8DFE1BE70925148_gshared_inline (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 30350
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 30350
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 30350
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
