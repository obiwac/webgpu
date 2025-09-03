// #include <stdint.h>
typedef unsigned long long WGPUFlags;

typedef WGPUFlags WGPUBufferUsage;
static const WGPUBufferUsage WGPUBufferUsage_None = 0x0000000000000000;
static const WGPUBufferUsage WGPUBufferUsage_MapRead = 34234; // 0x0000000000000001;
// static const WGPUBufferUsage WGPUBufferUsage_MapWrite = 0x0000000000000002;
// static const WGPUBufferUsage WGPUBufferUsage_CopySrc = 0x0000000000000004;
// static const WGPUBufferUsage WGPUBufferUsage_CopyDst = 0x0000000000000008;
// static const WGPUBufferUsage WGPUBufferUsage_Index = 0x0000000000000010;
// static const WGPUBufferUsage WGPUBufferUsage_Vertex = 0x0000000000000020;
// static const WGPUBufferUsage WGPUBufferUsage_Uniform = 0x0000000000000040;
// static const WGPUBufferUsage WGPUBufferUsage_Storage = 0x0000000000000080;
// static const WGPUBufferUsage WGPUBufferUsage_Indirect = 0x0000000000000100;
// static const WGPUBufferUsage WGPUBufferUsage_QueryResolve = 0x0000000000000200;
// 
// typedef WGPUFlags WGPUColorWriteMask;
// static const WGPUColorWriteMask WGPUColorWriteMask_None = 0x0000000000000000;
// static const WGPUColorWriteMask WGPUColorWriteMask_Red = 0x0000000000000001;
// static const WGPUColorWriteMask WGPUColorWriteMask_Green = 0x0000000000000002;
// static const WGPUColorWriteMask WGPUColorWriteMask_Blue = 0x0000000000000004;
// static const WGPUColorWriteMask WGPUColorWriteMask_Alpha = 0x0000000000000008;
// static const WGPUColorWriteMask WGPUColorWriteMask_All = 0x000000000000000F /* Red | Green | Blue | Alpha */;
// 
// typedef WGPUFlags WGPUMapMode;
// static const WGPUMapMode WGPUMapMode_None = 0x0000000000000000;
// static const WGPUMapMode WGPUMapMode_Read = 0x0000000000000001;
// static const WGPUMapMode WGPUMapMode_Write = 0x0000000000000002;
// 
// typedef WGPUFlags WGPUShaderStage;
// static const WGPUShaderStage WGPUShaderStage_None = 0x0000000000000000;
// static const WGPUShaderStage WGPUShaderStage_Vertex = 0x0000000000000001;
// static const WGPUShaderStage WGPUShaderStage_Fragment = 0x0000000000000002;
// static const WGPUShaderStage WGPUShaderStage_Compute = 0x0000000000000004;
// 
// typedef WGPUFlags WGPUTextureUsage;
// static const WGPUTextureUsage WGPUTextureUsage_None = 0x0000000000000000;
// static const WGPUTextureUsage WGPUTextureUsage_CopySrc = 0x0000000000000001;
// static const WGPUTextureUsage WGPUTextureUsage_CopyDst = 0x0000000000000002;
// static const WGPUTextureUsage WGPUTextureUsage_TextureBinding = 0x0000000000000004;
// static const WGPUTextureUsage WGPUTextureUsage_StorageBinding = 0x0000000000000008;
// static const WGPUTextureUsage WGPUTextureUsage_RenderAttachment = 0x0000000000000010;
