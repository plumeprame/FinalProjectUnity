struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 84 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//15. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//16. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//17. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//18. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//19. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//22. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//23. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//24. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//29. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//32. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//33. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//34. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//35. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//36. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//37. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//38. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//39. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//43. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//44. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//45. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//46. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//47. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//48. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//49. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//50. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//51. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//52. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//53. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//54. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//55. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//56. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//57. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//58. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//59. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//60. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//61. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//62. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//63. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//64. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//65. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//66. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//67. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//68. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//69. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//70. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//71. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//72. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//73. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//74. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//75. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//76. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//77. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//78. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//79. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//80. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//81. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//82. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//83. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
