#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Control
struct Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694;
// Demo
struct Demo_t604A0ABD5699528B48A75285A69A8B9377779903;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Visual
struct Visual_t6C0551F9F8B17E03EF2490BA3803185378104868;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18;
IL2CPP_EXTERN_C String_t* _stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91;
IL2CPP_EXTERN_C String_t* _stringLiteral1512ECF033194240C6A681157BD4140FFA519680;
IL2CPP_EXTERN_C String_t* _stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A;
IL2CPP_EXTERN_C String_t* _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C;
IL2CPP_EXTERN_C String_t* _stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD;
IL2CPP_EXTERN_C String_t* _stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B;
IL2CPP_EXTERN_C String_t* _stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C;
IL2CPP_EXTERN_C String_t* _stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04;
IL2CPP_EXTERN_C String_t* _stringLiteral611658BEF150878B3D86985772560285EBDB81A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E6628D67752F3902DA04634283C815FDF6139DC;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63;
IL2CPP_EXTERN_C String_t* _stringLiteral78F55D506CEA2368A628FFDC438C8A3E77C359FD;
IL2CPP_EXTERN_C String_t* _stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855;
IL2CPP_EXTERN_C String_t* _stringLiteral910FC7F37BC71514E6ED776EDE5A172AF5CDB4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967;
IL2CPP_EXTERN_C String_t* _stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0;
IL2CPP_EXTERN_C String_t* _stringLiteral999A99E841361F022F64587F6F9C6EC44F920855;
IL2CPP_EXTERN_C String_t* _stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41;
IL2CPP_EXTERN_C String_t* _stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74;
IL2CPP_EXTERN_C String_t* _stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC2ED96C8F6788615150303888C29767E943C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60;
IL2CPP_EXTERN_C String_t* _stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E;
IL2CPP_EXTERN_C String_t* _stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F;
IL2CPP_EXTERN_C String_t* _stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Control
struct Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Control::model_scale
	float ___model_scale_4;
};

// Demo
struct Demo_t604A0ABD5699528B48A75285A69A8B9377779903  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Demo::animals
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___animals_4;
	// System.Int32 Demo::animalIndex
	int32_t ___animalIndex_5;
	// System.Collections.Generic.List`1<System.String> Demo::animationList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___animationList_6;
	// System.Collections.Generic.List`1<System.String> Demo::shapekeyList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___shapekeyList_7;
	// UnityEngine.Transform Demo::animal_parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___animal_parent_8;
	// UnityEngine.UI.Dropdown Demo::dropdownAnimal
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownAnimal_9;
	// UnityEngine.UI.Dropdown Demo::dropdownAnimation
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownAnimation_10;
	// UnityEngine.UI.Dropdown Demo::dropdownShapekey
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdownShapekey_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Visual
struct Visual_t6C0551F9F8B17E03EF2490BA3803185378104868  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Visual::width
	int32_t ___width_4;
	// System.Int32 Visual::height
	int32_t ___height_5;
	// System.Byte[] Visual::imageData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___imageData_6;
	// System.Byte[] Visual::cameraData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cameraData_7;
	// UnityEngine.Color32[] Visual::colorData
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colorData_8;
	// System.Single[] Visual::R
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___R_9;
	// System.Single[] Visual::T
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___T_10;
	// System.Single[] Visual::normal
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___normal_11;
	// System.Single[] Visual::center
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___center_12;
	// UnityEngine.WebCamTexture Visual::webcamTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___webcamTexture_13;
	// UnityEngine.UI.RawImage Visual::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_14;
	// UnityEngine.Texture2D Visual::tex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex_15;
	// UnityEngine.Material Visual::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_16;
	// UnityEngine.Shader Visual::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_17;
	// UnityEngine.GameObject Visual::test_model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___test_model_18;
	// UnityEngine.GameObject Visual::test_plane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___test_plane_19;
	// UnityEngine.GameObject Visual::animate_model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___animate_model_20;
	// System.Int32 Visual::detected
	int32_t ___detected_21;
	// System.Boolean Visual::put
	bool ___put_22;
	// System.Boolean Visual::redetect
	bool ___redetect_23;
	// System.Boolean Visual::cxx_debug
	bool ___cxx_debug_24;
	// System.Random Visual::rd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rd_25;
	// System.Int32 Visual::randCount
	int32_t ___randCount_26;
	// System.Collections.Generic.List`1<System.String> Visual::animationList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___animationList_27;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.UI.Dropdown/OptionData

// UnityEngine.UI.Dropdown/OptionData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.WebCamTexture

// UnityEngine.WebCamTexture

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Control

// Control

// Demo

// Demo

// Visual

// Visual

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Demo::ChangeShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Demo::PrevAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::NextAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Demo::NextShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::PrevShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::NextAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::PrevAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Count()
inline int32_t List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Demo::ChangeAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// System.Void Demo::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Material Visual::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Visual_get_material_mE016FD54DF457B5F119CAAFB78CFED2F91D1AF82 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_mat, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::op_Inequality(System.Runtime.InteropServices.GCHandle,System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_op_Inequality_m393093145A7BD94D28974D315020F726C0910985 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_a, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_b, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Boolean Visual::init(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Visual_init_m7A792947D7E74F3980129C4CB656E594CA5BE962 (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m75037ECD4778EE55F9987B9E56BD8AF8BC4A28CC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_requestedWidth, int32_t ___1_requestedHeight, int32_t ___2_requestedFPS, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_mCB0ABCB9D7BCB7ECABF7BF911946DE25C8F26B58 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void Visual::Color32ToByte(UnityEngine.Color32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_Color32ToByte_m7DF7EE5538AE77644C106BF33937994F0BB810EB (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_color, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_image, const RuntimeMethod* method) ;
// System.Void Visual::transpose(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_transpose_m9D6952989F346B84CA34949802A0AD085D88D777 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, int32_t ___1_w, int32_t ___2_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_dst, const RuntimeMethod* method) ;
// System.Int32 Visual::process(System.Byte[],System.Single[],System.Single[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Visual_process_mDF9A8C83DB023AE596B4A2276D2524E672416699 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_R, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_T, bool ___3_show_indicator, const RuntimeMethod* method) ;
// System.Void Visual::flip(System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_flip_mA376173E1FECDE12A1899EAA2F70D272CFFC6680 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, int32_t ___1_w, int32_t ___2_h, int32_t ___3_fcode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_dst, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Visual::detect(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Visual_detect_mFD06200FA2963F3A80C9F37400422B255DA73B46 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_normal, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_center, const RuntimeMethod* method) ;
// System.Void Visual::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_ChangeAnimation_m388918B83BDE6ADDB89E5E7AE619EEAFA5969561 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m62135816B7F4BB45759E10E953926E4E0F24D370 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Void Visual::set_debug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_set_debug_m2A3E0E9621EC84CC10FEFE818311CDA7E4CA3CA2 (bool ___0_debug, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL init(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL set_debug(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL process(uint8_t*, float*, float*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL detect(float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL release();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL rotate(uint8_t*, int32_t, int32_t, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL flip(uint8_t*, int32_t, int32_t, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL transpose(uint8_t*, int32_t, int32_t, uint8_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Demo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_Start_m806465496F7D4ED43DF7DE4288205BE6FDC90803 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// animal_parent = GameObject.Find("Animals").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7FCBDD505DA363D92834540BA1708D2C7B4640B6, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___animal_parent_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animal_parent_8), (void*)L_1);
		// Transform canvas = GameObject.Find("Canvas").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		V_0 = L_3;
		// dropdownAnimal = canvas.Find("Animal").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral8F70772C8BD28EBD55E082AAFF49ADA6C2AF2855, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_6);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7;
		L_7 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_6, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownAnimal_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownAnimal_9), (void*)L_7);
		// dropdownAnimation = canvas.Find("Animation").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_10);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_11;
		L_11 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_10, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownAnimation_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownAnimation_10), (void*)L_11);
		// dropdownShapekey = canvas.Find("Shapekey").Find("Dropdown").GetComponent<Dropdown>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteralB0E1A7C9BE3A70838E67B16306D41C090550390A, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_13, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, NULL);
		NullCheck(L_14);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_15;
		L_15 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(L_14, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdownShapekey_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownShapekey_11), (void*)L_15);
		// int count = animal_parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___animal_parent_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_16, NULL);
		V_1 = L_17;
		// animals = new GameObject[count];
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___animals_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animals_4), (void*)L_19);
		// List<string> animalList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_20, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_20;
		// for(int i = 0; i< count; i++)
		V_3 = 0;
		goto IL_0100;
	}

IL_00a7:
	{
		// animals[i] = animal_parent.GetChild(i).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___animals_4;
		int32_t L_22 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___animal_parent_8;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, L_24, NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_26);
		// string n = animal_parent.GetChild(i).name;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___animal_parent_8;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, L_28, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		V_4 = L_30;
		// animalList.Add(n);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = V_2;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_31, L_32, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if(i==0) animals[i].SetActive(true);
		int32_t L_33 = V_3;
		if (L_33)
		{
			goto IL_00ee;
		}
	}
	{
		// if(i==0) animals[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___animals_4;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		goto IL_00fc;
	}

IL_00ee:
	{
		// else animals[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___animals_4;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
	}

IL_00fc:
	{
		// for(int i = 0; i< count; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0100:
	{
		// for(int i = 0; i< count; i++)
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00a7;
		}
	}
	{
		// dropdownAnimal.AddOptions(animalList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_45 = __this->___dropdownAnimal_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_2;
		NullCheck(L_45);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_45, L_46, NULL);
		// dropdownAnimation.AddOptions(animationList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_47 = __this->___dropdownAnimation_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = __this->___animationList_6;
		NullCheck(L_47);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_47, L_48, NULL);
		// dropdownShapekey.AddOptions(shapekeyList);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_49 = __this->___dropdownShapekey_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = __this->___shapekeyList_7;
		NullCheck(L_49);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_49, L_50, NULL);
		// dropdownShapekey.value = 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_51 = __this->___dropdownShapekey_11;
		NullCheck(L_51);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_51, 1, NULL);
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_Update_mA56BCC789ECB8EA60415DE2336840979C399D1EF (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown("up")) { PrevAnimal(); }
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if(Input.GetKeyDown("up")) { PrevAnimal(); }
		Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819(__this, NULL);
		return;
	}

IL_0013:
	{
		// else if(Input.GetKeyDown("down")) { NextAnimal(); }
		bool L_1;
		L_1 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// else if(Input.GetKeyDown("down")) { NextAnimal(); }
		Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC(__this, NULL);
		return;
	}

IL_0026:
	{
		// else if(Input.GetKeyDown("right")
		//     && (Input.GetKey(KeyCode.LeftControl)
		//     || Input.GetKey(KeyCode.RightControl))) { NextShapekey(); }
		bool L_2;
		L_2 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}

IL_004a:
	{
		// || Input.GetKey(KeyCode.RightControl))) { NextShapekey(); }
		Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2(__this, NULL);
		return;
	}

IL_0051:
	{
		// else if(Input.GetKeyDown("left")
		//     && (Input.GetKey(KeyCode.LeftControl)
		//     || Input.GetKey(KeyCode.RightControl))) { PrevShapekey(); }
		bool L_5;
		L_5 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)305), NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}

IL_0075:
	{
		// || Input.GetKey(KeyCode.RightControl))) { PrevShapekey(); }
		Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB(__this, NULL);
		return;
	}

IL_007c:
	{
		// else if(Input.GetKeyDown("right")) { NextAnimation(); }
		bool L_8;
		L_8 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		// else if(Input.GetKeyDown("right")) { NextAnimation(); }
		Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B(__this, NULL);
		return;
	}

IL_008f:
	{
		// else if(Input.GetKeyDown("left")) { PrevAnimation(); }
		bool L_9;
		L_9 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// else if(Input.GetKeyDown("left")) { PrevAnimation(); }
		Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39(__this, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Demo::NextAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimal_m039F52240EC80492CE4F55ACC8807BCAC3C18CEC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimal.value >= dropdownAnimal.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimal_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimal_9;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimal.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimal_9;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimal.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimal();
		Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimal_mF17A9B12BE58F2EC527FB421AEC0029F56588819 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimal.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimal_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimal.value = dropdownAnimal.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownAnimal_9;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimal.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimal_9;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimal();
		Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimal_m117C2C2A9D1A698D37A6FCADB8B5D94F255EE875 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	{
		// animals[animalIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		int32_t L_1 = __this->___animalIndex_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// animals[dropdownAnimal.value].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimal_9;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// animalIndex = dropdownAnimal.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___dropdownAnimal_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_9, NULL);
		__this->___animalIndex_5 = L_10;
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::NextAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextAnimation_m64B13CEEBD8199DFCDD3AD6949877521E9E8745B (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimation.value >= dropdownAnimation.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimation_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimation_10;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimation.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownAnimation_10;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimation.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevAnimation_m5B496AA78F89B45080C1F06D868CD91081C28C39 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownAnimation.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownAnimation_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownAnimation.value = dropdownAnimation.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownAnimation_10;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownAnimation.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownAnimation_10;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeAnimation();
		Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeAnimation_m8BCA27DA7CC46BBCC31359717802141BC1A64BB3 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Animator animator = animals[dropdownAnimal.value].GetComponent<Animator>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___dropdownAnimal_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_5;
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		// int index = dropdownAnimation.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_8 = __this->___dropdownAnimation_10;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_8, NULL);
		V_1 = L_9;
		// if(index == 15)
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0070;
		}
	}
	{
		// if(animator.HasState(0, Animator.StringToHash("Spin")))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = V_0;
		int32_t L_12;
		L_12 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F, NULL);
		NullCheck(L_11);
		bool L_13;
		L_13 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_11, 0, L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// animator.Play("Spin");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = V_0;
		NullCheck(L_14);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_14, _stringLiteralEE0194F094B01B894A3574E0846DC1A289D0828F, NULL);
		return;
	}

IL_0051:
	{
		// else if(animator.HasState(0, Animator.StringToHash("Splash")))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = V_0;
		int32_t L_16;
		L_16 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
		NullCheck(L_15);
		bool L_17;
		L_17 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_15, 0, L_16, NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		// animator.Play("Splash");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = V_0;
		NullCheck(L_18);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_18, _stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
		return;
	}

IL_0070:
	{
		// animator.Play(dropdownAnimation.options[index].text);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = V_0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_20 = __this->___dropdownAnimation_10;
		NullCheck(L_20);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_21;
		L_21 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_20, NULL);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_23;
		L_23 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_21, L_22, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_23, NULL);
		NullCheck(L_19);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_19, L_24, NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Demo::NextShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_NextShapekey_m5ED1B5CD759955558C3EC504F1A8DF43388C2BD2 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownShapekey.value >= dropdownShapekey.options.Count - 1)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownShapekey_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownShapekey_11;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_3, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownShapekey.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___dropdownShapekey_11;
		NullCheck(L_5);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_5, 0, NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownShapekey.value++;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::PrevShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_PrevShapekey_m56C22D1E0261D08EFA501595D2C2BD4AC677E9CB (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(dropdownShapekey.value<= 0)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdownShapekey_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// dropdownShapekey.value = dropdownShapekey.options.Count - 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___dropdownShapekey_11;
		NullCheck(L_3);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_4;
		L_4 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_inline(L_4, List_1_get_Count_m39D4FCF97165F6499B8713930212C2083D4A098E_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_2, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		goto IL_0042;
	}

IL_002d:
	{
		// dropdownShapekey.value--;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdownShapekey_11;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_0042:
	{
		// ChangeShapekey();
		Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC(__this, NULL);
		// }
		return;
	}
}
// System.Void Demo::ChangeShapekey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_ChangeShapekey_mAE9F771DA056F1CEB2364946EC4824CA2F7178FC (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	{
		// Animator animator = animals[dropdownAnimal.value].GetComponent<Animator>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___animals_4;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___dropdownAnimal_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_5;
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// animator.Play(dropdownShapekey.options[dropdownShapekey.value].text);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = V_0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9 = __this->___dropdownShapekey_11;
		NullCheck(L_9);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_10;
		L_10 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_9, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_11 = __this->___dropdownShapekey_11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_11, NULL);
		NullCheck(L_10);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_13;
		L_13 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_10, L_12, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline(L_13, NULL);
		NullCheck(L_8);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, L_14, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Demo::GoToWebsite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo_GoToWebsite_mB162C8246C32CB9E49F9162D0ED5E57CD08F6117 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, String_t* ___0_URL, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(URL);
		String_t* L_0 = ___0_URL;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo__ctor_mF8CB4DA056D99F53BB80CCCC92E971E42C7D1346 (Demo_t604A0ABD5699528B48A75285A69A8B9377779903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1512ECF033194240C6A681157BD4140FFA519680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral999A99E841361F022F64587F6F9C6EC44F920855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12C13441E908B46D0E8552680587F5595D959F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> animationList = new List<string>
		//                                         {    "Attack",
		//                                             "Bounce",
		//                                             "Clicked",
		//                                             "Death",
		//                                             "Eat",
		//                                             "Fear",
		//                                             "Fly",
		//                                             "Hit",
		//                                             "Idle_A", "Idle_B", "Idle_C",
		//                                             "Jump",
		//                                             "Roll",
		//                                             "Run",
		//                                             "Sit",
		//                                             "Spin/Splash",
		//                                             "Swim",
		//                                             "Walk"
		//                                         };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteral999A99E841361F022F64587F6F9C6EC44F920855, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, _stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = L_14;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15;
		NullCheck(L_16);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, _stringLiteral15403EFFBCE7E327D2A9A2FE0EAD06E9C1F6895A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, _stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___animationList_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationList_6), (void*)L_18);
		// private List<string> shapekeyList = new List<string>
		//                                         {    "Eyes_Annoyed",
		//                                             "Eyes_Blink",
		//                                             "Eyes_Cry",
		//                                             "Eyes_Dead",
		//                                             "Eyes_Excited",
		//                                             "Eyes_Happy",
		//                                             "Eyes_LookDown",
		//                                             "Eyes_LookIn",
		//                                             "Eyes_LookOut",
		//                                             "Eyes_LookUp",
		//                                             "Eyes_Rabid",
		//                                             "Eyes_Sad",
		//                                             "Eyes_Shrink",
		//                                             "Eyes_Sleep",
		//                                             "Eyes_Spin",
		//                                             "Eyes_Squint",
		//                                             "Eyes_Trauma",
		//                                             "Sweat_L",
		//                                             "Sweat_R",
		//                                             "Teardrop_L",
		//                                             "Teardrop_R"
		//                                         };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_19, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_20, _stringLiteral1512ECF033194240C6A681157BD4140FFA519680, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, _stringLiteralE3D65DA52A9BFBD94A0C84C0DC935BAA6615B79E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = L_21;
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, _stringLiteral3C2E75EBA56E0DB6EEA8C72BD7E00C559D9871A3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = L_22;
		NullCheck(L_23);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_23, _stringLiteral1098C1C6AE28313F6BCE84C6D06DB15652C34D91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = L_23;
		NullCheck(L_24);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_24, _stringLiteral1FB5FC7BA645286E609BBA6C77F0874F60FC24FD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, _stringLiteralCB3D04C54A5B72E15800E87C07E9D30C9140CD5C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = L_25;
		NullCheck(L_26);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, _stringLiteral569EE0D84A834B69D45A8BD6767D538B921D4B04, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = L_26;
		NullCheck(L_27);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_27, _stringLiteral0A230C4A94118B8C0BF6CF10919C2D88B6E7296C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = L_27;
		NullCheck(L_28);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_28, _stringLiteralD9409291689D96C9138BA1554E6CAEC1369F2EEC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = L_28;
		NullCheck(L_29);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_29, _stringLiteral749D85A33862A7BE82BCB5F6F915340B1BA61E63, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = L_29;
		NullCheck(L_30);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_30, _stringLiteral9882D6C1BF7E924113A6B944B0EBBC7F38BCAB3A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = L_30;
		NullCheck(L_31);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_31, _stringLiteralE09C54A0AF0F8642CDE376428629C755D86FAAE5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = L_31;
		NullCheck(L_32);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_32, _stringLiteral263A96F30F1B95067CE48A2827D74D7EB1EC902B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = L_32;
		NullCheck(L_33);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_33, _stringLiteralA5D05B6C8B827AE2AE4E5CEB0E2D5B1080DCDC74, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = L_33;
		NullCheck(L_34);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_34, _stringLiteralA8BF4CDEB064B0B845D46E61449AB314AC0DF528, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = L_34;
		NullCheck(L_35);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_35, _stringLiteral18956D64A49AFFE7DC2EE83BAEFB6E0AAF9B2A67, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = L_35;
		NullCheck(L_36);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_36, _stringLiteralB94B0782E1128628F7A6F17C11CC7AFFE524E819, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = L_36;
		NullCheck(L_37);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_37, _stringLiteralCD9F0DD4CE0C9A08830E2357D0434EBA358C8F60, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = L_37;
		NullCheck(L_38);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_38, _stringLiteral9F051BEEFD9B6EF595B40567E4FE0E6C46F47CB6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = L_38;
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, _stringLiteral9958EB178390C7A94317F440BD54ED7EDE91DAD0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = L_39;
		NullCheck(L_40);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, _stringLiteral3909FE797B1D5DFE975DB56FDF5F4ABD755F9A7C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___shapekeyList_7 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shapekeyList_7), (void*)L_40);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Control::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_Start_m771C85F9F6DEB08721EE519B33FFA0C7948776CA (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	{
		// model_scale = 0.5f;
		__this->___model_scale_4 = (0.5f);
		// }
		return;
	}
}
// System.Void Control::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_Update_mCE2B2E5B7A43ED1E76ED9B3F321212A01283F8C7 (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetAxis("Mouse ScrollWheel") < 0)
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// model_scale -= 0.1f;
		float L_1 = __this->___model_scale_4;
		__this->___model_scale_4 = ((float)il2cpp_codegen_subtract(L_1, (0.100000001f)));
		// if (model_scale <= 0.1f) {
		float L_2 = __this->___model_scale_4;
		if ((!(((float)L_2) <= ((float)(0.100000001f)))))
		{
			goto IL_003b;
		}
	}
	{
		// model_scale = 0.1f;
		__this->___model_scale_4 = (0.100000001f);
	}

IL_003b:
	{
		// transform.localScale = new Vector3(model_scale, model_scale, model_scale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_4 = __this->___model_scale_4;
		float L_5 = __this->___model_scale_4;
		float L_6 = __this->___model_scale_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_7, NULL);
	}

IL_005d:
	{
		// if (Input.GetAxis("Mouse ScrollWheel") > 0)
		float L_8;
		L_8 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_00a2;
		}
	}
	{
		// model_scale += 0.1f;
		float L_9 = __this->___model_scale_4;
		__this->___model_scale_4 = ((float)il2cpp_codegen_add(L_9, (0.100000001f)));
		// transform.localScale = new Vector3(model_scale, model_scale, model_scale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___model_scale_4;
		float L_12 = __this->___model_scale_4;
		float L_13 = __this->___model_scale_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_14, NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Control::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control__ctor_mEAB84F82268EB35BBA7634ED456BBA8EF3FDDFDB (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Visual::init(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Visual_init_m7A792947D7E74F3980129C4CB656E594CA5BE962 (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_liblocator_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("liblocator.so"), "init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(init)(___0_width, ___1_height);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_width, ___1_height);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Visual::set_debug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_set_debug_m2A3E0E9621EC84CC10FEFE818311CDA7E4CA3CA2 (bool ___0_debug, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_liblocator_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("liblocator.so"), "set_debug", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
	reinterpret_cast<PInvokeFunc>(set_debug)(static_cast<int32_t>(___0_debug));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_debug));
	#endif

}
// System.Int32 Visual::process(System.Byte[],System.Single[],System.Single[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Visual_process_mDF9A8C83DB023AE596B4A2276D2524E672416699 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_R, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_T, bool ___3_show_indicator, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, float*, float*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_liblocator_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("liblocator.so"), "process", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_img' to native representation
	uint8_t* ____0_img_marshaled = NULL;
	if (___0_img != NULL)
	{
		____0_img_marshaled = reinterpret_cast<uint8_t*>((___0_img)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___1_R' to native representation
	float* ____1_R_marshaled = NULL;
	if (___1_R != NULL)
	{
		____1_R_marshaled = reinterpret_cast<float*>((___1_R)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_T' to native representation
	float* ____2_T_marshaled = NULL;
	if (___2_T != NULL)
	{
		____2_T_marshaled = reinterpret_cast<float*>((___2_T)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(process)(____0_img_marshaled, ____1_R_marshaled, ____2_T_marshaled, static_cast<int32_t>(___3_show_indicator));
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_img_marshaled, ____1_R_marshaled, ____2_T_marshaled, static_cast<int32_t>(___3_show_indicator));
	#endif

	return returnValue;
}
// System.Boolean Visual::detect(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Visual_detect_mFD06200FA2963F3A80C9F37400422B255DA73B46 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_normal, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_center, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_liblocator_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("liblocator.so"), "detect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_normal' to native representation
	float* ____0_normal_marshaled = NULL;
	if (___0_normal != NULL)
	{
		____0_normal_marshaled = reinterpret_cast<float*>((___0_normal)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___1_center' to native representation
	float* ____1_center_marshaled = NULL;
	if (___1_center != NULL)
	{
		____1_center_marshaled = reinterpret_cast<float*>((___1_center)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(detect)(____0_normal_marshaled, ____1_center_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_normal_marshaled, ____1_center_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Visual::release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_release_mBEC38BF27340CCDEE590D864D7BC9548291446B8 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_liblocator_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("liblocator.so"), "release", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_liblocator_INTERNAL
	reinterpret_cast<PInvokeFunc>(release)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Visual::rotate(System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_rotate_m23C3B9683345059504ED8FE69C5BD3859959F756 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, int32_t ___1_w, int32_t ___2_h, int32_t ___3_angle, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_dst, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t, int32_t, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libcvTools_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcvTools.so"), "rotate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_img' to native representation
	uint8_t* ____0_img_marshaled = NULL;
	if (___0_img != NULL)
	{
		____0_img_marshaled = reinterpret_cast<uint8_t*>((___0_img)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___4_dst' to native representation
	uint8_t* ____4_dst_marshaled = NULL;
	if (___4_dst != NULL)
	{
		____4_dst_marshaled = reinterpret_cast<uint8_t*>((___4_dst)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
	reinterpret_cast<PInvokeFunc>(rotate)(____0_img_marshaled, ___1_w, ___2_h, ___3_angle, ____4_dst_marshaled);
	#else
	il2cppPInvokeFunc(____0_img_marshaled, ___1_w, ___2_h, ___3_angle, ____4_dst_marshaled);
	#endif

}
// System.Void Visual::flip(System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_flip_mA376173E1FECDE12A1899EAA2F70D272CFFC6680 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, int32_t ___1_w, int32_t ___2_h, int32_t ___3_fcode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_dst, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t, int32_t, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libcvTools_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcvTools.so"), "flip", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_img' to native representation
	uint8_t* ____0_img_marshaled = NULL;
	if (___0_img != NULL)
	{
		____0_img_marshaled = reinterpret_cast<uint8_t*>((___0_img)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___4_dst' to native representation
	uint8_t* ____4_dst_marshaled = NULL;
	if (___4_dst != NULL)
	{
		____4_dst_marshaled = reinterpret_cast<uint8_t*>((___4_dst)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
	reinterpret_cast<PInvokeFunc>(flip)(____0_img_marshaled, ___1_w, ___2_h, ___3_fcode, ____4_dst_marshaled);
	#else
	il2cppPInvokeFunc(____0_img_marshaled, ___1_w, ___2_h, ___3_fcode, ____4_dst_marshaled);
	#endif

}
// System.Void Visual::transpose(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_transpose_m9D6952989F346B84CA34949802A0AD085D88D777 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_img, int32_t ___1_w, int32_t ___2_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_dst, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libcvTools_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcvTools.so"), "transpose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_img' to native representation
	uint8_t* ____0_img_marshaled = NULL;
	if (___0_img != NULL)
	{
		____0_img_marshaled = reinterpret_cast<uint8_t*>((___0_img)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_dst' to native representation
	uint8_t* ____3_dst_marshaled = NULL;
	if (___3_dst != NULL)
	{
		____3_dst_marshaled = reinterpret_cast<uint8_t*>((___3_dst)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcvTools_INTERNAL
	reinterpret_cast<PInvokeFunc>(transpose)(____0_img_marshaled, ___1_w, ___2_h, ____3_dst_marshaled);
	#else
	il2cppPInvokeFunc(____0_img_marshaled, ___1_w, ___2_h, ____3_dst_marshaled);
	#endif

}
// System.Void Visual::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_OnRenderImage_mE3BF330E474D6A0E34307403443A09C98788F18B (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_src, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC2ED96C8F6788615150303888C29767E943C5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(shader != null){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___shader_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// material.SetTexture("tex",tex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Visual_get_material_mE016FD54DF457B5F119CAAFB78CFED2F91D1AF82(__this, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___tex_15;
		NullCheck(L_2);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_2, _stringLiteralAEC2ED96C8F6788615150303888C29767E943C5B, L_3, NULL);
		// Graphics.Blit(src, dest,material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___0_src;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___1_dest;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Visual_get_material_mE016FD54DF457B5F119CAAFB78CFED2F91D1AF82(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_4, L_5, L_6, NULL);
		return;
	}

IL_0032:
	{
		// Graphics.Blit(src, dest);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___0_src;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___1_dest;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_7, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Material Visual::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Visual_get_material_mE016FD54DF457B5F119CAAFB78CFED2F91D1AF82 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat == null){
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// mat = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___mat_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_16), (void*)L_3);
		// mat.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_16;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return mat;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___mat_16;
		return L_5;
	}
}
// System.Void Visual::Color32ToByte(UnityEngine.Color32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_Color32ToByte_m7DF7EE5538AE77644C106BF33937994F0BB810EB (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_color, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_image, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle handle = default(GCHandle);
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		// handle = GCHandle.Alloc(color, GCHandleType.Pinned);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_color;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_0, 3, NULL);
		V_0 = L_1;
		// IntPtr ptr = handle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		// Marshal.Copy(ptr, image, 0, width*height*4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_image;
		int32_t L_4 = __this->___width_4;
		int32_t L_5 = __this->___height_5;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_2, L_3, 0, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), 4)), NULL);
		// if(handle != default(GCHandle)){
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = V_1;
		bool L_8;
		L_8 = GCHandle_op_Inequality_m393093145A7BD94D28974D315020F726C0910985(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Visual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_Start_m6BF5F9F9B9878A2B4A011024E9846B227F729A12 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// init(height,width);
		int32_t L_0 = __this->___height_5;
		int32_t L_1 = __this->___width_4;
		bool L_2;
		L_2 = Visual_init_m7A792947D7E74F3980129C4CB656E594CA5BE962(L_0, L_1, NULL);
		// cameraData = new byte[width*height*4];
		int32_t L_3 = __this->___width_4;
		int32_t L_4 = __this->___height_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_3, L_4)), 4)));
		__this->___cameraData_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraData_7), (void*)L_5);
		// imageData = new byte[width*height*4];
		int32_t L_6 = __this->___width_4;
		int32_t L_7 = __this->___height_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_6, L_7)), 4)));
		__this->___imageData_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageData_6), (void*)L_8);
		// colorData = new Color32[width*height];
		int32_t L_9 = __this->___width_4;
		int32_t L_10 = __this->___height_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_9, L_10)));
		__this->___colorData_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorData_8), (void*)L_11);
		// tex = new Texture2D(height,width,TextureFormat.RGBA32,false);
		int32_t L_12 = __this->___height_5;
		int32_t L_13 = __this->___width_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_14, L_12, L_13, 4, (bool)0, NULL);
		__this->___tex_15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tex_15), (void*)L_14);
		// test_model.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___test_model_18;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// test_plane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___test_plane_19;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// Camera.main.depthTextureMode = DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_17);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_17, 1, NULL);
		// webcamTexture = new WebCamTexture(width,height,30);
		int32_t L_18 = __this->___width_4;
		int32_t L_19 = __this->___height_5;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_20 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WebCamTexture__ctor_m75037ECD4778EE55F9987B9E56BD8AF8BC4A28CC(L_20, L_18, L_19, ((int32_t)30), NULL);
		__this->___webcamTexture_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webcamTexture_13), (void*)L_20);
		// webcamTexture.Play();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_21 = __this->___webcamTexture_13;
		NullCheck(L_21);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_21, NULL);
		// if(shader != null && shader.isSupported == false){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22 = __this->___shader_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00e0;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_24 = __this->___shader_17;
		NullCheck(L_24);
		bool L_25;
		L_25 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_24, NULL);
		if (L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_00e0:
	{
		// }
		return;
	}
}
// System.Void Visual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_Update_m68938F8F9C782126DEEEB83E14B703CE32B7E1A8 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral611658BEF150878B3D86985772560285EBDB81A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F55D506CEA2368A628FFDC438C8A3E77C359FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral910FC7F37BC71514E6ED776EDE5A172AF5CDB4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// colorData = webcamTexture.GetPixels32();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___webcamTexture_13;
		NullCheck(L_0);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = WebCamTexture_GetPixels32_mCB0ABCB9D7BCB7ECABF7BF911946DE25C8F26B58(L_0, NULL);
		__this->___colorData_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorData_8), (void*)L_1);
		// Color32ToByte(colorData, cameraData);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = __this->___colorData_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___cameraData_7;
		Visual_Color32ToByte_m7DF7EE5538AE77644C106BF33937994F0BB810EB(__this, L_2, L_3, NULL);
		// transpose(cameraData,width,height,imageData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___cameraData_7;
		int32_t L_5 = __this->___width_4;
		int32_t L_6 = __this->___height_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___imageData_6;
		Visual_transpose_m9D6952989F346B84CA34949802A0AD085D88D777(L_4, L_5, L_6, L_7, NULL);
		// int process_res = process(imageData,R,T,true);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___imageData_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___R_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___T_10;
		int32_t L_11;
		L_11 = Visual_process_mDF9A8C83DB023AE596B4A2276D2524E672416699(L_8, L_9, L_10, (bool)1, NULL);
		// flip(imageData,height,width,0,cameraData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___imageData_6;
		int32_t L_13 = __this->___height_5;
		int32_t L_14 = __this->___width_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___cameraData_7;
		Visual_flip_mA376173E1FECDE12A1899EAA2F70D272CFFC6680(L_12, L_13, L_14, 0, L_15, NULL);
		// tex.LoadRawTextureData(cameraData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___tex_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___cameraData_7;
		NullCheck(L_16);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_16, L_17, NULL);
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___tex_15;
		NullCheck(L_18);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_18, NULL);
		// rawImage.texture = tex;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_19 = __this->___rawImage_14;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___tex_15;
		NullCheck(L_19);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_19, L_20, NULL);
		// if(process_res != 0){
		if (!L_11)
		{
			goto IL_00d8;
		}
	}
	{
		// Debug.Log("slam lost");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral78F55D506CEA2368A628FFDC438C8A3E77C359FD, NULL);
		// test_model.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___test_model_18;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// test_plane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___test_plane_19;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// detected = 20;
		__this->___detected_21 = ((int32_t)20);
		// put = false;
		__this->___put_22 = (bool)0;
		goto IL_010c;
	}

IL_00d8:
	{
		// if(detected > 0){
		int32_t L_23 = __this->___detected_21;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		// Debug.Log("detecting...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral910FC7F37BC71514E6ED776EDE5A172AF5CDB4BF, NULL);
		// bool detect_res = detect(normal,center);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___normal_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = __this->___center_12;
		bool L_26;
		L_26 = Visual_detect_mFD06200FA2963F3A80C9F37400422B255DA73B46(L_24, L_25, NULL);
		// if(detect_res == true){
		if (!L_26)
		{
			goto IL_010c;
		}
	}
	{
		// detected--;
		int32_t L_27 = __this->___detected_21;
		__this->___detected_21 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_010c:
	{
		// if(randCount == 0){
		int32_t L_28 = __this->___randCount_26;
		if (L_28)
		{
			goto IL_0134;
		}
	}
	{
		// ChangeAnimation();
		Visual_ChangeAnimation_m388918B83BDE6ADDB89E5E7AE619EEAFA5969561(__this, NULL);
		// randCount = rd.Next(30 * 3, 30 * 15);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_29 = __this->___rd_25;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_29, ((int32_t)90), ((int32_t)450));
		__this->___randCount_26 = L_30;
		goto IL_0142;
	}

IL_0134:
	{
		// randCount--;
		int32_t L_31 = __this->___randCount_26;
		__this->___randCount_26 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0142:
	{
		// Camera.main.transform.position = new Vector3(T[0], -T[1], T[2]);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32;
		L_32 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___T_10;
		NullCheck(L_34);
		int32_t L_35 = 0;
		float L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = __this->___T_10;
		NullCheck(L_37);
		int32_t L_38 = 1;
		float L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = __this->___T_10;
		NullCheck(L_40);
		int32_t L_41 = 2;
		float L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_36, ((-L_39)), L_42, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_43, NULL);
		// Camera.main.transform.rotation = Quaternion.LookRotation(new Vector3(R[2], -R[5], R[8]), - new Vector3(R[1], -R[4], R[7]));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44;
		L_44 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = __this->___R_9;
		NullCheck(L_46);
		int32_t L_47 = 2;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = __this->___R_9;
		NullCheck(L_49);
		int32_t L_50 = 5;
		float L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = __this->___R_9;
		NullCheck(L_52);
		int32_t L_53 = 8;
		float L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_48, ((-L_51)), L_54, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = __this->___R_9;
		NullCheck(L_56);
		int32_t L_57 = 1;
		float L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = __this->___R_9;
		NullCheck(L_59);
		int32_t L_60 = 4;
		float L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = __this->___R_9;
		NullCheck(L_62);
		int32_t L_63 = 7;
		float L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), L_58, ((-L_61)), L_64, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_65, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_55, L_66, NULL);
		NullCheck(L_45);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_45, L_67, NULL);
		// if(redetect == true){
		bool L_68 = __this->___redetect_23;
		if (!L_68)
		{
			goto IL_01e5;
		}
	}
	{
		// Debug.Log("re-detecting...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral611658BEF150878B3D86985772560285EBDB81A5, NULL);
		// detected = 20;
		__this->___detected_21 = ((int32_t)20);
		// redetect = false;
		__this->___redetect_23 = (bool)0;
	}

IL_01e5:
	{
		// if(detected == 0){
		int32_t L_69 = __this->___detected_21;
		if (L_69)
		{
			goto IL_03b3;
		}
	}
	{
		// Debug.Log("detected!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967, NULL);
		// normal[1] = - normal[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = __this->___normal_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_71 = __this->___normal_11;
		NullCheck(L_71);
		int32_t L_72 = 1;
		float L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((-L_73)));
		// if(normal[1] < 0){
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___normal_11;
		NullCheck(L_74);
		int32_t L_75 = 1;
		float L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((float)L_76) < ((float)(0.0f)))))
		{
			goto IL_024d;
		}
	}
	{
		// normal[1] = -normal[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = __this->___normal_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = __this->___normal_11;
		NullCheck(L_78);
		int32_t L_79 = 1;
		float L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((-L_80)));
		// normal[0] = -normal[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = __this->___normal_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = __this->___normal_11;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((-L_84)));
		// normal[2] = -normal[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = __this->___normal_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_86 = __this->___normal_11;
		NullCheck(L_86);
		int32_t L_87 = 2;
		float L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_88)));
	}

IL_024d:
	{
		// Vector3 p_normal = new Vector3(normal[0],normal[1],normal[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = __this->___normal_11;
		NullCheck(L_89);
		int32_t L_90 = 0;
		float L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_92 = __this->___normal_11;
		NullCheck(L_92);
		int32_t L_93 = 1;
		float L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = __this->___normal_11;
		NullCheck(L_95);
		int32_t L_96 = 2;
		float L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_91, L_94, L_97, NULL);
		// test_plane.transform.position = new Vector3(center[0],-center[1],center[2]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = __this->___test_plane_19;
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_98, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_100 = __this->___center_12;
		NullCheck(L_100);
		int32_t L_101 = 0;
		float L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_103 = __this->___center_12;
		NullCheck(L_103);
		int32_t L_104 = 1;
		float L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = __this->___center_12;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_109), L_102, ((-L_105)), L_108, /*hidden argument*/NULL);
		NullCheck(L_99);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_99, L_109, NULL);
		// test_plane.transform.eulerAngles = Quaternion.FromToRotation(new Vector3(0,1,0), p_normal).eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___test_plane_19;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		memset((&L_112), 0, sizeof(L_112));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_112), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_114;
		L_114 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_112, L_113, NULL);
		V_6 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_6), NULL);
		NullCheck(L_111);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_111, L_115, NULL);
		// test_model.transform.position = new Vector3(center[0],-center[1],center[2]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = __this->___test_model_18;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_116, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_118 = __this->___center_12;
		NullCheck(L_118);
		int32_t L_119 = 0;
		float L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_121 = __this->___center_12;
		NullCheck(L_121);
		int32_t L_122 = 1;
		float L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_124 = __this->___center_12;
		NullCheck(L_124);
		int32_t L_125 = 2;
		float L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_127), L_120, ((-L_123)), L_126, /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_117, L_127, NULL);
		// Vector3 cam_model = new Vector3(T[0],-T[1],T[2]) - test_model.transform.position;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_128 = __this->___T_10;
		NullCheck(L_128);
		int32_t L_129 = 0;
		float L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_131 = __this->___T_10;
		NullCheck(L_131);
		int32_t L_132 = 1;
		float L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = __this->___T_10;
		NullCheck(L_134);
		int32_t L_135 = 2;
		float L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_137), L_130, ((-L_133)), L_136, /*hidden argument*/NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = __this->___test_model_18;
		NullCheck(L_138);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_138, NULL);
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_137, L_140, NULL);
		V_1 = L_141;
		// float dist = Vector3.Cross(cam_model,p_normal).magnitude / p_normal.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_142, L_143, NULL);
		V_7 = L_144;
		float L_145;
		L_145 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		float L_146;
		L_146 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_2 = ((float)(L_145/L_146));
		// float t = (float) Math.Sqrt(cam_model.magnitude * cam_model.magnitude - dist * dist);
		float L_147;
		L_147 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_148;
		L_148 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_149 = V_2;
		float L_150 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_151;
		L_151 = sqrt(((double)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_147, L_148)), ((float)il2cpp_codegen_multiply(L_149, L_150))))));
		V_3 = ((float)L_151);
		// Vector3 p_normal_ext = p_normal.normalized * t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_153 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_152, L_153, NULL);
		V_4 = L_154;
		// Vector3 look = cam_model - p_normal_ext;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_155, L_156, NULL);
		V_5 = L_157;
		// test_model.transform.rotation = Quaternion.LookRotation(look, p_normal);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = __this->___test_model_18;
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
		L_159 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_162;
		L_162 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_160, L_161, NULL);
		NullCheck(L_159);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_159, L_162, NULL);
		// test_model.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = __this->___test_model_18;
		NullCheck(L_163);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_163, (bool)1, NULL);
		// test_plane.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = __this->___test_plane_19;
		NullCheck(L_164);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_164, (bool)1, NULL);
		// detected = -1;
		__this->___detected_21 = (-1);
	}

IL_03b3:
	{
		// }
		return;
	}
}
// System.Void Visual::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_ChangeAnimation_m388918B83BDE6ADDB89E5E7AE619EEAFA5969561 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Animator animator = animate_model.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___animate_model_20;
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_1;
		// if(animator != null){
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// int index = rd.Next(0,animationList.Count);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = __this->___rd_25;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___animationList_27;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_4, 0, L_6);
		V_1 = L_7;
		// animator.Play(animationList[index]);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___animationList_27;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_8);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, L_11, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Visual::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual_OnGUI_mCCDC9ECF1068E7382A3BD154B7580ACA986BD3D1 (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E6628D67752F3902DA04634283C815FDF6139DC);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		// GUIStyle fontStyle = new GUIStyle();
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_0, NULL);
		V_0 = L_0;
		// fontStyle.alignment=TextAnchor.MiddleCenter;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		NullCheck(L_1);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_1, 4, NULL);
		// fontStyle.fontSize=40;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_2, ((int32_t)40), NULL);
		// fontStyle.normal.textColor=Color.white;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = V_0;
		NullCheck(L_3);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4;
		L_4 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_3, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_4);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_4, L_5, NULL);
		// if(GUI.Button(new Rect(10,10,300,110),"PUT",fontStyle)){
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), (10.0f), (10.0f), (300.0f), (110.0f), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GUI_Button_m62135816B7F4BB45759E10E953926E4E0F24D370(L_6, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_7, NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// redetect = true;
		__this->___redetect_23 = (bool)1;
	}

IL_0052:
	{
		// if(GUI.Button(new Rect(10,130,300,230),"DEBUG",fontStyle)){
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_9), (10.0f), (130.0f), (300.0f), (230.0f), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GUI_Button_m62135816B7F4BB45759E10E953926E4E0F24D370(L_9, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// cxx_debug = !cxx_debug;
		bool L_12 = __this->___cxx_debug_24;
		__this->___cxx_debug_24 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		// set_debug(cxx_debug);
		bool L_13 = __this->___cxx_debug_24;
		Visual_set_debug_m2A3E0E9621EC84CC10FEFE818311CDA7E4CA3CA2(L_13, NULL);
	}

IL_0092:
	{
		// if(GUI.Button(new Rect(10,250,300,350),"CHANGE",fontStyle)){
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_14), (10.0f), (250.0f), (300.0f), (350.0f), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = GUI_Button_m62135816B7F4BB45759E10E953926E4E0F24D370(L_14, _stringLiteral6E6628D67752F3902DA04634283C815FDF6139DC, L_15, NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		// ChangeAnimation();
		Visual_ChangeAnimation_m388918B83BDE6ADDB89E5E7AE619EEAFA5969561(__this, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void Visual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visual__ctor_mB53369B84F0285E4DF4C44E1635BC626CFF8CF4A (Visual_t6C0551F9F8B17E03EF2490BA3803185378104868* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral999A99E841361F022F64587F6F9C6EC44F920855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12C13441E908B46D0E8552680587F5595D959F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int width = 800;
		__this->___width_4 = ((int32_t)800);
		// int height = 600;
		__this->___height_5 = ((int32_t)600);
		// float[] R = new float[9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___R_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___R_9), (void*)L_0);
		// float[] T = new float[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___T_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_10), (void*)L_1);
		// float[] normal = new float[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___normal_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normal_11), (void*)L_2);
		// float[] center = new float[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___center_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___center_12), (void*)L_3);
		// int detected = 20;
		__this->___detected_21 = ((int32_t)20);
		// private Random rd = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_4, NULL);
		__this->___rd_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rd_25), (void*)L_4);
		// private List<string> animationList = new List<string>{
		//     "Attack","Bounce","Clicked","Death","Eat","Fear","Fly","Hit",
		//     "Idle_A", "Idle_B", "Idle_C","Jump","Roll","Run","Sit","Swim","Walk"
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral0CB33C9D63186E60939C402D0EEBF64D17107C18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteral50DF137831ACFB598987C4AE8D41E0F4B4E47081, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, _stringLiteral56647EFAA517CA09DD4F9ABD9A47517CB7CE825C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, _stringLiteral539886CC0D6E626CD59CCCB9A251E15C3F8DC3EE, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, _stringLiteral9E080F8FE4FF1580E9EF2538702D61A2DFD66C41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = L_14;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, _stringLiteral999A99E841361F022F64587F6F9C6EC44F920855, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15;
		NullCheck(L_16);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, _stringLiteral7957CA68CCBB55CD49F626B0B7202514AB7CAAAD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = L_18;
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_20, _stringLiteralAF85561B1DE2E9142FAD4E2A0321B977877944A7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, _stringLiteralF60A604A8904268B2FCB7A84B9C54E433B6C1C27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = L_21;
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___animationList_27 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationList_27), (void*)L_22);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1_inline (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) 
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
