//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLDepthStencilState, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@protocol MTLFragmentRenderCommandEncoder <MTLCommandEncoder>
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned int)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned int)arg4;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned int)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned int)arg4 triangleIndices:(const char *)arg5 triangleCount:(unsigned int)arg6;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned int)arg2 triangleIndices:(const char *)arg3 triangleCount:(unsigned int)arg4;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id <MTLDepthStencilState>)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atTextureIndex:(unsigned int)arg2 samplerState:(id <MTLSamplerState>)arg3 atSamplerIndex:(unsigned int)arg4;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned int *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setScissorRect:(CDStruct_0a4f9365)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;

@optional
- (void)setStencilStoreActionOptions:(unsigned int)arg1;
- (void)setDepthStoreActionOptions:(unsigned int)arg1;
- (void)setColorStoreActionOptions:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setStencilStoreAction:(unsigned int)arg1;
- (void)setDepthStoreAction:(unsigned int)arg1;
- (void)setColorStoreAction:(unsigned int)arg1 atIndex:(unsigned int)arg2;
@end

