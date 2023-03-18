Shader "Toon/ToonRamp" {
	
	Properties {
		_Color ("Main Color", Color) = (0.5,0.5,0.5,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		// _BumpMap ("Bumpmap", 2D) = "bump" {}
		_Ramp ("Toon Ramp (RGB)", 2D) = "white" {}
		_RimColor ("Rim Color", Color) = (1,1,1,1)
		_RimPower ("Rim Power", Range (0.1,10)) = 5.25
	}

	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 100
		
		CGPROGRAM
		#pragma surface surf ToonRamp

		sampler2D _Ramp;

		// custom lighting function that uses a texture ramp based
		// on angle between light direction and normal
		#pragma lighting ToonRamp exclude_path:prepass
		inline half4 LightingToonRamp (SurfaceOutput o, half3 lightDir, half atten)
		{
			#ifndef USING_DIRECTIONAL_LIGHT
			lightDir = normalize (lightDir);
			#endif
			
			half d = dot (o.Normal, lightDir) * 0.5 + 0.5;
			half3 ramp = tex2D (_Ramp, float2 (d,0)).rgb;
			
			half4 c;
			c.rgb = o.Albedo * _LightColor0.rgb * ramp * atten * 2;
			c.a = 0;
			return c;
		}

		sampler2D _MainTex;
		// sampler2D _BumpMap;
		float4 _Color;
		float4 _RimColor;
		float _RimPower;

		struct Input {
			float2 uv_MainTex : TEXCOORD0;
			// float2 uv_BumpMap : TEXCOORD1;
			float3 viewDir;
		};

		void surf (Input IN, inout SurfaceOutput o) {
			half4 c = tex2D(_MainTex, IN.uv_MainTex) * _Color;
			o.Albedo = c.rgb;
			// o.Normal = UnpackNormal (tex2D (_BumpMap, IN.uv_BumpMap));
			half rim = 1.0 - saturate(dot (normalize(IN.viewDir), o.Normal));
			o.Emission = (_RimColor.rgb * c) * pow (rim, _RimPower);
			o.Alpha = c.a;
		}
		ENDCG
	}
	Fallback "Diffuse"
}
