//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLSimDriver/MTLBlitCommandEncoder-Protocol.h>

@protocol MTLTexture;

@protocol MTLBlitCommandEncoderSPI <MTLBlitCommandEncoder>
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_da2e99ad)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_da2e99ad)arg9 options:(unsigned long long)arg10;
@end

