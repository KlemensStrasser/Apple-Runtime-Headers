//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/DGDescriptionCompositionProvider-Protocol.h>

@class DGDescription, PLEditSource;

@interface DGDescriptionCompositionProvider : NSObject <DGDescriptionCompositionProvider>
{
    DGDescription *_renderDescription;
    PLEditSource *_source;
}

- (void).cxx_destruct;
- (id)source;
- (long long)orientation;
- (id)playbackSettings;
- (id)renderDescription;
- (id)editDescription;
- (id)composition;
- (id)initWithRenderDescription:(id)arg1 source:(id)arg2;

@end

